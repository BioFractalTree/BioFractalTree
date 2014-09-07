# BioFractalTree CMake Build system
# see Mozilla Public License 2.0 text file in project for usage terms

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

find_path(BioFractalTreeInc src/main/BioFractalTree.h)
include_directories(
  ${BioFractalTree}
)
add_subdirectory(main)
