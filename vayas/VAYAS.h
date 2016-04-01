#ifndef VAYAS_H
#define VAYAS_H


class VAYAS
{
    public:
        VAYAS(int c);
        string cifrar(string &messag);
        string decifrar(string &messag);

    private:
        int clave;
};

#endif // VAYAS_H
