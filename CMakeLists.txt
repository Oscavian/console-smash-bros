cmake_minimum_required(VERSION 3.21)
project(console-smash-bros)

set(CMAKE_CXX_STANDARD 14)

add_executable(console-smash-bros main.cpp src/Fighter.cpp header/Fighter.h src/Ability.cpp header/Ability.h src/Display.cpp header/Display.h header/Game.h src/Game.cpp src/Elon.cpp header/fighter/Elon.h src/Rick.cpp header/fighter/Rick.h src/Gordon.cpp header/fighter/Gordon.h src/RickRoll.cpp header/abilities/RickRoll.h)