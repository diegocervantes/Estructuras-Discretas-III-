#include "Criptografia.h"
#include "modulo.h"

int main()
{
    string mensaje;
    int clave, n;
    cout << "Ingrese su clave: ";
    cin >> clave ;
    Criptografia Cesar(clave);
    cout << "Cifrar = 1, Decifrar 2" << endl;
    cout << "Que desea hacer? " ;
    cin >> n ;
    cout << "Ingrese su mensaje: ";
    if( n == 1)
    {
            cin >> mensaje;
            Cesar.cifrar(mensaje);
            cout << mensaje << endl;
    }
    if( n == 2)
    {
        cin >> mensaje;
        Cesar.decifrar(mensaje);
        cout << mensaje << endl;
    }
}

