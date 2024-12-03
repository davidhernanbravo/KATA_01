/*  Desarrollar una App que muestre el contenido de una Variable que debe ser accedida desde 2 punteros,
    cambiar el valor desde la variable y desde el puntero. (Tiempo estimado 20 Min.).

    Objetivos:

    a. Concientizar el sentido de los punteros
    b. Identificar la creación, asignación y manejo de Punteros
    c. Demostrar que puedo accede a la variable de distintas maneras.
    d. Desarrollar incrementos desde *puntero++ y puntero++ cual es la diferencia?
    e. Incorporar puntero constante y puntero a constante */

 #include <iostream>
 using namespace std;

int main() 
    {
        // a) Creación de una variable normal.
        int variable = 10;
        
        // b) Creación de dos punteros que apuntarán a la variable.

        int *puntero1 = &variable;
        int *puntero2 = puntero1; // Asignamos la dirección de puntero1 a puntero2.
        
        // c) Mostrar el contenido de la variable, los punteros y el valor al que apuntan.

        cout << "Valor de la variable: " << variable << endl;
        cout << "Contenido de puntero1 (direccion de variable): " << puntero1 << endl;
        cout << "Contenido de puntero2 (direccion de variable): " << puntero2 << endl;
        cout << "Valor al que apunta puntero1: " << *puntero1 << endl;
        cout << "Valor al que apunta puntero2: " << *puntero2 << endl;
        cout << endl;

        // d) Cambiar el valor de la variable directamente.

        variable = 50;

        cout << "Despues de cambiar el valor de la variable directamente:" << endl;
        cout << "Valor de la variable: " << variable << endl;
        cout << "Valor al que apunta puntero1: " << *puntero1 << endl;
        cout << "Valor al que apunta puntero2: " << *puntero2 << endl;
        cout << endl;
        
        // e) Cambiar el valor de la variable a traves de puntero1.

        puntero1 = &variable;

        cout << "Despues de cambiar el valor de la variable a traves de puntero1:" << endl;
        cout << "Valor de la variable: " << variable << endl;
        cout << "Valor al que apunta puntero1: " << *puntero1 << endl;
        cout << "Valor al que apunta puntero2: " << *puntero2 << endl;
        cout << endl;

        // f) Incrementos con puntero++ y *puntero++.

        int array[] = {1, 2, 3};
        int *ptr = array;
        
        cout << "Antes de puntero++:" << endl;
        cout << "Valor al que apunta ptr: " << *ptr << endl;
        cout << endl;
        
        // Incrementar el puntero (mover al siguiente elemento del array).

        cout << "Despues de puntero++ (mueve el puntero al siguiente elemento):" << endl;
        cout << "Valor al que apunta ptr: " << *ptr++ << endl;
        cout << "valor decrementado ptr " << *ptr-- << endl;

        cout << endl;
        
        ptr = array; // Reiniciar el puntero al inicio del array.

        cout << "Antes de *puntero++:" << endl;
        cout << "Valor al que apunta ptr: " << *ptr << endl;
        cout << endl;

        
        // Incrementar el valor al que apunta, luego mover el puntero.

        cout << "Despues de *puntero++ (incrementa el valor y luego mueve el puntero):" << endl;
        cout << "Valor antes del incremento: " << *ptr++ << endl;
        cout << "Valor al que apunta ptr despues del incremento: " << *ptr << endl;
        cout << endl;
        
        // g) Uso de puntero constante y puntero a constante.

        const int constante = 100;
        const int *punteroAConstante = &constante; // Puntero a constante.

        // *punteroAConstante = 200; // Esto causaría un error, no se puede modificar el valor.

        cout << "\nValor al que apunta puntero a constante: " << *punteroAConstante << endl;
        
        int variable2 = 50;
        int *const punteroConstante = &variable2; // Puntero constante-
        *punteroConstante = 60; // Se puede modificar el valor al que apunta.

        // punteroConstante = &variable; // Esto causaría un error, no se puede modificar la dirección del puntero.

        cout << "Valor al que apunta puntero constante despues de modificar la variable: " << *punteroConstante << endl;

        return 0;
    }




