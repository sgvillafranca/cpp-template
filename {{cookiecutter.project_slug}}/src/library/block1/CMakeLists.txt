# Creamos una variable correspodiente a este bloque y la vinculamos a su código. 
# Con 'PARENT_SCOPE' hacemos visible dicha variable en el directorio padre (library)
set(
    BLOCK1
    ${CMAKE_CURRENT_SOURCE_DIR}/block1.cpp
    PARENT_SCOPE
)
