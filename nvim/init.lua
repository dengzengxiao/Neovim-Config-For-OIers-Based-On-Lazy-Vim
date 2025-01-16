-- bootstrap lazy.nvim, LazyVim and your plugins

if vim.g.neovide then
    vim.o.guifont = "JetBrainsMono Nerd Font:h12"
    vim.g.neovide_refresh_rate = 165
    vim.g.neovide_transparency = 0.8
    vim.g.neovide_normal_opacity = 0.8
    vim.g.neovide_theme = 'dark'
    vim.g.neovide_cursor_vfx_mode = "railgun"
    vim.g.neovide_cursor_vfx_particle_density = 20.0
    vim.g.neovide_title_background_color = string.format(
        "%x",
        vim.api.nvim_get_hl(0, {id=vim.api.nvim_get_hl_id_by_name("Normal")}).bg
    )
    vim.g.neovide_title_text_color = "white"
end

require("config.lazy")
require("competitest").setup({
    compile_command = {
        cpp = { exec = "g++", args = { "-std=c++23", "-O2", "$(FNAME)", "-o", "$(ABSDIR)\\executables\\$(FNOEXT)" } },
    },
    -- running_directory = "./excutables",
    run_command = {
        cpp = { exec = "$(ABSDIR)\\executables\\$(FNOEXT).exe" },
    },
    maximum_time = 1000,
    testcases_directory = "./testcases",
    companion_port = 12345,
})
