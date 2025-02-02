create_design design111_4_4_top
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design111_4_4_top.v
set_top_module design111_4_4_top
add_simulation_file ./sim/co_sim_tb/co_sim_design111_4_4_top.v ./rtl/design111_4_4_top.v
set_top_testbench co_sim_design111_4_4_top
analyze
synth_options -cec
synthesize delay
# Open the input file in read mode
set input_file [open "design111_4_4_top/run_1/synth_1_1/synthesis/design111_4_4_top\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"design111_4_4_top(" "design111_4_4_top_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "design111_4_4_top/run_1/synth_1_1/synthesis/design111_4_4_top\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
