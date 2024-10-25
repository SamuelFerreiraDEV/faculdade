#include <cstdlib>
#include<fstream>
#include<iostream>
#include<random>
#include<chrono>

using namespace std;

void generateMatrix(int l, int c, int min, int max, string path) {
    int lines = l;
    int columns = c;
    int minValue =  min;
    int maxValue = max;
    
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> distr(minValue, maxValue);
    
    ofstream file;
    file.open(path.c_str());
    
    file << lines <<  " " << columns << endl;
    
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            file << distr(gen) << " ";
        }
        file << endl;
    }

    file.close();
}

void readMatrix(string path) {
    ifstream file;
    file.open(path.c_str());

    int lines; 
    int columns;
    
    file >> lines;
    file >> columns;
    cout << lines << " " << columns << endl;
    
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            int n;
            file >> n;
            cout << n << " ";
        }
        cout << endl;
    }
    
    file.close();
}

void multiplyMatrices(string path1, string path2, string path3) {
    ifstream file1;
    ifstream file2;
    
    file1.open(path1.c_str());
    file2.open(path2.c_str());
    
    int matrix1Lines;
    int matrix1Columns;
    int matrix2Lines;
    int matrix2Columns;
    
    file1 >> matrix1Lines;
    file1 >> matrix1Columns;
    file2 >> matrix2Lines;
    file2 >> matrix2Columns;
    
    if (matrix1Columns == matrix2Lines) {
        cout << "The resulting matrix size will be " << matrix1Lines << "x" << matrix2Columns << endl;
    } else {
        cout << "It's not possible to multiply." << endl;
        return;
    }
    
    int** matrix1 = new int*[matrix1Lines];
    
    for (int i = 0; i < matrix1Lines; i++) {
        matrix1[i] = new int[matrix1Columns];
        for (int j = 0; j < matrix1Columns; j++) {
            int n;
            file1 >> n;
            matrix1[i][j] = n;
        }
    }
    file1.close();
    
    int** matrix2 = new int*[matrix2Lines];
    
    for (int i = 0; i < matrix2Lines; i++) {
        matrix2[i] = new int[matrix2Columns];
        for (int j = 0; j < matrix2Columns; j++) {
            int n;
            file2 >> n;
            matrix2[i][j] = n;
        }
    }
    file2.close();
    
    int** matrix3 = new int*[matrix1Lines];
    
    for (int i = 0; i < matrix1Lines; i++) {
        matrix3[i] = new int[matrix2Columns];
    }
    
    int sum = 0;
    for (int i = 0; i < matrix1Lines; i++) {
        for (int j = 0; j < matrix2Columns; j++) {
            for (int k = 0; k < matrix2Lines; k++) {  // A PARTE DIFICIL FOI ESSA AQUI
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[ i ][ j ] = sum;
            sum = 0;
        }
    }
    
    ofstream file3;
    file3.open(path3.c_str());
    
    file3 << matrix1Lines << " " << matrix2Columns << endl;
    
    for (int i = 0; i < matrix1Lines; i++) {
        for (int j = 0; j < matrix2Columns; j++) {
            file3 << matrix3[i][j] << " ";
        }
        file3 << endl;
    }
}

int main(int argc, char** argv) {
    generateMatrix(450, 180, 0, 10, "matrix1.txt");
    generateMatrix(180, 250, -100, 100, "matrix2.txt");
    multiplyMatrices("matrix1.txt", "matrix2.txt", "matrix3.txt");
    readMatrix("matrix3.txt");
    
    return 0;
}
