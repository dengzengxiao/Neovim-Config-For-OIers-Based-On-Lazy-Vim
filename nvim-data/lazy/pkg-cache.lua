return {pkgs={{name="noice.nvim",spec=function()
return {
  -- nui.nvim can be lazy loaded
  { "MunifTanjim/nui.nvim", lazy = true },
  {
    "folke/noice.nvim",
  },
}

end,file="lazy.lua",source="lazy",dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/noice.nvim",},{name="plenary.nvim",spec={"nvim-lua/plenary.nvim",lazy=true,},file="community",source="lazy",dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/plenary.nvim",},{name="telescope.nvim",spec={"telescope.nvim",build=false,specs={{"nvim-lua/plenary.nvim",lazy=true,},},},file="telescope.nvim-scm-1.rockspec",source="rockspec",dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/telescope.nvim",},},version=12,}