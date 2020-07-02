# Find all source files in . and set to DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

include_directories(include)

# Build the library
add_library (hello STATIC ${DIR_LIB_SRCS})
