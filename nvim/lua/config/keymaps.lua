-- Keymaps are automatically loaded on the VeryLazy event
-- Default keymaps that are always set: https://github.com/LazyVim/LazyVim/blob/main/lua/lazyvim/config/keymaps.lua
-- Add any additional keymaps here
local opts = {
    noremap = true,
    silent = true,
}

vim.keymap.set("n", "<C-h>", "<C-w>h", opts)
vim.keymap.set("n", "<C-j>", "<C-w>j", opts)
vim.keymap.set("n", "<C-k>", "<C-w>k", opts)
vim.keymap.set("n", "<C-l>", "<C-w>l", opts)
vim.keymap.set("n", "<F11>", "<Cmd>CompetiTest run<CR>", opts)
vim.keymap.set("i", "<F11>", "<Cmd>CompetiTest run<CR>", opts)
vim.keymap.set("n", "<C-S-x>", "<Cmd>CompetiTest receive testcases<CR>", opts)
vim.keymap.set("i", "<C-S-x>", "<Cmd>CompetiTest receive testcases<CR>", opts)
