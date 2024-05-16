#include <iostream>

using namespace std;

#define pi  3.14;
#define curtir cout << "Curta meu cronograma\n";

void escrever(){
    cout << "\nOlá Maykon!\n";
}

int somar(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}

int main(){

    escrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);

    cout << "Soma: " << s << endl;
    curtir;

    cout << pi;
    cout << "\n";
    curtir

    return 0;
}