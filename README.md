# K&R C Solutions

> Complete solutions to all exercises from **The C Programming Language** (2nd Edition)
> by Brian W. Kernighan & Dennis M. Ritchie — written in clean, commented C99.

```
 _  ___  ____     ____
| |/ / |/ /\ \   / /  |  The C Programming Language
| ' /| ' /  \ \ / /|  |  Kernighan & Ritchie — 2nd Edition
| . \|  <    \ V / |  |  All exercises, chapter by chapter
|_|\_\_|\_\   \_/  |__|
```

---

## Table of Contents

- [About](#about)
- [Prerequisites](#prerequisites)
- [Quick Start](#quick-start)
- [Repository Structure](#repository-structure)
- [How to Build and Run](#how-to-build-and-run)
- [Creating a New Exercise](#creating-a-new-exercise)
- [Code Style](#code-style)
- [Progress](#progress)
- [Contributing](#contributing)
- [Resources](#resources)

---

## About

This repository works through every exercise in K&R — one of the most important
books ever written about programming. Each solution is:

- **Self-contained** — one folder, one source file, one binary.
- **Commented** — explains *what* and *why*, not just *how*.
- **Compilable** — every exercise has its own `Makefile`.
- **Beginner-friendly** — written for people learning C for the first time.

---

## Prerequisites

You need a Linux/macOS system (or WSL on Windows) with the following tools.

### Ubuntu / Debian (one command)

```bash
sudo apt-get update && sudo apt-get install -y gcc make vim git clang-format valgrind gdb curl
```

### macOS (Homebrew)

```bash
brew install gcc make vim git clang-format
```

### Verify installation

```bash
gcc  --version   # should print gcc 11+ or similar
make --version   # should print GNU Make 4+
vim  --version   # should print VIM 8+ or 9+
git  --version
```

---

## Quick Start

```bash
# 1. Clone the repo
git clone https://github.com/<your-username>/knr-c-solutions.git
cd knr-c-solutions

# 2. Run setup (installs Vim plugins, makes scripts executable)
bash scripts/setup.sh

# 3. Build and run your first exercise
cd ch-01/ex-1-1
make run
```

Expected output:

```
hello, world
```

---

## Repository Structure

```
knr-c-solutions/
│
├── ch-01/                    ← Chapter 1: A Tutorial Introduction
│   ├── ex-1-1/               ← Exercise 1-1
│   │   ├── src/
│   │   │   └── ex-1-1.c      ← Source code
│   │   ├── bin/              ← Compiled binary (git-ignored)
│   │   └── Makefile          ← Build this exercise
│   ├── ex-1-2/
│   │   └── ...
│   └── Makefile              ← Build all of chapter 1
│
├── ch-02/                    ← Chapter 2: Types, Operators and Expressions
│   └── ...
│
├── scripts/
│   ├── new-exercise.sh       ← Scaffold a new exercise instantly
│   └── setup.sh              ← One-time environment setup
│
├── .clang-format             ← Consistent code formatting rules
├── .gitignore
├── .vimrc                    ← Vim config for C development
├── Makefile                  ← Build every exercise at once
└── README.md
```

### Naming Convention

| Thing | Convention | Example |
|---|---|---|
| Chapter folder | `ch-XX` (zero-padded) | `ch-01`, `ch-12` |
| Exercise folder | `ex-CH-EX` | `ex-1-6`, `ex-2-10` |
| Source file | `ex-CH-EX.c` | `ex-1-6.c` |
| Binary | `ex-CH-EX` (inside `bin/`) | `bin/ex-1-6` |

---

## How to Build and Run

### Single exercise

```bash
cd ch-01/ex-1-1
make        # compiles → bin/ex-1-1
make run    # compiles + runs
make clean  # removes bin/
```

### Entire chapter

```bash
make ch-01  # builds every exercise in chapter 1
```

### Everything

```bash
make all    # builds every exercise in the repo
make clean  # removes all binaries
```

### Compiler flags used

```
gcc -Wall -Wextra -Wpedantic -std=c99 -g
```

| Flag | What it does |
|---|---|
| `-Wall` | Enable most common warnings |
| `-Wextra` | Enable extra warnings |
| `-Wpedantic` | Strict ISO C compliance |
| `-std=c99` | Use C99 standard |
| `-g` | Include debug symbols |

---

## Creating a New Exercise

Use the scaffold script — it creates the folder, `Makefile`, and stub `.c` file
automatically:

```bash
# Scaffold exercise 1-6
bash scripts/new-exercise.sh 1 6

# Scaffold exercise 3-5
bash scripts/new-exercise.sh 3 5
```

Output:

```
Created ch-01/ex-1-6/Makefile
Created ch-01/ex-1-6/src/ex-1-6.c

✓ Scaffolded ex-1-6 in ch-01/ex-1-6
  Edit: ch-01/ex-1-6/src/ex-1-6.c
  Build: cd ch-01/ex-1-6 && make
  Run:   cd ch-01/ex-1-6 && make run
```

Then open the file in Vim and write your solution:

```bash
vim ch-01/ex-1-6/src/ex-1-6.c
```

Inside Vim: press **F5** to compile, **F6** to run, **F4** to clean.

---

## Code Style

All code follows K&R style with 4-space indentation.

Format any file automatically:

```bash
clang-format -i ch-01/ex-1-1/src/ex-1-1.c
```

Format everything at once:

```bash
find . -name "*.c" | xargs clang-format -i
```

### Header comment (every `.c` file)

```c
/*
 * K&R — The C Programming Language, 2nd Edition
 * Chapter 1, Exercise 1-1
 *
 * Run the "hello, world" program on your system.
 *
 * Author : Your Name
 * Date   : YYYY-MM-DD
 */
```

---

## Progress

| Chapter | Title | Exercises | Done |
|---|---|---|---|
| 1 | A Tutorial Introduction | 24 | 🔲 0 / 24 |
| 2 | Types, Operators and Expressions | 10 | 🔲 0 / 10 |
| 3 | Control Flow | 6 | 🔲 0 / 6 |
| 4 | Functions and Program Structure | 14 | 🔲 0 / 14 |
| 5 | Pointers and Arrays | 20 | 🔲 0 / 20 |
| 6 | Structures | 7 | 🔲 0 / 7 |
| 7 | Input and Output | 9 | 🔲 0 / 9 |
| 8 | The UNIX System Interface | 8 | 🔲 0 / 8 |

> Update this table as you complete exercises.

---

## Vim Quick Reference

| Key | Action |
|---|---|
| `F5` | Compile (make all) |
| `F6` | Run (make run) |
| `F4` | Clean (make clean) |
| `Ctrl-N` | Toggle file tree |
| `Ctrl-P` | Fuzzy file finder |
| `gc` | Comment/uncomment line |
| `:sp file` | Horizontal split |
| `:vsp file` | Vertical split |
| `Ctrl-h/j/k/l` | Navigate splits |

---

## Git Tips

```bash
# Commit a single exercise
git add ch-01/ex-1-1/
git commit -m "ch01: ex-1-1 — hello world"

# Good commit message format
# ch01: ex-1-6 — verify EOF, positive, negative returns
# ch02: ex-2-3 — htoi hex-to-integer conversion

# Push
git push origin main
```

---

## Debugging with GDB

```bash
cd ch-01/ex-1-1
make              # -g flag keeps debug symbols
gdb bin/ex-1-1

(gdb) break main  # set breakpoint at main
(gdb) run         # start
(gdb) next        # step over
(gdb) print x     # inspect variable
(gdb) quit
```

## Memory checking with Valgrind

```bash
valgrind --leak-check=full bin/ex-1-1
```

---

## Contributing

Found a better solution or a bug?

1. Fork the repo
2. Create a branch: `git checkout -b fix/ex-1-6`
3. Commit your changes
4. Open a Pull Request with a clear description

Please keep solutions self-contained and match the existing code style.

---

## Resources

| Resource | Link |
|---|---|
| K&R (buy/find the book) | [Amazon](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628) |
| C99 Standard Reference | [cppreference.com](https://en.cppreference.com/w/c) |
| GCC Docs | [gcc.gnu.org](https://gcc.gnu.org/onlinedocs/) |
| Beej's Guide to C | [beej.us/guide/bgc](https://beej.us/guide/bgc/) |
| Vim Tutorial | `vimtutor` (run in terminal) |

---

*Built with ♦ and patience — one exercise at a time.*
