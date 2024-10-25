#include <cstdlib>
#include"Estudante.h"
#include<fstream>
#include<vector>

using namespace std;

int main(int argc, char** argv) {
    
    vector<Estudante> estudantes;
    
    for (int i = 0; i < 4; i++) {
        Estudante e;
        estudantes.push_back(e);
    }

    string path = "estudantes.txt";
    ofstream file;
    file.open(path.c_str());
    
    for (Estudante e: estudantes) {
        e.preencher();
        
        file << e.getMatricula() << " - " << e.getNome() << " - " << e.getCurso() << endl;
    }
    
    file.close();
    
    return 0;
}

