cmake_minimum_required(VERSION 3.15)

project(final)

enable_testing()

set(SRC_DIR src)
set(INC_DIR include)
set(TEST_DIR tests)

include_directories(${INC_DIR})

add_compile_options(-Wall -Wextra)
find_package(Doxygen REQUIRED)

set(DOXYGEN_IN ${CMAKE_SOURCE_DIR}/Doxyfile.in)
set(DOXYGEN_OUT ${CMAKE_BINARY_DIR}/Doxyfile)

configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

add_custom_target(generate_doc
	COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	COMMENT "Generating documentation for project ${PROJECT_NAME}"
	VERBATIM
	)

add_subdirectory(${SRC_DIR})
add_subdirectory(${TEST_DIR})
