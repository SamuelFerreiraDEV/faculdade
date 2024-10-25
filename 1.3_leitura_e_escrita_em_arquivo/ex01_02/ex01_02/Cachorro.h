/*
 * Created on October 21, 2024, 11:59 PM
 */

#include<iostream>
#include<string.h>
using namespace std;

#ifndef CACHORRO_H
#define CACHORRO_H

class Cachorro {
public:
    Cachorro();
    Cachorro(const Cachorro& orig);
    virtual ~Cachorro();
    
    void setId(int);
    int getId() const;
    void setNome(string);
    string getNome() const;
    void setSexo(char);
    char getSexo() const;
    void setIdade(float);
    float getIdade() const;
    void mostrar() const;
    
private:
    int id;
    string nome;
    char sexo;
    float idade;
};

#endif /* CACHORRO_H */

