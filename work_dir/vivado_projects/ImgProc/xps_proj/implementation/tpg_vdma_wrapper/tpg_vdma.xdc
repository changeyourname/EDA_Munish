## INFO: AXI-Lite to&fro MMAP clock domain Crossings in TPG_VDMA
set_false_path -to [get_cells  -hier -regexp {.*cdc_tig.*}]
## INFO: CDC Crossing in TPG_VDMA
set_false_path -from [get_cells -hier -regexp {.*cdc_from.*}] -to [get_cells  -hier -regexp {.*cdc_to.*}]
#
#

