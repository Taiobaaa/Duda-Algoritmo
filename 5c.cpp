#include <iostream>

using namespace std;

int calcularMedia(int nota1, int nota2, int nota3, char tipoMedia) {
    if (tipoMedia == 'A') {
        return (nota1 + nota2 + nota3) / 3;
    }else if (tipoMedia == 'P') {
        return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
    }else{
        cout << "Tipo de media invalido!" << endl;
        return -1; 
    }
}

int main() {
    int nota1, nota2, nota3;
    char tipoMedia;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite 'A' para media aritmetica ou 'P' para media ponderada: ";
    cin >> tipoMedia;
    int resultadoMedia = calcularMedia(nota1, nota2, nota3, tipoMedia);
    if (resultadoMedia >= 0) {
        cout << "A media e: " << resultadoMedia << endl;
    }

    return 0;
}
