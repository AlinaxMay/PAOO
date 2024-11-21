# Create a library for the Camin component
add_library(camin_lib camin.cpp)

# Include directory for the Camin library
target_include_directories(camin_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
