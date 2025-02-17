cmake_minimum_required(VERSION 4.0.20250217-g9290a02 FATAL_ERROR)

set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

set(CMAKE_CXX_MODULE_STD YES)
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "a9e1cf81-9932-4810-974b-6eccaf14e457")

project(ImportTest LANGUAGES CXX)

if (NOT MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
endif ()

add_subdirectory(LibraryTest)
add_subdirectory(ImportTest)
