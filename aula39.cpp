#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);

    cout << vnome;
    return 0;
}
