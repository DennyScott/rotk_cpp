cmake_minimum_required(VERSION 3.8)
project(rotk)

set(CMAKE_CXX_STANDARD 17)
set(MY_SOURCE_DIR include)
include_directories( ${MY_SOURCE_DIR}/ )

add_executable(rotk src/main.cpp include/game.h src/game.cpp include/actions/action.h include/players/player_names.h src/actions/action.cpp include/board/board.h include/board/tile.h include/board/tile_color.h src/board/tile.cpp src/board/board.cpp include/players/player_names.h)