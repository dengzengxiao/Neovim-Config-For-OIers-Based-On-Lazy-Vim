-- bootstrap lazy.nvim, LazyVim and your plugins

if vim.g.neovide then
    vim.o.guifont = "Fira Code:h16"
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
