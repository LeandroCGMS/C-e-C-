#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    //int vetor[]={5,3,1,4,7,2,6};

    //vector<int>num={5,3,1,4,7,2,6};
    //auto it = find(num.begin(),num.end(),6);
    string texto = "CFB Cursos - Aula de C++";
    size_t enc = texto.find("chip");

    if(enc != string::npos) {
        cout << "Palavra encontrada. -> " << enc << endl;
    } else {
        cout << "Palavra NÃO encontrada." << endl;
    }

    size_t tam = texto.size();
    // size_t tam = sizeof vetor /4
    // size_t tam = sizeof vector /4

    //int *p;
    //size_t tam = sizeof vetor / 4;
    //p=find(vetor,vetor+tam,16);


    return 0;
}
