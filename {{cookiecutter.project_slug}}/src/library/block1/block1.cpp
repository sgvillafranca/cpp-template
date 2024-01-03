#include "library/block1/block1.hpp"
#include "utils/utils.hpp"

void hola_mundo_block1(){
    cout << "Hola Mundo desde la libreria 'library' (block 1)!" << endl;
}

void hola_mundo_block1_utils(){
    cout << "Hola Mundo desde la libreria 'library' (block 1) usando a su vez la libreria 'utils'! -> ";
    hola_mundo_utils();
}

int add_block1(const int &a, const int &b){
    return a + b;
}
