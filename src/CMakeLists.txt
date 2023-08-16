add_library(cookiecutter_cpp cookiecutter_cpp.cpp)
target_include_directories(
  cookiecutter_cpp PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>
                          $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
