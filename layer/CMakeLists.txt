#-------------------------------------------------------------------------------
# Copyright (c) 2020-2022, Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#
#-------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.10)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRCS)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/iotex SRCS_IOTEX)

add_library(iotex_psa_layer ${SRCS} ${SRCS_IOTEX})

target_include_directories(iotex_psa_layer
PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)

add_compile_options(
        -Os
        -mthumb
        -march=armv8-m.main
        -mcpu=cortex-m33
        -mfloat-abi=hard
        -mfpu=fpv5-sp16
)

# add_compile_definitions(
#         EXT_API_MAGIC=0x281ee6de,0xb845acea,23298 
#         FIRMWARE_INFO_MAGIC=0x281ee6de,0x8fcebb4c,23298 
#         KERNEL 
#         NRF9160_XXAA 
#         NRF_SKIP_FICR_NS_COPY_TO_RAM 
#         NRF_TRUSTZONE_NONSECURE 
#         USE_PARTITION_MANAGER=1 
#         _FORTIFY_SOURCE=2 
#         __LINUX_ERRNO_EXTENSIONS__ 
#         __PROGRAM_START 
#         __ZEPHYR_SUPERVISOR__
#         __ZEPHYR__=1
# )