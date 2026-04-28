TARGET  := ex-1-3
CC      := gcc
CFLAGS  := -Wall -Wextra -Wpedantic -std=c99 -g

SRC_DIR := src
BIN_DIR := bin

SRC     := $(SRC_DIR)/$(TARGET).c
BIN     := $(BIN_DIR)/$(TARGET)

.PHONY: all clean run

all: $(BIN)

$(BIN): $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $<

run: all
	./$(BIN)

clean:
	rm -rf $(BIN_DIR)
