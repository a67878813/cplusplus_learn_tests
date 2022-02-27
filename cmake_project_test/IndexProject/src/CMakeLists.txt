
#设置 BINARY 为项目名IndexProject
# set(BINARY ${CMAKE_PROJECT_NAME})
project(src)
 
# 1
# add_executable(ExampleProject main.cpp file1.cpp file1.h)
 
# 2
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.hpp *.cpp *.cc)
set(SOURCES ${SOURCES})
# add_executable(${BINARY}_run ${SOURCES})
# 为了让单元测试的时候src下的代码能被作为静态链接库使用
#构建静态链接库 add_library
add_library(src_lib SHARED Formula.cpp Formula.h )



# target_include_directories 是为了让exec_2 访问到 src 的头文件，否则只能访问到共享库本身
target_include_directories(src_lib PUBLIC ${PROJECT_SOURCE_DIR})

