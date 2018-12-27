# - Find SDL2
# Find the SDL2 includes and libraries
#
# Following variables are provided:
# SDL2_FOUND
#     True if SDL2 has been found
# SDL2_INCLUDE_DIRS
#     The include directories of SDL2
# SDL2_LIBRARIES
#     SDL2 library list


find_path(SDL2_INCLUDE_DIR NAMES SDL2/SDL.h PATHS "${PROJECT_SOURCE_DIR}/${DEPENDENCIES}/include")
find_library(SDL2_LIBRARY NAMES sdl SDL sdl2 SDL2 PATHS "${PROJECT_SOURCE_DIR}/${DEPENDENCIES}/lib")


include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(SDL2 DEFAULT_MSG
    SDL2_INCLUDE_DIR
    SDL2_LIBRARY)

# Publish variables
set(SDL2_INCLUDE_DIR ${SDL2_INCLUDE_DIR})
set(SDL2_LIBRARIES ${SDL2_LIBRARY})
list(REMOVE_DUPLICATES SDL2_INCLUDE_DIR)
list(REMOVE_DUPLICATES SDL2_LIBRARIES)
mark_as_advanced(SDL2_INCLUDE_DIR)
mark_as_advanced(SDL2_LIBRARY)
