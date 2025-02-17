add_executable(ImportTest)

target_sources(ImportTest
    PRIVATE
        main.cpp
)

target_compile_features(ImportTest
    PUBLIC
        cxx_std_23
)

target_link_libraries(ImportTest
    PRIVATE
        LibraryTest
)
