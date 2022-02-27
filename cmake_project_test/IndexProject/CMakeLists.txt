
# cmake version
cmake_minimum_required(VERSION 3.14)


set(CMAKE_CXX_COMPILER "/usr/bin/clang++" CACHE STRING "C++ compiler" FORCE)
set(CMAKE_C_COMPILER "/usr/bin/clang" CACHE STRING "C compiler" FORCE)
# set(COMPILE_FLAGS += "-std=c++2a")
set(CMAKE_CXX_STANDARD 20)



# project name
project(IndexProject VERSION 0.1)

add_custom_target(clean-all
   COMMAND ${CMAKE_BUILD_TOOL} clean
   COMMAND ${CMAKE_COMMAND} -P clean-all.cmake
)

#采用c++14标准
# set(CMAKE_CXX_STANDARD 17)


# include_directories(src)

# add_subdirectory(src)
# add_subdirectory(tst)
# add_subdirectory(lib/googletest)
# find_package(Gtest REQUIRED)S

# include_directories(${CMAKE_SOURCE_DIR}/src )




include(ExternalProject)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# ================googletest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
#==================googletest end

# ================googlebenchmark

# # include(FetchContent)
# FetchContent_Declare(
#   benchmark
#   URL https://github.com/google/benchmark/archive/refs/tags/v1.6.1.zip
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(benchmark)

#==================googlebenchmarkend



# file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)





include_directories(${CMAKE_SOURCE_DIR}/tst)
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR})
add_subdirectory(src)
add_subdirectory(tst)


#cmake 添加subdirectory 才会解释子目录cmakelists？

enable_testing()



# aux_source_directory(<dir> <variable>)


# set(MY_SRCLIST main.c test1.c test2.cpp)
# add_executable(demo ${MY_SRCLIST})

# file(GLOB_RECURSE ALL_SRCS *.cpp *.c)
# add_executable(Demo ${ALL_SRCS})
# 方法4

# # 查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量
# aux_source_directory(. DIR_SRCS)
# # 指定生成目标
# add_executable(Demo ${DIR_SRCS})



# 5.方法5，使用add_library，这个可以和方法6可以做个对比

# add_library(Demo test1.c test2.cpp)
# #或者
# #add_library(${PROJECT_NAME}   test1.c test2.cpp)
 
# add_executable(Demo main.c)
# #或者
# #add_executable(Demo main.cpp)
# #或者
# #add_executable(${PROJECT_NAME} main.cpp)

add_executable(
    hello_test
    hello_test.cpp sqrt.cpp 
)
# add_executable(
#     formula_test
#     ${CMAKE_SOURCE_DIR}/tst/Formula-test.cpp
# )
target_link_libraries(
    hello_test
    gtest_main pthread
)
target_link_libraries(
    hello_test
    src_lib
)
# target_link_libraries(
#     hello_test
#     sqrt.cpp 
# )
# target_link_libraries(
#     formula_test PRIVATE gtest_main
# )
# target_link_libraries(
#     formula_test PRIVATE src_lib
# )

include(GoogleTest)
gtest_discover_tests(hello_test)
# gtest_discover_tests(formula_test)