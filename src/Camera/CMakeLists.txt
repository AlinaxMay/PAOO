# Create a library for the Camera component
add_library(camera_lib camera.cpp)

# Include directory for the Camera library
target_include_directories(camera_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
