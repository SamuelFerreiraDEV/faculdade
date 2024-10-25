#include <cstdlib>
#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char** argv) {

    string path = "produtos.txt";
    
    ifstream file;
    file.open(path.c_str());
    
    int length;
    file >> length;
    
    for (int i = 0; i < length; i++) {
        int id;
        string nome;
        float preco;
        string descarte;
        
        file >> id;
        file >> descarte;
        file >> nome;
        file >> descarte;
        file >> preco;
        
        if (preco > 50) cout << nome << " -  R$ " << preco << endl;
    }
    
    file.close();
    
    return 0;
}

