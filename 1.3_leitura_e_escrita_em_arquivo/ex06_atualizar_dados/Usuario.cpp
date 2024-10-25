#include "Usuario.h"

Usuario::Usuario() {
}

Usuario::Usuario(int id, string nome, string telefone) {
    this->id = id;
    this->nome = nome;
    this->telefone = telefone;
}

Usuario::~Usuario() {
}

void Usuario::setId(int id) {
    this->id = id;
}

int Usuario::getId() {
    return this->id;
}

void Usuario::setNome(string nome) {
    this->nome = nome;
}

string Usuario::getNome() {
    return this->nome;
}

void Usuario::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Usuario::getTelefone() {
    return this->telefone;
}