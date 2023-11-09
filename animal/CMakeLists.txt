cmake_minimum_required(VERSION 3.5)

project(animal LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

include(GenerateExportHeader)

add_library(animal SHARED ${SOURCES} ${HEADERS})

GENERATE_EXPORT_HEADER (animal
    BASE_NAME animal
    EXPORT_MACRO_NAME animal_EXPORT
    EXPORT_FILE_NAME animal_Export.h
    STATIC_DEFINE animal_BUILT_AS_STATIC
)
