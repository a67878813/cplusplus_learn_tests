# CMake generated Testfile for 
# Source directory: /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test
# Build directory: /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(benchmark "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/benchmark_test" "--benchmark_min_time=0.01")
set_tests_properties(benchmark PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;57;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(spec_arg "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/spec_arg_test" "--benchmark_filter=BM_NotChosen")
set_tests_properties(spec_arg PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;60;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(benchmark_setup_teardown "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/benchmark_setup_teardown_test")
set_tests_properties(benchmark_setup_teardown PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;63;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_simple "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=Foo" "3")
set_tests_properties(filter_simple PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;71;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_simple_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=Foo" "3")
set_tests_properties(filter_simple_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;71;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_simple_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-Foo" "2")
set_tests_properties(filter_simple_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;72;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_simple_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-Foo" "2")
set_tests_properties(filter_simple_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;72;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_suffix "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=BM_.*" "4")
set_tests_properties(filter_suffix PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;73;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_suffix_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=BM_.*" "4")
set_tests_properties(filter_suffix_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;73;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_suffix_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-BM_.*" "1")
set_tests_properties(filter_suffix_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;74;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_suffix_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-BM_.*" "1")
set_tests_properties(filter_suffix_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;74;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_all "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=.*" "5")
set_tests_properties(filter_regex_all PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;75;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_all_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=.*" "5")
set_tests_properties(filter_regex_all_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;75;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_all_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-.*" "0")
set_tests_properties(filter_regex_all_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;76;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_all_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-.*" "0")
set_tests_properties(filter_regex_all_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;76;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_blank "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=" "5")
set_tests_properties(filter_regex_blank PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;77;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_blank_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=" "5")
set_tests_properties(filter_regex_blank_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;77;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_blank_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-" "0")
set_tests_properties(filter_regex_blank_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;78;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_blank_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-" "0")
set_tests_properties(filter_regex_blank_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;78;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_none "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=monkey" "0")
set_tests_properties(filter_regex_none PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;79;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_none_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=monkey" "0")
set_tests_properties(filter_regex_none_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;79;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_none_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-monkey" "5")
set_tests_properties(filter_regex_none_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;80;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_none_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-monkey" "5")
set_tests_properties(filter_regex_none_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;80;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_wildcard "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=.*Foo.*" "3")
set_tests_properties(filter_regex_wildcard PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;81;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_wildcard_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=.*Foo.*" "3")
set_tests_properties(filter_regex_wildcard_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;81;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_wildcard_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-.*Foo.*" "2")
set_tests_properties(filter_regex_wildcard_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;82;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_wildcard_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-.*Foo.*" "2")
set_tests_properties(filter_regex_wildcard_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;82;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=^BM_.*" "4")
set_tests_properties(filter_regex_begin PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;83;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=^BM_.*" "4")
set_tests_properties(filter_regex_begin_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;83;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-^BM_.*" "1")
set_tests_properties(filter_regex_begin_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;84;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-^BM_.*" "1")
set_tests_properties(filter_regex_begin_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;84;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin2 "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=^N" "1")
set_tests_properties(filter_regex_begin2 PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;85;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin2_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=^N" "1")
set_tests_properties(filter_regex_begin2_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;85;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin2_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-^N" "4")
set_tests_properties(filter_regex_begin2_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;86;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_begin2_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-^N" "4")
set_tests_properties(filter_regex_begin2_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;86;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_end "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=.*Ba\$" "1")
set_tests_properties(filter_regex_end PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;87;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_end_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=.*Ba\$" "1")
set_tests_properties(filter_regex_end_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;87;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_end_negative "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_min_time=0.01" "--benchmark_filter=-.*Ba\$" "4")
set_tests_properties(filter_regex_end_negative PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;67;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;88;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(filter_regex_end_negative_list_only "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/filter_test" "--benchmark_list_tests" "--benchmark_filter=-.*Ba\$" "4")
set_tests_properties(filter_regex_end_negative_list_only PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;68;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;88;add_filter_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(options_benchmarks "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/options_test" "--benchmark_min_time=0.01")
set_tests_properties(options_benchmarks PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;91;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(basic_benchmark "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/basic_test" "--benchmark_min_time=0.01")
set_tests_properties(basic_benchmark PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;94;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(repetitions_benchmark "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/repetitions_test" "--benchmark_min_time=0.01" "--benchmark_repetitions=3")
set_tests_properties(repetitions_benchmark PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;97;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(diagnostics_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/diagnostics_test" "--benchmark_min_time=0.01")
set_tests_properties(diagnostics_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;100;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(skip_with_error_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/skip_with_error_test" "--benchmark_min_time=0.01")
set_tests_properties(skip_with_error_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;103;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(donotoptimize_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/donotoptimize_test" "--benchmark_min_time=0.01")
set_tests_properties(donotoptimize_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;111;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(fixture_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/fixture_test" "--benchmark_min_time=0.01")
set_tests_properties(fixture_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;114;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(register_benchmark_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/register_benchmark_test" "--benchmark_min_time=0.01")
set_tests_properties(register_benchmark_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;117;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(map_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/map_test" "--benchmark_min_time=0.01")
set_tests_properties(map_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;120;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(multiple_ranges_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/multiple_ranges_test" "--benchmark_min_time=0.01")
set_tests_properties(multiple_ranges_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;123;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(args_product_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/args_product_test" "--benchmark_min_time=0.01")
set_tests_properties(args_product_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;126;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(link_main_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/link_main_test" "--benchmark_min_time=0.01")
set_tests_properties(link_main_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;129;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(reporter_output_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/reporter_output_test" "--benchmark_min_time=0.01")
set_tests_properties(reporter_output_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;132;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(templated_fixture_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/templated_fixture_test" "--benchmark_min_time=0.01")
set_tests_properties(templated_fixture_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;135;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(user_counters_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/user_counters_test" "--benchmark_min_time=0.01")
set_tests_properties(user_counters_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;138;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(perf_counters_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/perf_counters_test" "--benchmark_min_time=0.01" "--benchmark_perf_counters=CYCLES,BRANCHES")
set_tests_properties(perf_counters_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;141;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(internal_threading_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/internal_threading_test" "--benchmark_min_time=0.01")
set_tests_properties(internal_threading_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;144;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(report_aggregates_only_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/report_aggregates_only_test" "--benchmark_min_time=0.01")
set_tests_properties(report_aggregates_only_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;147;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(display_aggregates_only_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/display_aggregates_only_test" "--benchmark_min_time=0.01")
set_tests_properties(display_aggregates_only_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;150;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(user_counters_tabular_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/user_counters_tabular_test" "--benchmark_counters_tabular=true" "--benchmark_min_time=0.01")
set_tests_properties(user_counters_tabular_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;153;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(user_counters_thousands_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/user_counters_thousands_test" "--benchmark_min_time=0.01")
set_tests_properties(user_counters_thousands_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;156;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(memory_manager_test "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/memory_manager_test" "--benchmark_min_time=0.01")
set_tests_properties(memory_manager_test PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;159;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(cxx03 "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/cxx03_test" "--benchmark_min_time=0.01")
set_tests_properties(cxx03 PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;178;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(complexity_benchmark "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/complexity_test" "--benchmark_min_time=0.01")
set_tests_properties(complexity_benchmark PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;188;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(benchmark_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/benchmark_gtest")
set_tests_properties(benchmark_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;206;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(benchmark_name_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/benchmark_name_gtest")
set_tests_properties(benchmark_name_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;207;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(benchmark_random_interleaving_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/benchmark_random_interleaving_gtest")
set_tests_properties(benchmark_random_interleaving_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;208;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(commandlineflags_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/commandlineflags_gtest")
set_tests_properties(commandlineflags_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;209;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(statistics_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/statistics_gtest")
set_tests_properties(statistics_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;210;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(string_util_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/string_util_gtest")
set_tests_properties(string_util_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;211;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
add_test(perf_counters_gtest "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/perf_counters_gtest")
set_tests_properties(perf_counters_gtest PROPERTIES  _BACKTRACE_TRIPLES "/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;203;add_test;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;212;add_gtest;/home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/CMakeLists.txt;0;")
