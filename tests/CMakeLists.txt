include_directories(${INC_DIR})

function(create_test_exec func_name)
	set(target test_${func_name})
	add_executable(test_${func_name} ${SRC_DIR}/test_${func_name}.cpp)
	target_link_libraries(${target} functions)
	add_test(NAME Test_${func_name} COMMAND ${target})
endfunction()

# file(GLOB files LIST_DIRECTORIES false ${S)
# From the cmake documentation of the file function
# https://cmake.org/cmake/help/latest/command/file.html
# We can see that it is not recommended to use globing 
# to retrieve files.

foreach(src IN ITEMS
	prime
	palindrome
	fibonacci
	factorial
	)
	#message(NOTICE "source file looked at is : `${src}'")
	create_test_exec(${src})
endforeach()

add_executable(test_example_class ${SRC_DIR}/test_example.cpp ${CMAKE_SOURCE_DIR}/${SRC_DIR}/example_class.cpp)
add_test(NAME Test_example_class COMMAND test_example_class)
