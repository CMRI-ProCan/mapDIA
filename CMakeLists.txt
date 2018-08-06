project(mapDIA)
cmake_minimum_required(VERSION 3.1)
if(NOT WIN32)
	include(ExternalProject)
	ExternalProject_Add(
	  nlopt
	  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.2
	  CONFIGURE_COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.2/configure
	  PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.2
	  BUILD_COMMAND make
	  INSTALL_COMMAND make install
	  BUILD_IN_SOURCE 1
	)
	set(NLOPT_LIBRARIES nlopt)
else()
	find_package(nlopt REQUIRED)
endif()

add_subdirectory(src)