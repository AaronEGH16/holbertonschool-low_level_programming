syntax on

call plug#begin('~/.vim/plugged')

" ALE linter
Plug 'dense-analysis/ale'

" BETTY PLUG for ALE
Plug 'JuanDAC/betty-ale-vim'

" GruvBox vim theme
Plug 'morhetz/gruvbox'

" Lightline for vim
Plug 'itchyny/lightline.vim'

call plug#end()

" importar y cambiar tema de fondo
colorscheme gruvbox

" Autocompletar paréntesis, llaves, corchetes, etc.

inoremap ( ()<ESC>i
inoremap { {}<ESC>i
inoremap {<CR> {<CR><CR>}<c-up>
inoremap [ []<ESC>i
inoremap <. <.><ESC>i
inoremap ' ''<ESC>i
inoremap " ""<ESC>i
inoremap /** /**<CR><CR><c-backspace>/<c-up>

set background=dark
" cambia el tiempo de actualización
set updatetime=100
" esto es para que el tab no se expanda mas de 4 espacios
set tabstop=4 softtabstop=4 shiftwidth=4 noexpandtab
" cambia color de la columna de progreso (derecha)
set colorcolumn=80
" añade los numeros de filas (izquierda)
set nu
" añade la barra de estado de abajo
set laststatus=2
" remarca la barra de progreso
highlight ColorColumn guibg=red

" parte del BETTY plug
let g:ale_linters = {'c': ['betty-style', 'betty-doc']}

" simpre muestra la columna de ALE
let g:ale_sign_column_always = 1
" una forma de autocorrector que arregla lo que puede cuando guardas
let g:ale_fix_on_save = 1
