cmake_minimum_required(VERSION 3.5)

project(UnitConverter LANGUAGES C)

add_executable(UnitConverter main.c UnitConverter.c UnitConverter.h VolumeArea.c VolumeArea.h)

