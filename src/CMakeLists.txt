add_library(work STATIC work.cpp)
target_include_directories(work PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(x16r-bench main.cpp)
target_link_libraries(x16r-bench PRIVATE work)
