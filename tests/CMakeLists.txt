add_executable(x16r-bench_tests test_core.cpp)
target_link_libraries(x16r-bench_tests PRIVATE work)
target_include_directories(x16r-bench_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND x16r-bench_tests)
