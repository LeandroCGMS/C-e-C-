#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

void fim() {
    cout << "CFB Cursos" << endl;
}

int comparacao(const void* a, const void* b) {
    return (*(int*) a - *(int*)b);
    //0 -> a=b
    //>0 -> a > b
    //<0 -> a < b
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[]{9,1,8,2,7,3,6,4,5,0};

    int pesq = 7;
    int *pos;

    qsort(vetor,10,sizeof(int),comparacao);

    for(int i = 0; i < 10; i++) {
        cout << vetor[i] << endl;
    }

    pos=(int*)bsearch(&pesq,vetor,10,sizeof(int),comparacao);
    cout << "\n\nElemento " << pesq << " está na posição " << *pos << endl;

    /*const char* canal="CFB Cursos";
    for(int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    _Exit(EXIT_SUCCESS);//c++11

    getchar();
    system("cls");

    getchar();
    system("dir");
    cout << canal << endl;
    getchar();*/

    return 0;
}
