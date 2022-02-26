add_executable(simple_module shape.cppm main.cpp)
target_compile_options(simple_module PUBLIC -fmodules-ts -xc++)
target_compile_features(simple_module PRIVATE cxx_std_20)