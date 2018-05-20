#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

    vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
    vector<string>::iterator it;


    //advance
    //next
    //prev

    //advance(it,1);

    for( it=produtos.begin(); it != produtos.end(); it++) {
        cout << *it << endl;
    }

	return 0;
}
