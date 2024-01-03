# Creamos una variable correspodiente a este bloque y la vinculamos a su código. 
# Con 'PARENT_SCOPE' hacemos visible dicha variable en el directorio padre (library)
set(
    BLOCK2
    ${CMAKE_CURRENT_SOURCE_DIR}/block2.cpp
    PARENT_SCOPE
)

