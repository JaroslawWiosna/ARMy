# - Try to find LAME
# Once done this will define
#
# LAME_FOUND - system has liblame
# LAME_INCLUDE_DIRS - the liblame include directory
# LAME_LIBRARIES - The liblame libraries

find_path(LAME_INCLUDE_DIRS lame/lame.h)
find_library(LAME_LIBRARIES NAMES mp3lame)

if (LAME_INCLUDE_DIRS AND LAME_LIBRARIES)
    set(LAME_FOUND TRUE)
endif (LAME_INCLUDE_DIRS AND LAME_LIBRARIES)

if (LAME_FOUND)
    message (STATUS "Found lame include: ${LAME_INCLUDE_DIRS}")
    message (STATUS "Found lame lib: ${LAME_LIBRARIES}")
else (LAME_FOUND)
    message (FATAL_ERROR "Could not find: lame")
endif (LAME_FOUND)