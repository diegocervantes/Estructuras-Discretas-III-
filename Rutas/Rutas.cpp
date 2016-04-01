#include "Rutas.h"

int modulo(int a, int b)
{
    int mod = a - b * (a/b);
    if(mod >= 0)
    {
        return mod;
    }
    mod = mod + b;
    return mod;
}


Rutas::Rutas(int c)
{
    clave = c;
}

string Rutas::cifrar(string &messag)
{
    int pos = 0, cont = clave - 1, pos1 = 0, it = 0;
    bool primeravez = 1;
    string cifrado (clave*clave, 'x');
    cifrado[0] = messag[0];
    cout << cifrado << endl;
    while(it < 2 * clave - 1 )
    {



        for(int j = 0; j < cont; j++)
        {
            pos1 = modulo(pos1 + clave, messag.size() );
            pos += 1;
            cifrado[pos] = messag[pos1];

        }
        if(primeravez == 0) { cont -=1; }
        it++;

        for(int j = 0; j < cont; j++)
        {
            pos1 = modulo(pos1 + 1, messag.size() );
            pos += 1;
            cifrado[pos] = messag[pos1];
        }

        it++;

        for(int j = 0; j < cont; j++)
        {
            pos1 = modulo(pos1 - clave, messag.size() );
            pos += 1;
            cifrado[pos] = messag[pos1];
        }

        if(primeravez == 1) { primeravez = 0;}
        cont -= 1;
        it++;

        for(int j = 0; j < cont; j++)
        {
            pos1 = modulo(pos1 - 1, messag.size() );
            pos += 1;
            cifrado[pos] = messag[pos1];
        }


        it++;


    }
    return cifrado;

}
