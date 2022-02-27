
# set(BINARY ${CMAKE_PROJECT_NAME}_tst)
project(formula_test)

# file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
# set(SOURCES ${TEST_SOURCES})

# add_executable(${BINARY} ${TEST_SOURCES})
# add_test(NAME ${BINARY} COMMAND ${BINARY})
set(src_file  ${CMAKE_CURRENT_SOURCE_DIR}/Formula-test.cpp)

# add_executable(
#     formula_test
#     ${CMAKE_SOURCE_DIR}/tst/Formula-test.cpp
# )

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
add_executable(
    formula_test
    ${CMAKE_SOURCE_DIR}/tst/Formula-test.cpp
)
# add_executable(formula_test ${src_file})
target_include_directories(formula_test PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(formula_test PUBLIC src_lib)
target_link_libraries(formula_test PUBLIC gtest_main )
# include(GoogleTest)
# add_executable(formula_test ${CMAKE_SOURCE_DIR}/src/Formula-test.cpp)
