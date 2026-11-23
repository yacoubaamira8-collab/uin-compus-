cmake_minimun_required(VERSION 3.25)
projet(uin-campus LANGUAGES CXX)

set(CMAKE_CXX_STANDAR 23)
set(CMAKE_CXX_STANDAR_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(uincampus_core)
    src/version.cpp
    src/regles.cpp
    src/saisie.cpp
    src/calculs.cpp
)
target_include_directories(uincampus_core PUBLIC includ)
target_compile_options(uincampus_core PRIVATE -wall -wextra -wpedantic)
add_executable(uin-campus app/main.cpp)
target_link_libraries(uin-campus PRIVATE uincampus_core)
target_compile_option(uin-campus PRIVATE -wall -wextra -wpedantic)

