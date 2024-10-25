#include<iostream>
#include<string.h>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H

class Usuario {
public:
    Usuario();
    Usuario(int, string, string);
    Usuario(const Usuario& orig) = default;
    virtual ~Usuario();
    void setId(int);
    int getId();
    void setNome(string);
    string getNome();
    void setTelefone(string);
    string getTelefone();
private:
    int id;
    string nome;
    string telefone;
};

#endif /* USUARIO_H */

