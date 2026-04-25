" =============================================================================
" .vimrc — C Development Config for K&R exercises
" =============================================================================
" Install vim-plug first:
"   curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
"     https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
" Then open vim and run:  :PlugInstall
" =============================================================================

" ---- Plugin manager ---------------------------------------------------------
call plug#begin('~/.vim/plugged')

Plug 'dense-analysis/ale'           " real-time linting (gcc warnings inline)
Plug 'preservim/nerdtree'           " file tree sidebar
Plug 'vim-airline/vim-airline'      " status bar
Plug 'morhetz/gruvbox'              " colour scheme
Plug 'tpope/vim-commentary'         " gc to comment lines
Plug 'ctrlpvim/ctrlp.vim'          " fuzzy file finder (Ctrl-P)
Plug 'jiangmiao/auto-pairs'         " auto-close brackets

call plug#end()

" ---- Core settings ----------------------------------------------------------
set nocompatible
filetype plugin indent on
syntax on

set number                          " line numbers
set relativenumber                  " relative line numbers (fast navigation)
set cursorline                      " highlight current line
set showmatch                       " highlight matching brackets
set ruler
set laststatus=2
set encoding=utf-8

" ---- Indentation (K&R style: 4-space, no tabs) ------------------------------
set tabstop=4
set shiftwidth=4
set expandtab
set smartindent
set autoindent

" ---- Search -----------------------------------------------------------------
set incsearch                       " search as you type
set hlsearch                        " highlight matches
set ignorecase
set smartcase
nnoremap <Esc><Esc> :nohlsearch<CR>

" ---- Colour scheme ----------------------------------------------------------
set background=dark
" Guard: gruvbox only available after :PlugInstall; silently skip on first run
silent! colorscheme gruvbox

" ---- File tree (NERDTree) ---------------------------------------------------
nnoremap <C-n> :NERDTreeToggle<CR>

" ---- Build shortcuts --------------------------------------------------------
" Press F5 to compile current exercise
nnoremap <F5> :make all<CR>
" Press F6 to run
nnoremap <F6> :!make run<CR>
" Press F4 to clean
nnoremap <F4> :make clean<CR>

" ---- ALE (linting) ----------------------------------------------------------
let g:ale_linters = { 'c': ['gcc'] }
let g:ale_c_gcc_options = '-Wall -Wextra -Wpedantic -std=c99'
let g:ale_sign_error   = '✗'
let g:ale_sign_warning = '▲'
let g:ale_lint_on_save = 1

" ---- Splits feel natural ----------------------------------------------------
set splitbelow
set splitright
nnoremap <C-h> <C-w>h
nnoremap <C-l> <C-w>l
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k

" ---- Strip trailing whitespace on save --------------------------------------
autocmd BufWritePre *.c,*.h :%s/\s\+$//e

" ---- Show 80-char guide -----------------------------------------------------
set colorcolumn=80
highlight ColorColumn ctermbg=235

" ---- Statusline shows full path ---------------------------------------------
set statusline=%F\ %m%r%h%w\ [%Y]\ [%{&ff}]\ %=[line\ %l\/%L\ col\ %c]
