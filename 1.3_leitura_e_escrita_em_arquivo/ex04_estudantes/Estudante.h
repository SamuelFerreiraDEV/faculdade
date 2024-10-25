#include<iostream>
#include<string.h>
using namespace std;

#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class Estudante {
public:
    Estudante();
    Estudante(int, string, string);
    Estudante(const Estudante& orig);
    virtual ~Estudante();
    void setMatricula(int);
    int getMatricula();
    void setNome(string);
    string getNome();
    void setCurso(string);
    string getCurso();
    void preencher();
    void imprimir();
private:
    int matricula;
    string nome;
    string curso;
};

#endif /* ESTUDANTE_H */

