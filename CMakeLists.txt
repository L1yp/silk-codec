cmake_minimum_required(VERSION 3.22)
project(silk-codec)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ffunction-sections -fdata-sections -fPIC -O3 -fvisibility=hidden -w ")
#set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--gc-sections")

#ADD_DEFINITIONS(-DFIXED_POINT)
#ADD_DEFINITIONS(-DUSE_SMALLFT)


aux_source_directory(src SRC_DIR)

# FOR SILK
include_directories(src interface test jni)


add_library(silk-codec SHARED
        ${SRC_DIR}
        jni/com_l1yp_SilkCodec.c
)


add_executable(silk-decoder
        test/Decoder.c
        ${SRC_DIR}
)


add_executable(silk-encoder
        test/Encoder.c
        ${SRC_DIR}
)