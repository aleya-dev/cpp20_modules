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

)
