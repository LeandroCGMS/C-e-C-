#include <iostream>
#include <locale>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    size_t tam;
    vector<int>num{9,6,3,8,5,2,7,4,1,0};

    tam = num.size();

    cout << tam << endl;
    /*int num,den;
    div_t res;

    num=10;
    den=3;

    res = div(num,den);

    cout << num << " dividido por " << den << " = " << res.quot << ", resto " << res.rem << endl;*/

    return 0;
}
