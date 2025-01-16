# Neovim Config For OIers Based On Lazy Vim

## Now with only C++ support

## Caution: This is only my own config

[Chinese Version](https://github.com/dengzengxiao/Neovim-Config-For-OIers-Based-On-Lazy-Vim/blob/main/README-CN.md)

Used：

CompetiTest: https://github.com/xeluxee/competitest.nvim

WezTerm: https://github.com/wez/wezterm

Neovim: https://github.com/neovim/neovim

Lazyvim: https://github.com/LazyVim/LazyVim

Neovide: https://github.com/neovide/neovide

Commit Mono: https://commitmono.com/

CommitMono Nerd Font: https://github.com/ryanoasis/nerd-fonts/releases/download/v3.3.0/CommitMono.zip

JetBrainsMono Nerd Font: https://github.com/ryanoasis/nerd-fonts/releases/download/v3.3.0/JetBrainsMono.zip

Install the fonts above before installing!

## Installation：
### Make sure you can access github and git before installation
### Also make sure you have a C/C++ Compiler in your computer PATH (perferably winlibs)

1. Download `InstallLazyvimWithOIerConfig.ps1` in Releases
2. Use Notepad to open the file
3. Use your Windows Username to replace `Administrator` in the file
4. Close Notepad and run Administrator Powershell in the current directory (where the .ps1 file is in)
5. Run the command: `Set-ExecutionPolicy Unrestricted` and choose "Yes"
6. Run the command: `.\InstallLazyvimWithOIerConfig.ps1`
7. Wait till the installation is complete
8. Set your working directory like this:
```
cpp

├─executables

├─testcases

├─A.cpp

└─ ...
```
9. Navigate to your woking directory in CMD and enter `nvim`
10. After it finished cloning, press Shift + S twice
11. Press q twice to exit Neovim
12. Relaunch Neovim and wait till the lazy.nvim finish cloning, and then press q
13. Type `:MasonInstall clangd`
14. Press q to exit Neovim
17. Download the winlibs.com MinGW(with clangd) and decompress the file
18. Copy the files in `mingw64` to `nvim-data/mason/packages/clangd/clangd_<version>` and replace the original compiler

#### Optional: Competitive Companion

If you use Edge/Chome:
1. Open `Extensions` and turn on Developer mode
2. Drag the .crx file in `Desktop\config\Neovim-Config-For-OIers-Based-On-Lazy-Vim` to your browser
3. Open `Extension settings` and set `Custom ports` to 12345

If you use Firefox:
1. Download `Competitive Companion` in the extension store
2. Open `Extension settings` and set `Custom ports` to 12345

## Usage：
1. Open Neovim in command shell

2. Use `Find File` or `f` to find files
   
3. Happy Coding!
   
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

`/` -> Vim Search, use `n` to toggle next result, use `N` to toggle last result

`Space + e` -> Open Sidebar，use cursor to select file

`hjkl` -> Left, Down, Up, Right

`w` -> Move to the start of the next word

`b` -> Move to the start of the last word

`e` -> Move to the end of the current word

## Useful commands：

`:wq` Save and exit

`:Lazy` Open lazy.nvim UI

`:Mason` Open mason.nvim UI

`:CompetiTest`

Caution: if you use my config, your file tree should be like this:

```
cpp

├─executables

├─testcases

├─A.cpp

└─ ...
```

`:CompetiTest run` 		Run testcases, use j and k to switch testcases (Hotkey: F11)

`:CompetiTest add_testcase` 	Create testcase

`:CompetiTest delete_testcase` 	Delete testcase

`:CompetiTest edit_testcase`	Edit testcase

Use Ctrl + H and Ctrl + L (Normal Mode) to switch between windows for the three commands listed above

`:CompetiTest receive testcases`   Receive testcases from `Competitive Companion` ，port is `12345`    (Hotkey: Ctrl + Shift + x)

## Optional: Turn LazyVim to LizVim

`LazyVim Extras` Panel -> Find `ui.alpha` -> Press `x` to enable plugin.

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
        dashboard.button("m", " " .. " Mason",            "<cmd> Mason <cr>"),
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

## More please reference:
Neovim tutor：https://neovim.io/doc/

LazyVim official website：https://www.lazyvim.org/
