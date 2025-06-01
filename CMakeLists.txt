cmake_minimum_required(VERSION 3.10)
project(AbstractFactoryExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)

add_executable(abstract_factory_main main.cpp)
target_include_directories(abstract_factory_main PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(abstract_factory_main abstract_factory_lib)
