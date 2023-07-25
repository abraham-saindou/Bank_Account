cmake_minimum_required(VERSION 3.25)
project(Bank_Account)

set(CMAKE_CXX_STANDARD 23)

add_executable(Bank_Account src/main.cpp src/account.h src/account.cpp)
