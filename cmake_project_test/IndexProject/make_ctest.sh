#!/bin/bash
cmake -S . -B build
cmake --build build
echo  -e "\033[40;32m;5m========================  CTest begin ==========\033[0m"
cd build && ctest
echo  -e "\033[40;32m========================  CTest end   ==========\033[0m"
cd .. 