/*
 * Created on October 21, 2024, 11:58 PM
 */

#include <cstdlib>
#include <fstream>
#include<vector>
#include"Cachorro.h"

using namespace std;

int main(int argc, char** argv) {
    
    string path = "cachorros.txt";
    ifstream file;
    file.open(path.c_str());
    
    int tam;
    file >> tam;
    
    vector<Cachorro*> canil;
    
    
    for (int i = 0; i < tam; i++) {
        
        Cachorro* c = new Cachorro();
        int id;
        string nome;
        char sexo;
        float idade;
        
        file >> id;
        file >> nome;
        file >> sexo;
        file >> idade;

        c->setId(id);
        c->setNome(nome);
        c->setSexo(sexo);
        c->setIdade(idade);
        
        canil.push_back(c);
    }
    
    file.close();
    
    for (Cachorro* c : canil) {
        c->mostrar();
    }
    
    return 0;
}

