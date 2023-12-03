cmake_minimum_required(VERSION 3.12)
project(hello_triangle)
set(EXEC_NAME hello)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(GLFW_BUILD_EXAMPLES 0)
set(GLFW_BUILD_TESTS 0)
set(GLFW_BUILD_DOCS 0)

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(${EXEC_NAME} ${SOURCE_FILES})
target_include_directories(${EXEC_NAME} PRIVATE deps/glad/include)
target_include_directories(${EXEC_NAME} PRIVATE deps/glfw/include)

add_subdirectory(deps)

target_link_libraries(${EXEC_NAME} glad)

target_link_libraries(${EXEC_NAME}
	glfw
	)
