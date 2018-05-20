#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // ofstream, ifstream, fstream

    ofstream arquivo;

    arquivo.open("cfbcursos.txt",ios::app);

    arquivo << "\ncfbcursos.com.br";

    arquivo.close();

	return 0;
}
