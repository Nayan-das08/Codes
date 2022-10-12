:set number
:set autoindent
:set tabstop=4
:set shiftwidth=4
:set smarttab
:set softtabstop=4
:set mouse=a

call plug#begin()

Plug 'https://github.com/vim-airline/vim-airline'
Plug 'https://github.com/preservim/nerdtree'
Plug 'https://github.com/rafi/awesome-vim-colorschemes'
Plug 'https://github.com/neoclide/coc.nvim'
"Plug 'https://github.com/glepnir/dashboard-nvim'
Plug 'https://github.com/jiangmiao/auto-pairs'
Plug 'https://github.com/mhinz/vim-startify'
Plug 'https://github.com/ryanoasis/vim-devicons'
Plug 'https://github.com/tribela/vim-transparent'
Plug 'https://github.com/tomasiser/vim-code-dark'
Plug 'https://github.com/Mofiqul/vscode.nvim'
Plug 'https://github.com/lukas-reineke/indent-blankline.nvim'
"Plug 'https://github.com/romgrk/barbar.nvim'
Plug 'https://github.com/seblj/nvim-tabline'
Plug 'https://github.com/akinsho/bufferline.nvim'
call plug#end()

nnoremap <C-e> :NERDTreeToggle<CR>
nnoremap <C-w> :wq<CR>
nnoremap <C-q> :q!<CR>
nnoremap <C-z> :u<CR>
nnoremap <C-S-s> :Startify<CR>
let g:NERDTreeDirArrowExpandable="+"
let g:NERDTreeDirArrowCollapsible="~"

:colorscheme OceanicNext

let g:vscode_style = "dark"
let g:vscode_italic_comment = 1

"autocmd VimEnter * NERDTree | wincmd p
autocmd BufEnter * if tabpagenr('$') == 1 && winnr('$') == 1 && exists('b:NERDTree') && b:NERDTree.isTabTree() | quit | endif
"autocmd BufWinEnter * if getcmdwintype() == '' | silent NERDTreeMirror | endif
"autocmd VimEnter * NERDTreeMirror
let g:startify_custom_header = [
 \ '                          __                ',
 \ '                         /\ \__             ',
 \ '    ____     __      ____\ \ ,_\    __      ',
 \ '   /`,__\  /`__`\   /`,__\\ \ \/  /`__`\    ',
 \ '  /\__, `\/\ \L\.\_/\__, `\\ \ \_/\ \L\.\_  ',
 \ '  \/\____/\ \__/.\_\/\____/ \ \__\ \__/.\_\ ',
 \ '   \/___/  \/__/\/_/\/___/   \/__/\/__/\/_/ ',
 \ '                                            ',
 \ '                                            ',
 \ '                                   __             ',
 \ '                                  /\ \            ',
 \ '  __  __    ____    ___    ___    \_\ \     __    ',
 \ ' /\ \/\ \  /`,__\  /`___\ / __`\  /`_` \  /`__`\  ',
 \ ' \ \ \_/ |/\__, `\/\ \__//\ \L\ \/\ \L\ \/\  __/  ',
 \ '  \ \___/ \/\____/\ \____\ \____/\ \___,_\ \____\ ',
 \ '   \/__/   \/___/  \/____/\/___/  \/__,_ /\/____/ ',
 \ '                                                  ',
 \]

let g:startify_files_number = 8 

let g:startify_bookmarks = [
  \ { 'i': '~/.config/nvim/init.vim' },
  \ ]

let g:startify_lists = [
      \ { 'header': ['   Bookmarks'],				'type': 'bookmarks' },
      \ { 'header': ['   Recently Opened Files'],   'type': 'files' },
      \ ]
