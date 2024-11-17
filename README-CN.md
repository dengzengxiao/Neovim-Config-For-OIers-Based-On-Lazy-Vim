# Neovim Config For OIers Based On Lazy Vim

## 现在只有 C++ 支持

## 注：这个项目仅为个人配置

使用：

CompetiTest: https://github.com/xeluxee/competitest.nvim

WezTerm: https://github.com/wez/wezterm

Neovim: https://github.com/neovim/neovim

Lazyvim: https://github.com/LazyVim/LazyVim

Neovide: https://github.com/neovide/neovide

Fira Code: https://github.com/tonsky/FiraCode

FiraCode Nerd Font: https://github.com/ryanoasis/nerd-fonts/releases/download/v3.2.1/FiraCode.zip

## 使用前请安装 Git, Lazygit, Lazyvim, Neovim, Wezterm, Neovide, Fira Code 和 FiraCode Nerd Font

## 如何配置：
### 注：安装前请确保可以连接到 github 和 git

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

输入 `neovide` 或 `nvim`

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

`/` -> Vim 自带的搜索，用 n 切换到下一个结果, 用 N 切换到上一个

`Space + e` -> 打开 Sidebar，用光标选定文件打开

`hjkl` -> 左下上右

`w` -> 移动到下一个单词的开头

`b` -> 移动到上一个单词的开头

`e` -> 移动到当前单词的结尾

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

## 可选：把 LazyVim 变成 LizVim

`LazyVim Extras` Panel -> 找到 `ui.alpha` -> 按下 `x` 启动插件。

然后修改：

`nvim-data\lazy\alpha-nvim\lua\alpha.lua`:
```lua
return {

  { "nvimdev/dashboard-nvim", enabled = false },
  { "echasnovski/mini.starter", enabled = false },
  -- Dashboard. This runs when neovim starts, and is what displays
  -- the "LAZYVIM" banner.
  {
    "goolord/alpha-nvim",
    event = "VimEnter",
    enabled = true,
    init = false,
    opts = function()
      local dashboard = require("alpha.themes.dashboard")
      -- local logo = [[
      --      ██╗      █████╗ ███████╗██╗   ██╗██╗   ██╗██╗███╗   ███╗          Z
      --      ██║     ██╔══██╗╚══███╔╝╚██╗ ██╔╝██║   ██║██║████╗ ████║      Z    
      --      ██║     ███████║  ███╔╝  ╚████╔╝ ██║   ██║██║██╔████╔██║   z       
      --      ██║     ██╔══██║ ███╔╝    ╚██╔╝  ╚██╗ ██╔╝██║██║╚██╔╝██║ z         
      --      ███████╗██║  ██║███████╗   ██║    ╚████╔╝ ██║██║ ╚═╝ ██║
      --      ╚══════╝╚═╝  ╚═╝╚══════╝   ╚═╝     ╚═══╝  ╚═╝╚═╝     ╚═╝
      -- ]]

      local logo = [[
  ██╗     ██╗███████╗    ██╗   ██╗██╗███╗   ███╗
  ██║     ██║╚══███╔╝    ██║   ██║██║████╗ ████║
  ██║     ██║  ███╔╝     ██║   ██║██║██╔████╔██║
  ██║     ██║ ███╔╝      ╚██╗ ██╔╝██║██║╚██╔╝██║
  ███████╗██║███████╗     ╚████╔╝ ██║██║ ╚═╝ ██║
  ╚══════╝╚═╝╚══════╝      ╚═══╝  ╚═╝╚═╝     ╚═╝
            Powered by Kevin with love
      ]]

      dashboard.section.header.val = vim.split(logo, "\n")
      -- stylua: ignore
      dashboard.section.buttons.val = {
        dashboard.button("f", " " .. " Find file",       "<cmd> lua LazyVim.pick()() <cr>"),
        dashboard.button("n", " " .. " New file",        [[<cmd> ene <BAR> startinsert <cr>]]),
        dashboard.button("r", " " .. " Recent files",    [[<cmd> lua LazyVim.pick("oldfiles")() <cr>]]),
        dashboard.button("g", " " .. " Find text",       [[<cmd> lua LazyVim.pick("live_grep")() <cr>]]),
        dashboard.button("c", " " .. " Config",          "<cmd> lua LazyVim.pick.config_files()() <cr>"),
        dashboard.button("s", " " .. " Restore Session", [[<cmd> lua require("persistence").load() <cr>]]),
        dashboard.button("x", " " .. " Lazy Extras",     "<cmd> LazyExtras <cr>"),
        dashboard.button("l", "󰒲 " .. " Lazy",            "<cmd> Lazy <cr>"),
        dashboard.button("q", " " .. " Quit",            "<cmd> qa <cr>"),
      }
      for _, button in ipairs(dashboard.section.buttons.val) do
        button.opts.hl = "AlphaButtons"
        button.opts.hl_shortcut = "AlphaShortcut"
      end
      dashboard.section.header.opts.hl = "AlphaHeader"
      dashboard.section.buttons.opts.hl = "AlphaButtons"
      dashboard.section.footer.opts.hl = "AlphaFooter"
      dashboard.opts.layout[1].val = 8
      return dashboard
    end,
    config = function(_, dashboard)
      -- close Lazy and re-open when the dashboard is ready
      if vim.o.filetype == "lazy" then
        vim.cmd.close()
        vim.api.nvim_create_autocmd("User", {
          once = true,
          pattern = "AlphaReady",
          callback = function()
            require("lazy").show()
          end,
        })
      end

      require("alpha").setup(dashboard.opts)

      vim.api.nvim_create_autocmd("User", {
        once = true,
        pattern = "LazyVimStarted",
        callback = function()
          local stats = require("lazy").stats()
          local ms = (math.floor(stats.startuptime * 100 + 0.5) / 100)
          dashboard.section.footer.val = "⚡ Neovim loaded "
            .. stats.loaded
            .. "/"
            .. stats.count
            .. " plugins in "
            .. ms
            .. "ms"
          pcall(vim.cmd.AlphaRedraw)
        end,
      })
    end,
  },
}

```

更多请参考:

Neovim 教程：https://neovim.io/doc/

LazyVim 官方文档：https://www.lazyvim.org/
