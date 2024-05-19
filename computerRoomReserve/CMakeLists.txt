cmake_minimum_required(VERSION 3.25)
project(computerRoomReserve)

set(CMAKE_CXX_STANDARD 17)

add_executable(computerRoomReserve main.cpp Identity.cpp Identity.h Student.cpp Student.h Teacher.cpp Teacher.h OrderFile.cpp OrderFile.h globalFile.h Manager.cpp Manager.h ComputerRoom.h)
