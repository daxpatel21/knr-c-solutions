#!/usr/bin/env bash
# =============================================================================
# setup.sh — Install everything needed on Ubuntu (run once)
# =============================================================================
# Usage:  bash scripts/setup.sh        (from repo root)
#    or:  cd scripts && bash setup.sh  (from scripts/)
# =============================================================================

set -euo pipefail

# Always resolve to repo root (parent of scripts/)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
cd "${REPO_ROOT}"
echo "==> Working from: ${REPO_ROOT}"

echo "==> Updating package list..."
sudo apt-get update -y

echo "==> Installing core tools..."
sudo apt-get install -y \
    gcc \
    make \
    vim \
    git \
    clang-format \
    valgrind \
    gdb \
    curl

echo "==> Installing vim-plug..."
curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim

echo "==> Copying .vimrc..."
cp "${REPO_ROOT}/.vimrc" ~/.vimrc

echo "==> Installing Vim plugins (headless)..."
# Pass NONE to skip .vimrc on first run (avoids colorscheme error during install)
vim -u ~/.vimrc +PlugInstall +qall 2>/dev/null || true

echo "==> Plugins installed. Verifying colorscheme loads cleanly..."
vim +qall 2>/dev/null || true

echo "==> Making scripts executable..."
chmod +x "${REPO_ROOT}/scripts/new-exercise.sh"
chmod +x "${REPO_ROOT}/scripts/setup.sh"

echo ""
echo "✓ Setup complete."
echo ""
echo "Verify versions:"
gcc  --version | head -1
make --version | head -1
vim  --version | head -1
git  --version
