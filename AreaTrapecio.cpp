#include <iostream>
using namespace std;

int main(){
    double baseM, basem, h;
    cout << "Programa para calcular altura del trapecio" << endl;
    cout << " " << endl;
    cout << "Ingrese base mayor" << endl;
    cin >> baseM;
    cout << "Ingrese base menor:" << endl;
    cin >> basem;
    cout << "Ingrese altura:" << endl;
    cin >> h;

    cout << "El area del trapecio es: " << (baseM + basem)*h/2 << "unidades." << endl;
}
