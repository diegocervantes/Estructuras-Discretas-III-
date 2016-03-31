#ifndef CRIPTOGRAFIA_H_INCLUDED
#define CRIPTOGRAFIA_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;


class Criptografia
{

private:
    int clave;
public:
    Criptografia(int c);
    string alfabeto;
    string cifrar(string &messag);
    string decifrar(string &messag);
};



#endif // CRIPTOGRAFIA_H_INCLUDED
