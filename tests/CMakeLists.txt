project(AbstractFactoryTests)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB TEST_SOURCES "*.cpp")

add_executable(run_tests ${TEST_SOURCES})
target_link_libraries(run_tests gtest_main abstract_factory_lib)
target_include_directories(run_tests PUBLIC ${CMAKE_SOURCE_DIR}/include)

include(GoogleTest)
gtest_discover_tests(run_tests)
