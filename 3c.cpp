#include <iostream>

using namespace std;

int main() {
    int X, Y;
    char operador;

    cout << "Digite dois números inteiros: ";
    cin >> X >> Y;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;
    if (operador == '+') {
        cout << "Resultado: " << X + Y << endl;
    }else{
        if(operador == '-'){
            cout << "Resultado: " << X - Y << endl;
        }else{
            if(operador == '*'){
                cout << "Resultado: " << X * Y << endl;
            }else{
                if(operador == '/'){
                    if(Y != 0) {
                        cout << "Resultado: " << static_cast<double>(X) / Y << endl;
                    }else{
                        cout << "Erro: Divisao por zero!" << endl;
                    }
                }else{
                    cout << "Operador invalido!" << endl;
                }
            }
        }
    }

    return 0;
}
