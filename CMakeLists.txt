cmake_minimum_required(VERSION 3.10)

project(ExamenParcialVinculante3-MiguelGodoy)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${CMAKE_SOURCE_DIR}/Tarea)
include_directories(${CMAKE_SOURCE_DIR}/Actor)
include_directories(${CMAKE_SOURCE_DIR}/Launcher)
include_directories(${CMAKE_SOURCE_DIR}/crud)

add_executable(ExamenParcial3
        main.cpp
        Tarea/Tarea.cpp
        Launcher/Launcher.cpp
        crud/crud.cpp
        Actor/Actor.cpp

)