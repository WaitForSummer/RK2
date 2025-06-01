cmake_minimum_required(VERSION 3.10)
project(AbstractFactoryExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES
    "*.cpp"
)

add_executable(abstract_factory_demo ${SOURCES})