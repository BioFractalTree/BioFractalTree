# BioFractalTree CMake Build system
# see Mozilla Public License 2.0 text file in project for usage terms

set(name BioFractalTree)

set(sources BioFractalTree.cpp)

add_executable(${name} ${sources})

install(TARGETS BioFractalTree DESTINATION bin)

