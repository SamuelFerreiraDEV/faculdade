#include <cstdlib>
#include<vector>
#include<fstream>

#include "Usuario.h"

using namespace std;

void preencherVetor(vector<Usuario>& usuarios, string path) {
    
    ifstream file;
    file.open(path.c_str());
    
    int n; 
    file >> n;
    
    for (int i = 0; i < n; i++) {
        Usuario u;
        int id;
        string nome;
        string tel;
        string descarte;
        
        file >> id;
        file >> descarte;
        file >> nome;
        file >> descarte;
        file >> tel;
        
        u.setId(id);
        u.setNome(nome);
        u.setTelefone(tel);
        
        usuarios.push_back(u);
    }
    file.close();
}

void escreverVetor(vector<Usuario>& usuarios, string path) {
    ofstream file;
    file.open(path.c_str());
    
    file << usuarios.size() << endl;
    
    for (auto user =  usuarios.begin(); user != usuarios.end(); ++user) {
        file << user->getId() << " - " << user->getNome() << " - " << user->getTelefone() << endl;
    }
    file.close();
}

void atualizarUsuario(vector<Usuario>& usuarios) {
    int id;
    cout << "Insira o ID do usuario que deseja atualizar o telefone: ";
    cin >> id;

    if (id <= usuarios.size() && id >= 1) {
        cout << "Insira o novo telefone: ";
        string tel;
        cin >> tel;
        usuarios[id-1].setTelefone(tel);
    } else {
        cout << "ID inserido invalido" << endl;
        return;
    }
    
    escreverVetor(usuarios, "att.txt");
    cout << "O vetor foi atualizado e um novo arquivo .txt foi gerado" << endl;
}


int main(int argc, char** argv) {
    
    vector<Usuario> usuarios;
    
    preencherVetor(usuarios, "usuarios.txt");
    
    atualizarUsuario(usuarios);
    
    return 0;
}

