cmake_minimum_required(VERSION 3.21)
project(console-smash-bros)

set(CMAKE_CXX_STANDARD 14)

add_executable(console-smash-bros main.cpp src/Fighter.cpp header/Fighter.h src/Ability.cpp header/Ability.h src/Display.cpp header/Display.h header/Game.h src/Game.cpp src/fighter/Elon.cpp header/fighter/Elon.h src/fighter/Rick.cpp header/fighter/Rick.h src/fighter/Gordon.cpp header/fighter/Gordon.h src/abilities/RickRoll.cpp header/abilities/RickRoll.h header/Duel.h src/Duel.cpp src/abilities/Flamethrower.cpp header/abilities/Flamethrower.h src/abilities/Tackle.cpp header/abilities/Tackle.h src/fighter/Crewmate.cpp header/fighter/Crewmate.h src/abilities/IdiotSandwich.cpp header/abilities/IdiotSandwich.h)