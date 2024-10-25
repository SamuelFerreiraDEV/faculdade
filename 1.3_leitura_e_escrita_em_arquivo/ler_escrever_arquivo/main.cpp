#include <cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(int argc, char** argv) {
    string caminhoPasta = "teste.txt";
    ofstream arquivoSalvo;
    
    arquivoSalvo.open(caminhoPasta.c_str());
    
    arquivoSalvo << "jauo" << endl;
    
    arquivoSalvo.close();
    
    ifstream arquivoLido;
    arquivoLido.open(caminhoPasta.c_str());
    string nome;
    arquivoLido >> nome;
    arquivoLido.close();
    
    cout << nome << endl;
    
    return 0;
}

