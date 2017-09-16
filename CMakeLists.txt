cmake_minimum_required(VERSION 3.8)
project(rotk)

set(CMAKE_CXX_STANDARD 17)
set(MY_SOURCE_DIR include)
include_directories( ${MY_SOURCE_DIR}/ )

add_executable(rotk src/main.cpp src/players/player.cpp include/players/player.h src/commands/command.cpp include/commands/command.h)