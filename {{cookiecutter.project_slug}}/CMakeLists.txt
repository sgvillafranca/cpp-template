
# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

# Información del proyecto
project({{ cookiecutter.project_name }}
  VERSION
  0.1.0
  LANGUAGES
  CXX
)
 
# Build en modo 'Release' o 'Debug'
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# - Variables con las nombres de las librerias
set(LIB library)
set(UTILS utils)
# - Variables con las nombres de las librerias
set(MAIN main)

# - Subdirectorios para continuar con la compilación. 
add_subdirectory(src)
add_subdirectory(test EXCLUDE_FROM_ALL)