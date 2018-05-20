#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    // ofstream, ifstream, fstream
/*
    ofstream arquivoS;

    arquivoS.open("cfbcursos.txt",ios::app);

    arquivoS << "CFB Cursos\n";
    arquivoS << "Curso de C++\n";
    arquivoS << "cfbcursos.com.br\n";
    arquivoS << "youtube.com/cfbcursos\n";

    arquivoS.close();
*/
    ifstream arquivoE;
    string linha;
    arquivoE.open("cfbcursos.txt");
    if( arquivoE.is_open() ) {
        while( getline(arquivoE,linha) ) {
            cout << linha << endl;
        }
        arquivoE.close();
    } else {
        cout << "Não foi possível abrir o arquivo." << endl;
    }

	return 0;
}
