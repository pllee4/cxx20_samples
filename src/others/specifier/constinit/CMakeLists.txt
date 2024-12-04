add_executable(constinit main.cpp)
target_link_libraries(constinit PRIVATE pthread)
target_compile_features(constinit PRIVATE cxx_std_20)
