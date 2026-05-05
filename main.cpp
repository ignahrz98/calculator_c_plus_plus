#include <iostream>
using namespace std;

int sumar(int num1, int num2) {
    return num1 + num2;
}

int restar(int num1, int num2) {
    return num1 - num2;
}

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

float dividir(int num1, int num2) {
    if (num2 == 0) {
        cout << "No se puede dividir por cero" << endl;
        return 0;
    }
    return num1 / num2;
}


int main() {
    int num1, num2, option;

    do {
        cout << "Menu\n1- Sumar\n2- Restar\n3- Multiplicar\n4- Dividir\n5- Salir\n>> ";
        cin >> option;

        if (option >= 1 && option <= 4) {
            cout << "Ingrese primer numero\n>> ";
            cin >> num1;

            cout << "Ingrese segundo numero\n>> ";
            cin >> num2;
        }

        switch (option) {
            case 1:
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout << "Resultado: " << dividir(num1, num2) << endl;
                break;
            case 5:
                cout << "Cerrar programa" << endl;
                break; 
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (option != 5);
}