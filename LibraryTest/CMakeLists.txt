add_library(LibraryTest STATIC)

target_compile_features(LibraryTest
    PUBLIC
        cxx_std_23
)

target_sources(LibraryTest
    PUBLIC
        FILE_SET CXX_MODULES FILES
            library.ixx
            library_impl.cpp
			sdl.ixx
)

if (MSVC)
	set(__SDL_LIB_PATH "C:/Users/robin/Desktop/Libraries/lib/")
	set(__SDL_LIB_EXTENSION ".lib")

	target_include_directories(LibraryTest
		PRIVATE
			"C:/Users/robin/Desktop/Libraries/include"
	)
endif ()

target_link_libraries(LibraryTest
	PRIVATE
		${__SDL_LIB_PATH}SDL3${__SDL_LIB_EXTENSION}
)
