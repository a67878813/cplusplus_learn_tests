add_test( blaTest.test1 /home/sa/Cpp/cmake_project_test/IndexProject/build/hello_test [==[--gtest_filter=blaTest.test1]==] --gtest_also_run_disabled_tests)
set_tests_properties( blaTest.test1 PROPERTIES WORKING_DIRECTORY /home/sa/Cpp/cmake_project_test/IndexProject/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS blaTest.test1)
