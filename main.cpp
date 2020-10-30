#include <iostream> 
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo;
//
    //for (size_t i = 0; i < 10; i++)
    //{
    //    arreglo.insertar_final(i);
    //}
    
    arreglo.insertar_inicio("dos");
    arreglo.insertar_inicio("uno");
    arreglo.insertar_final("cuatro");
    arreglo.insertar_final("cinco");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.insertar("tres", 2);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    
    return 0;
}