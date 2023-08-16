add_executable(tests tests.cpp cookiecutter_cpp_t.cpp)
target_link_libraries(tests PUBLIC cookiecutter_cpp Catch2::Catch2)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(tests)
