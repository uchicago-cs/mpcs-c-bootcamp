project(list-example C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

add_executable(list-example
        list.c 
        main.c)