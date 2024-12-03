/* Desarrolla ruina APP que gestione punteros (tiempo estimado 20 minutos).

    Objetivos:

    a. Manejo de Punteros
        Crear variable normal
        Crear un puntero (en Memoria Principal), debe ser del mismo tipo que la variable a la que apunta.
        Asignar la posición de memoria de numero al puntero

    b. algoritmia de Punteros
        Mostrar el contenido de la variable
        Mostrar el contenido del puntero
        Mostrar el contenido de la variable a la que punta el puntero (desde el puntero)
        Cambiar el valor de la Variable
        Cambiar el valor de la Variable a través del puntero
        Crear otro puntero
        Asignar el valor del puntero anterior al viejo
        Mostrar que apuntan a la misma variable */

#include <iostream>
using namespace std;

int main() 
    {
        // Crear una variable normal.

        int numero = 10; 

        // Crear un puntero del mismo tipo que la variable a la que apunta.

        int* puntero = NULL;

        // Asignar la dirección de memoria de la variable 'numero' al puntero.

        puntero = &numero; 

        
        // Mostrar el contenido de la variable 'numero'.

        cout << "Contenido de la variable 'numero': " << numero << endl;
        
        // Mostrar el contenido del puntero (la dirección de memoria almacenada en el puntero).

        cout << "Contenido del puntero (direccion de memoria): " << puntero << endl;
        
        // Mostrar el valor de la variable a la que apunta el puntero (contenido en la dirección de memoria apuntada).

        cout << "Valor al que apunta el puntero (contenido en esa direccion de memoria): " << *puntero << endl;
        cout << endl;
        
        // Cambiar el valor de la variable 'numero'.

        numero = 20;

        cout << "Despues de cambiar el valor de 'numero': " << endl;
        cout << "Contenido de la variable 'numero': " << numero << endl;
        cout << "Valor al que apunta el puntero: " << *puntero << endl;
        cout << endl;

        // Cambiar el valor de la variable a través del puntero.

        *puntero = 30;

        cout << "Despues de cambiar el valor de 'numero' a traves del puntero: " << endl;
        cout << "Contenido de la variable 'numero': " << numero << endl;
        cout << "Valor al que apunta el puntero: " << *puntero << endl;
        cout << endl;
        
        // Crear otro puntero y asignarle el valor del puntero anterior.

        int *otroPuntero = puntero;
        
        // Mostrar que ambos punteros apuntan a la misma variable.

        cout << "Contenido de 'puntero': " << *puntero << endl;
        cout << "Contenido de 'otroPuntero': " << otroPuntero << endl;
        cout << "Valor al que apunta 'otroPuntero': " << *otroPuntero << endl;
        cout << endl;

        return 0;
    }
