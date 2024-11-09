# Neovim Config For OIers Based On Lazy Vim

## Now with only C++ support

## Caution: This is only my on config

Used：

CompetiTest: https://github.com/xeluxee/competitest.nvim

WezTerm: https://github.com/wez/wezterm

Neovim: https://github.com/neovim/neovim

Lazyvim: https://github.com/LazyVim/LazyVim

Neovide: https://github.com/neovide/neovide

## Install `Lazyvim, Neovim, Wezterm and Neovide` before use

## Installation：
1. Download .zip file in the latest release
2. Drag .wezterm.lua to C:\Users\Name\ 
3. Place nvim and nvim-data folers in C:\Users\Name\AppData\Local and replace the original files
4. Install the Competitive_Companion_2.56.0.crx browser extension
5. Customize the extension so that the port is 12345

## Usage：
1. Open Wezterm

2. Navigate to youor working directory

3. Input `neovide`

4. Use `Find File` or `f` to find files
   
5. Happy Coding!
   
## Useful Hotkeys：
Caution: You have to be in "Normal Mode" to do use these hotkeys

`0` -> To the start of the line

`$` -> To the end of the line

`ggVG` -> Select the whole file

`v` -> Open Visual Mode, move your cursor to select text

`V` -> Open Visual Mode, move your cursor up and down to select lines

`gcc` -> Comment this line

`y` -> Copy the selected text

`p` -> Paste

`d` -> Delete the selected text

`dd` -> Delete the whole line

`s` -> Open Flash Mode to navigate quickly on the page

`/` -> Vim Search

`Space + e` -> Open Sidebar，use cursor to select file

`hjkl` -> Left, Down, Up, Right

## Useful commands：

`:wq` Save and exit

`:Lazy` Open lazy.nvim UI

`:Mason` Open mason.nvim UI

`:CompetiTest`

Caution: if you use my config, your file tree should be like this:

```
cpp

├─executables 				// 可执行文件

├─testcases				// testcases 数据

├─A.cpp

└─ ...
```

`:CompetiTest run` 		Run testcases, use j and k to switch testcases

`:CompetiTest add_testcase` 	Create testcase

`:CompetiTest delete_testcase` 	Delete testcase

`:CompetiTest edit_testcase`	Edit testcase

Use Ctrl + H 和 Ctrl + L (Normal Mode) to switch between windows for the three commands listed above

`:CompetiTest receive testcases`   Receive testcases from `Competitive Companion` ，port is `12345`

## More please reference:
Neovim tutor：https://neovim.io/doc/

LazyVim official website：https://www.lazyvim.org/
