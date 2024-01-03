{{ cookiecutter.project_name }}
{{ cookiecutter.project_short_description }}

Building
In order to build the library, execute the following commands:

# Create a new directory to perform an out of source build
$ mkdir build && cd build
# Configure build
$ cmake ..
# Perform build
$ cmake --build .
# Run main
$ ./src/main

Testing
In order to build and run the unit tests for this library, execute the following commands:

# Create a new directory to perform an out of source build
$ mkdir build && cd build
# Configure build
$ cmake ..
# Build unit tests
$ cmake --build . --target tests_library 
$ cmake --build . --target tests_utils
# Run unit tests
$ ./test/library/library_tests 
$ ./test/library/utils_tests 