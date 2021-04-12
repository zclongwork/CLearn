cmake_minimum_required(VERSION 3.17)
project(CLearn C)

set(CMAKE_C_STANDARD 99)

# 统一编译
add_executable(CProject part1/T1.c part1/T2.c part1/T3.c part1/T4.c part1/T5.c part1/T6.c part1/T7.c part1/T8.c
        part2/T1.c part2/T2.c part2/T3.c part2/T4.c part2/T5.c part2/T6.c part2/T7.c part2/T8.c part2/T9.c
        part3/T1.c part3/T2.c part3/T3.c part3/T4.c part3/T5.c part3/T6.c
        part4/T0.c part4/T1.c part4/T2.c part4/T3.c part4/T4.c)