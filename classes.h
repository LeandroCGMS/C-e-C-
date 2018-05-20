#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {
public:
    int vel;
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);
private:
    std::string nome;
    int velMax;
    bool ligado;
    void setVelMax(int vm);
};

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

void Veiculo::setLigado(int l){
    if(l==1){
        ligado = true;
    } else if (l==0){
        ligado = false;
    }
}

int Veiculo::getVelMax(){
    return velMax;
}

bool Veiculo::getLigado(){
    return ligado;
}

Veiculo::Veiculo(int tp) {//1=Carro 2=Avião 3=Navio
    int tipo = tp;
    setLigado(0);
    if( tipo == 1 ) {
        nome="Carro";
        setVelMax(200);
    } else if( tipo == 2) {
        nome = "Avião";
        setVelMax(800);
    } else if ( tipo == 3) {
        nome = "Navio";
        setVelMax(120);
    }
}


#endif // CLASSES_H_INCLUDED
