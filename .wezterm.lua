local wezterm = require("wezterm")

local config = wezterm.config_builder()

config.color_scheme = "Catppuccin Mocha"
config.font = wezterm.font("JetBrainsMono NF")
config.font_size = 16
config.default_cursor_style = "SteadyBar"

return config
