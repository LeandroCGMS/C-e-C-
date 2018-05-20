#include <iostream>
#include <locale.h>
#include <memory>

class Carro {
public:
    int vel = 0;
    int getVel() {
        return vel;
    }
    void setVel(int v) {
        this->vel = v;
    }
};

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

	unique_ptr<Carro>c1(new Carro);
	unique_ptr<Carro>c2(new Carro);
	c1->setVel(10);
    c2->setVel(5);
	cout << "Velocidade: " << c1->getVel() << endl;
	cout << "Velocidade: " << c2->getVel() << endl;
    //int *pnum=new int();
    //unique_ptr<int>pnum(new int);
    /*string* str=new string("CFB Cursos");

    cout << *str << " - tamanho: " << str->size() << endl;

    delete str;*/
    /*unique_ptr<string>str(new string("CFB Cursos"));
    cout << *str << " - tamanho: " << str->size() << endl;*/
    /*Carro *c1 = new Carro();
    cout << "Velocidade: " << c1->getVel() << endl;
    delete c1;*/

	return 0;
}
