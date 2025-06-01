cmake_minimum_required(VERSION 3.10)
project(AbstractFactoryLib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES "*.cpp")

add_library(abstract_factory_lib STATIC ${SOURCES})
target_include_directories(abstract_factory_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
