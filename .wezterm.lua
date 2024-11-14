local wezterm = require("wezterm")

local config = wezterm.config_builder()

config.color_scheme = "Catppuccin Mocha"
config.default_cwd = "D:\\dengzengxiao_projects\\cpp"
config.font = wezterm.font("Fira Code")
config.font_size = 16
config.default_cursor_style = "SteadyBar"

return config
