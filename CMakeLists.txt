message(STATUS "CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message(STATUS "Header Include Path = ${CMAKE_SOURCE_DIR}/include")

cmake_minimum_required(VERSION 3.15)
project(SudokuGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define SFML static mode
add_definitions(-DSFML_STATIC)

# Include paths
include_directories("C:/Libraries/SFML/SFML-install/include")
include_directories("${CMAKE_SOURCE_DIR}/include")


# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(SudokuGame ${SOURCES})

# Link SFML statically (manually)
target_link_directories(SudokuGame PRIVATE "C:/Libraries/SFML/SFML-install/lib")

target_link_libraries(SudokuGame
    sfml-graphics-s
    sfml-window-s
    sfml-system-s
    freetype
    opengl32
    winmm
    gdi32
    user32
)
