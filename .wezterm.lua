local wezterm = require("wezterm")

local config = wezterm.config_builder()

config.window_close_confirmation = "NeverPrompt"
config.font = wezterm.font("JetBrainsMono NF")
config.font_size = 16
config.color_scheme = "Catppuccin Mocha"

config.default_cursor_style = "SteadyBar"

return config
