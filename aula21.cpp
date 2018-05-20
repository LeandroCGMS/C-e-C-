#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    setlocale(LC_ALL,"Portuguese");
    /*cout << argv[1] << "\n\n";
    cout << argc << "\n\n";*/
    if(argc > 1){
        if(!strcmp(argv[1],"sol")){
            cout << "Vou ao clube.\n\n";
        } else if(!strcmp(argv[1],"nublado")){
            cout << "Vou ao cinema.\n\n";
        } else {
            cout << "Vou ficar em casa.\n\n";
        }
    }
    getchar();
    return 0;
}
