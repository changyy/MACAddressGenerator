cmake_minimum_required (VERSION 2.8)

project (macaddressgenertator)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

message ("[INFO]")
message ("\tUsages:")
message ("\t$ cd " ${CMAKE_SOURCE_DIR})
message ("\t$ mkdir " ${CMAKE_SOURCE_DIR}/build " && cd " ${CMAKE_SOURCE_DIR}/build " && cmake .. && make ")
message ("\tOUTPUT: ")
message ("\t\t"${CMAKE_SOURCE_DIR}/build/bin )
message ("\tDefault Install Path: " ${CMAKE_INSTALL_PREFIX} " (include, lib, bin)")
message ("\t\t$ make install")
message ("\tSet Install Path:")
message ("\t\t$ ccmake .")
message ("\tOr:")
message ("\t\t$ cmake .. -DCMAKE_INSTALL_PREFIX:PATH=/tmp")
message ("")

set ( SOURCE
	main.c
)

add_executable ( mac_address_generator ${SOURCE} )
install ( TARGETS mac_address_generator DESTINATION bin )
