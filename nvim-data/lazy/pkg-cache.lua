return {pkgs={{source="lazy",name="noice.nvim",spec=function()
return {
  -- nui.nvim can be lazy loaded
  { "MunifTanjim/nui.nvim", lazy = true },
  {
    "folke/noice.nvim",
  },
}

end,dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/noice.nvim",file="lazy.lua",},{source="lazy",name="plenary.nvim",spec={"nvim-lua/plenary.nvim",lazy=true,},dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/plenary.nvim",file="community",},{source="rockspec",name="telescope.nvim",spec={"telescope.nvim",build=false,specs={{"nvim-lua/plenary.nvim",lazy=true,},},},dir="C:/Users/Shawn/AppData/Local/nvim-data/lazy/telescope.nvim",file="telescope.nvim-scm-1.rockspec",},},version=12,}