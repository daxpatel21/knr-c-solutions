#!/usr/bin/env bash
# =============================================================================
# new-exercise.sh — scaffold a new K&R exercise
# =============================================================================
# Usage:
#   ./scripts/new-exercise.sh 1 6
#   Creates: ch-01/ex-1-6/src/ex-1-6.c  +  ch-01/ex-1-6/Makefile
# =============================================================================

set -euo pipefail

if [[ $# -ne 2 ]]; then
    echo "Usage: $0 <chapter> <exercise>"
    echo "Example: $0 1 6"
    exit 1
fi

CHAPTER=$(printf "%02d" "$1")
EXERCISE="$2"
TARGET="ex-${1}-${EXERCISE}"
CH_DIR="ch-${CHAPTER}"
EX_DIR="${CH_DIR}/${TARGET}"
SRC_DIR="${EX_DIR}/src"
BIN_DIR="${EX_DIR}/bin"

# ---- Create directories -----------------------------------------------------
mkdir -p "${SRC_DIR}" "${BIN_DIR}"

# ---- Create chapter Makefile if missing -------------------------------------
CH_MK="${CH_DIR}/Makefile"
if [[ ! -f "${CH_MK}" ]]; then
cat > "${CH_MK}" <<'CHMK'
EXERCISES := $(wildcard ex-*/.)

.PHONY: all clean $(EXERCISES)

all: $(EXERCISES)

$(EXERCISES):
	$(MAKE) -C $@ all

clean:
	@for ex in $(EXERCISES); do \
		$(MAKE) -C $$ex clean; \
	done
CHMK
    echo "Created ${CH_MK}"
fi

# ---- Create exercise Makefile ------------------------------------------------
EX_MK="${EX_DIR}/Makefile"
cat > "${EX_MK}" <<EXMK
TARGET  := ${TARGET}
CC      := gcc
CFLAGS  := -Wall -Wextra -Wpedantic -std=c99 -g

SRC_DIR := src
BIN_DIR := bin

SRC     := \$(SRC_DIR)/\$(TARGET).c
BIN     := \$(BIN_DIR)/\$(TARGET)

.PHONY: all clean run

all: \$(BIN)

\$(BIN): \$(SRC)
	@mkdir -p \$(BIN_DIR)
	\$(CC) \$(CFLAGS) -o \$@ \$<

run: all
	./\$(BIN)

clean:
	rm -rf \$(BIN_DIR)
EXMK
echo "Created ${EX_MK}"

# ---- Create stub C file ------------------------------------------------------
SRC_FILE="${SRC_DIR}/${TARGET}.c"
DATE=$(date +%Y-%m-%d)
cat > "${SRC_FILE}" <<CSRC
/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter ${1}, Exercise ${1}-${EXERCISE}
 *
 * <exercise description here>
 *
 * Author : <your-name>
 * Date   : ${DATE}
 */

#include <stdio.h>

int main(void)
{
    /* TODO */
    return 0;
}
CSRC
echo "Created ${SRC_FILE}"

echo ""
echo "✓ Scaffolded ${TARGET} in ${EX_DIR}"
echo "  Edit: ${SRC_FILE}"
echo "  Build: cd ${EX_DIR} && make"
echo "  Run:   cd ${EX_DIR} && make run"
