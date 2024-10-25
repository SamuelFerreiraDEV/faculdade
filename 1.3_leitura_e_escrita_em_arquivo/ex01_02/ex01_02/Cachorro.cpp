/* 
 * Created on October 21, 2024, 11:59 PM
 */

#include "Cachorro.h"
#include<iostream>
using namespace std;

Cachorro::Cachorro() {
}

Cachorro::Cachorro(const Cachorro& orig) {
}

Cachorro::~Cachorro() {
}

int Cachorro::getId() const {
    return this->id;
}

string Cachorro::getNome() const {
    return this->nome;
} 

char Cachorro::getSexo() const {
    return this->sexo;
}

float Cachorro::getIdade() const {
    return this->idade;
}

void Cachorro::setId(int id) {
    this->id = id;
}

void Cachorro::setNome(string nome) {
    this->nome = nome;
}

void Cachorro::setSexo(char sexo) {
    this->sexo = sexo;
}

void Cachorro::setIdade(float idade) {
    this->idade = idade;
}

void Cachorro::mostrar() const {
    cout << "Os dados do cachorro sao: " << endl;
    cout << this->getId() << endl;
    cout << this->getNome() << endl;
    cout << this->getSexo() << endl;
    cout << this->getIdade() << endl;
}