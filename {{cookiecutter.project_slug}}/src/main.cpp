#include <iostream>

#include "library/block1/block1.hpp"
#include "library/block2/block2.hpp"
#include "utils/utils.hpp"

using namespace std;

int main() {
    cout << "Hola Mundo!" << endl;
    hola_mundo_block1();
    hola_mundo_block2();
    hola_mundo_utils();
    hola_mundo_block1_utils();
}