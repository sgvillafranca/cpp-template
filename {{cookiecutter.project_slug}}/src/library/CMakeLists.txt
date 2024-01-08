# Ya que esta librería la componen varios bloques, se procesa con una lista que contiene
# la información del código fuente de cada uno de sus subdirectorios

# 1. REFERENCIAMOS CADA UNO DE LOS DIRECTORIOS
add_subdirectory(block1)
add_subdirectory(block2)

# 2. CONFORMAMOS UNA LISTA CON LA VARIABLES CREADAS EN LOS DIRECTORIOS (CONTIENEN CODIGO FUENTE)
set(
    BLOCKS_LIST
    ${BLOCK1}
    ${BLOCK2}
)

# 3. VINCULAMOS DICHA LISTA A LA LIBRERIA 'LIB'
add_library(
    ${LIB}
    SHARED
    ${BLOCKS_LIST}
)

# 4. INDICAR A CMAKE DÓNDE BUSCAR LAS CABECERAS (Opción A: Veáse CMakeLists de utils)
target_include_directories(
    ${LIB}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)
