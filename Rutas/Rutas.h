#ifndef RUTAS_H
#define RUTAS_H
#include <string>
#include <iostream>

using namespace std;

class Rutas
{
    private:
        int clave;
    public:
        Rutas(int c);
        string cifrar(string &messag);
        string decifrar(string &messag);


};

#endif // RUTAS_H
