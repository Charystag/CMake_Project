include_directories(${INC_DIR})

function(create_test_exec func_name)
	set(target test_${func_name})
	add_executable(test_${func_name} ${SRC_DIR}/test_${func_name}.cpp)
	target_link_libraries(${target} ${func_name})
	add_test(NAME Test_${func_name} COMMAND ${target})
endfunction()

file(GLOB files LIST_DIRECTORIES 
for
