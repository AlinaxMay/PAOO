# Create a library for the student component
add_library(student_lib student.cpp)

# Include directory for the Student library
target_include_directories(student_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
