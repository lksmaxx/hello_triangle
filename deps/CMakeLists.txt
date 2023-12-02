add_subdirectory(glfw)

include_directories(glfw/include)
include_directories(glad/include)

#target_sources(hello PRIVATE glad/src/gl.c)

target_link_libraries(hello glfw ${GLFW_LIBRARIES})
