file (GLOB_RECURSE src_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*.cpp)
file (GLOB_RECURSE header_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*.h)

add_library (coasync4cpp ${src_files} ${header_files})
target_link_libraries (coasync4cpp ${LIBS})

