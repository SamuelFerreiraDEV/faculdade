#include "Estudante.h"

Estudante::Estudante() {
}

Estudante::Estudante(int matricula, string nome, string curso) {
    this->matricula = matricula;
    this->nome = nome;
    this->curso = curso;
}

Estudante::Estudante(const Estudante& orig) {
}

Estudante::~Estudante() {
}

void Estudante::setMatricula(int matricula) {
    this->matricula = matricula;
}

int Estudante::getMatricula() {
    return this->matricula;
}

void Estudante::setNome(string nome) {
    this->nome = nome;
}

string Estudante::getNome() {
    return this->nome;
}

void Estudante::setCurso(string curso) {
    this->curso = curso;
}

string Estudante::getCurso() {
    return this->curso;
}

void Estudante::preencher() {
    int matricula;
    string nome;
    string curso;
    
    cout << "Insira os dados do estudante" << endl;
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Nome: ";
    cin >> nome;
    cout << "Curso: ";
    cin >> curso;
    
    this->setMatricula(matricula);
    this->setNome(nome);
    this->setCurso(curso);
}

void Estudante::imprimir() {
    cout << "Matricula: " << this->getMatricula() << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Curso: " << this->getCurso() << endl;
}