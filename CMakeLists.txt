cmake_minimum_required(VERSION 3.10)
project(AbstractFactoryExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")
add_library(abstract_factory_lib STATIC ${SOURCES})
target_include_directories(abstract_factory_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(main_exec main.cpp)
target_link_libraries(main_exec abstract_factory_lib)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.14.0
)
set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)

enable_testing()
file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS "tests/*.cpp")
add_executable(run_tests ${TEST_SOURCES})
target_link_libraries(run_tests
    abstract_factory_lib
    gtest
    gtest_main
    pthread
)

include(GoogleTest)
gtest_discover_tests(run_tests)