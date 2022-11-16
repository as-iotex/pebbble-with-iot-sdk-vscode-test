# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.13.1)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

target_sources(app PRIVATE src/main.c)

add_subdirectory(
#   ${CMAKE_CURRENT_SOURCE_DIR}/../w3bstream-iot-sdk/component/layer ${CMAKE_CURRENT_BINARY_DIR}/w3bstream-iot-sdk/layer
    layer
)

# target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../w3bstream-iot-sdk/component/layer/include)
target_include_directories(app PRIVATE layer/include)
target_link_libraries(app PRIVATE iotex_psa_layer)
