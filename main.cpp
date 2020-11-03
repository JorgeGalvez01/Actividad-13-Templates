
#include <iostream> 
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> computadoras;

    Computadora compu01("MacOS", "MacBook Air", 8, 512); 
    Computadora compu02("Windows 10", "HP Pavilon", 8, 1000);
    Computadora compu03("Linux", "MintBox 2", 6, 200);

    computadoras << compu01 << compu02 << compu03 << compu02 << compu02;
    Computadora compu04("Windows 10", "HP Pavilon", 8, 1000);

    Computadora *ptr = computadoras.buscar(compu04);

    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(compu04);

    if (ptrs.size() > 0)
    {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    } 
    else
    {
        cout << "No existen coincidencias" << endl;
    }
    

    //Computadora *ptr = computadoras.buscar(compu04);
//
    //if (ptr != nullptr)
    //{
    //    cout << *ptr << endl;
    //}
    //else
    //{
    //    cout << "No existe" << endl;
    //}
    //Arreglo<string> arreglo;
//
    //for (size_t i = 0; i < 10; i++)
    //{
    //    arreglo.insertar_final(i);
    //}
    //
    //arreglo.insertar_inicio("dos");
    //arreglo.insertar_inicio("uno");
    //arreglo.insertar_final("cuatro");
    //arreglo.insertar_final("cinco");
//
    //for (size_t i = 0; i < arreglo.size(); i++)
    //{
    //    cout << arreglo[i] << " ";
    //}
    //cout << endl;
//
    //arreglo.insertar("tres", 2);
//
    //for (size_t i = 0; i < arreglo.size(); i++)
    //{
    //    cout << arreglo[i] << " ";
    //}
    //cout << endl;
//
    //arreglo.eliminar_inicio();
    //arreglo.eliminar_final();
    //arreglo.eliminar(1);
//
    //for (size_t i = 0; i < arreglo.size(); i++)
    //{
    //    cout << arreglo[i] << " ";
    //}
    //cout << endl;
//
    //string *v = arreglo.buscar("cuatro");
    //*v = "hola";
//
    // for (size_t i = 0; i < arreglo.size(); i++)
    //{
    //    cout << arreglo[i] << " ";
    //}
    //cout << endl;
    //cout << v << " " << *v << endl;
    //cout << endl;

    
    return 0;
}