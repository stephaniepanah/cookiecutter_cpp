# Welcome to CookieCpp

[![License](https://img.shields.io/badge/License-BSD%202--Clause-orange.svg)](https://opensource.org/licenses/BSD-2-Clause)
[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/stephaniepanah/cookiecutter_cpp/ci.yml?branch=main)](https://github.com/stephaniepanah/cookiecutter_cpp/actions/workflows/ci.yml)
[![Documentation Status](https://readthedocs.org/projects/cookiecutter_cpp/badge/)](https://cookiecutter_cpp.readthedocs.io/)
[![codecov](https://codecov.io/gh/stephaniepanah/cookiecutter_cpp/branch/main/graph/badge.svg)](https://codecov.io/gh/stephaniepanah/cookiecutter_cpp)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=stephaniepanah_cookiecutter_cpp&metric=alert_status)](https://sonarcloud.io/dashboard?id=stephaniepanah_cookiecutter_cpp)

# Prerequisites

Building CookieCpp requires the following software installed:

* A C++11-compliant compiler
* CMake `>= 3.9`
* Doxygen (optional, documentation building is skipped if missing)

# Building CookieCpp

The following sequence of commands builds CookieCpp.
It assumes that your current working directory is the top-level directory
of the freshly cloned repository:

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

The build process can be customized with the following CMake variables,
which can be set by adding `-D<var>={ON, OFF}` to the `cmake` call:

* `BUILD_TESTING`: Enable building of the test suite (default: `ON`)
* `BUILD_DOCS`: Enable building the documentation (default: `ON`)



# Testing CookieCpp

When built according to the above explanation (with `-DBUILD_TESTING=ON`),
the C++ test suite of `CookieCpp` can be run using
`ctest` from the build directory:

```
cd build
ctest
```


# Documentation

CookieCpp provides a Sphinx-based documentation, that can
be browsed [online at readthedocs.org](https://cookiecutter_cpp.readthedocs.io).
To build it locally, first ensure the requirements are installed by running this command from the top-level source directory:

```
pip install -r doc/requirements.txt
```

Then build the sphinx documentation from the top-level build directory:

```
cmake --build . --target sphinx-doc
```

The web documentation can then be browsed by opening `doc/sphinx/index.html` in your browser.
