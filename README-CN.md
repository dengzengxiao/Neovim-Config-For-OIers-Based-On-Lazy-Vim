# Neovim Config For OIers Based On Lazy Vim

## 现在只有 C++ 支持

## 注：这个项目仅为个人配置

使用：

CompetiTest: https://github.com/xeluxee/competitest.nvim

WezTerm: https://github.com/wez/wezterm

Neovim: https://github.com/neovim/neovim

Lazyvim: https://github.com/LazyVim/LazyVim

Neovide: https://github.com/neovide/neovide

## 使用前请安装 Lazyvim, Neovim, Wezterm 和 Neovide

## 如何配置：
.wezterm.lua 为 wezterm 配置文件，放在 C:\Users\Name\ 下

将 nvim 和 nvim-data 文件夹放入 C:\Users\Name\AppData\Local 下，并替换原来的文件

配置: Competitive Companion：

打开 Edge 拓展中的 “开发者模式”

将目录中的 Competitive_Companion_2.56.0.crx 拖入 Edge

打开拓展选项，将 Custom ports 改为 12345

快捷键：Edge 拓展 -> 键盘快捷方式 -> 往下翻找到 Competitive Companion，输入快捷键

## 使用：
打开 Wezterm

导航到你的项目目录

输入 `neovide`

用 `Find File` 或 `f` 打开文件

愉快的编程！

## 常用快捷键：
注意，都在 `Normal` 模式下

`0` -> 到行首

`$` -> 到行末

`ggVG` -> 选中整个文件

`v` -> 打开 Visual Mode, 移动光标以选择文本

`V` -> 打开 Visual Mode, 上下移动光标以选择整行

`gcc` -> 注释这一行

`y` -> 复制选中的文本

`p` -> 粘贴

`d` -> 删除

`dd` -> 删除整行

`s` -> 打开 Flash Mode，用于定位本页能看见的文本

`/` -> Vim 自带的搜索，搜索文本

`Space + e` -> 打开 Sidebar，用光标选定文件打开

`hjkl` -> 左下上右

常用命令：

`:wq` 保存并退出

`:Lazy` 打开 lazy.nvim UI

`:Mason` 打开 mason.nvim UI

`:CompetiTest` 系列 

注意，如果用我的配置，文件结构应如下：

```
cpp

├─executables 				// 可执行文件

├─testcases				// testcases 数据

├─A.cpp

└─ ...
```

`:CompetiTest run` 		运行 testcases 左边的用 j 和 k 切换样例

`:CompetiTest add_testcase` 	新建样例

`:CompetiTest delete_testcase` 	删除样例

`:CompetiTest edit_testcase`	编辑样例

这三种操作用 Ctrl + H 和 Ctrl + L (Normal Mode) 来切换窗口

`:CompetiTest receive testcases`   从 `Competitive Companion` 接受样例，端口为 `12345`

更多请参考:

Neovim 教程：https://neovim.io/doc/

LazyVim 官方文档：https://www.lazyvim.org/
