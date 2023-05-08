cmake_minimum_required(VERSION 3.8)

project("robotjs-exe")

add_executable (robotjs "robotjs.cpp" "lib/mouse.c" "lib/types.h" "lib/deadbeef_rand.c" "lib/screen.c")

if(APPLE)
    find_library(COREFOUNDATION_LIBRARY CoreFoundation)
    find_library(CARBON_LIBRARY Carbon)
    find_library(APPLICATIONSERVICES_LIBRARY ApplicationServices REQUIRED)
    find_library(OPENGL_LIBRARY OpenGL)
    target_link_libraries(robotjs ${COREFOUNDATION_LIBRARY})
    target_link_libraries(robotjs ${CARBON_LIBRARY})
    target_link_libraries(robotjs ${APPLICATIONSERVICES_LIBRARY})
    target_link_libraries(robotjs ${OPENGL_LIBRARY})
elseif(WIN32)
    set(IS_WINDOWS TRUE)
endif()