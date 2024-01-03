
# Versión de CMake mínima para el proyecto
cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

# Información básica del proyecto
project(helloworld
  VERSION
  0.1.0
  LANGUAGES
  CXX
)
 
# Build en modo Release por defecto
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# TODO: Build en modo debug

# Definir variables para los nombres de las librerias
set(LIB library)
set(UTILS utils)
# Definir variables para los nombres de los ejecutables
set(MAIN main)

# Indicamos a CMake en qué subdirectorios mirar para continuar con la compilación. El flag 'EXCLUDE_FROM_ALL' hace que la compilación
# de tests haya que hacerse explicitamente
add_subdirectory(src)
add_subdirectory(test EXCLUDE_FROM_ALL)
