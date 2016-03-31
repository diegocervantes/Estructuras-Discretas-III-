#include "Criptografia.h"

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


Criptografia::Criptografia(int c)
{
    alfabeto = "abcdefghijklmnopqrstuvwxyz";
    clave = c;
}

string Criptografia::cifrar(string &messag)
{
    int found;
    for(int i = 0; i < messag.size(); i++)
    {
        found = modulo( (alfabeto.find(messag[i]) + clave) , (alfabeto.size()) );
        messag[i] = alfabeto[found];
    }
    return messag;
}

string Criptografia::decifrar(string &messag)
{
    int found;
    for(int i = 0; i < messag.size(); i++)
    {
        found = modulo( (alfabeto.find(messag[i]) - clave ) , (alfabeto.size()) );
        messag[i] = alfabeto[found];
    }
    return messag;




}
