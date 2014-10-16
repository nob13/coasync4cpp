cmake_minimum_required (VERSION 2.8)
project (coasync4cpp)

# Enable C++ 11
if (NOT MSVC)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()


# Platforms
# Win32 is set on windows
if (APPLE AND NOT IOS)
	set (OSX true)
endif()
if (UNIX AND NOT APPLE)
	message(STATUS "Hello Linux")
	set (LINUX true)
endif()

if (LINUX)
	set (LIBS ${LIBS} pthread dl) # needed by gtest
endif()

find_package(Boost REQUIRED)
include_directories (${Boost_INCLUDE_DIRS})
list(APPEND LIBS ${Boost_LIBRARIES})
add_definitions("-DBOOST_THREAD_VERSION=4")


add_subdirectory (coasync4cpp)

