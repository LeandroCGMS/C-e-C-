#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    /*double num;
    char numero[80];

    cin >> numero;
    num = strtod(numero,NULL);

    cout << num << endl;*/

    int tam = 10, num;
    int *vetor;

    //vetor=(int*)calloc(tam,sizeof(int));
    vetor=(int*)malloc(sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < tam; i++) {
        vetor[i] = rand()%100;

        cout << vetor[i] << endl;
    }

    free(vetor);

    /*
    for(int i = 0; i < 10; i++) {
        cout << rand()%100 << endl;
    }*/

    return 0;
}
