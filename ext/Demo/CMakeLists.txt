# Find all source files in . and set to DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

include_directories(.)

# Build the library
add_library (Demo STATIC ${DIR_LIB_SRCS})
