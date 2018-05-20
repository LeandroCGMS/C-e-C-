#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int *p;
    int vetor[10];

    p=&vetor[0];
    *p=10;
    cout << "\n" << vetor[0] << "\n";

    *(p++);
    *p=20;
    cout << "\n" << vetor[1] << "\n";

    *(p++);
    *p=30;
    cout << "\n" << vetor[2] << "\n";

    return 0;
}
