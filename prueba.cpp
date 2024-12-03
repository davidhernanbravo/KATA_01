#include <iostream>
using namespace std;
int main()

    {   
        int array[] = {1, 2, 3};
        int *ptr = array;
        
        cout << "Antes de puntero++:" << endl;
        cout << "Valor al que apunta ptr: " << *ptr << endl;

        *ptr++;
        cout << "Punt " << *ptr << endl;
        cout << endl;
        return 0;
    }

    //puntero 2 = &puntero1