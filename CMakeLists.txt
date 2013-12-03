cmake_minimum_required(VERSION 2.8)
add_executable(rlbust rlbust.c)
target_link_libraries(rlbust readline)
