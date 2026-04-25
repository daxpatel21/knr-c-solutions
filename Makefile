# =============================================================================
# Root Makefile — K&R C Solutions
# =============================================================================
# Usage:
#   make all          — build every exercise
#   make ch-01        — build all exercises in chapter 1
#   make clean        — remove all binaries
#   make help         — show this message
# =============================================================================

CHAPTERS := $(wildcard ch-*/.)

.PHONY: all clean help $(CHAPTERS)

all: $(CHAPTERS)

$(CHAPTERS):
	$(MAKE) -C $@ all

clean:
	@for ch in $(CHAPTERS); do \
		$(MAKE) -C $$ch clean; \
	done

# Convenience targets per chapter
ch-%:
	$(MAKE) -C ch-$* all

help:
	@echo ""
	@echo "  K&R C Solutions — Build System"
	@echo "  ================================"
	@echo "  make all          Build every exercise"
	@echo "  make ch-01        Build all of chapter 1"
	@echo "  make clean        Remove all binaries"
	@echo "  make help         Show this message"
	@echo ""
