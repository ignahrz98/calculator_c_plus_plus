#include <iostream>
#include <cmath>
using namespace std;

class BasicCalc {
    public:
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
                throw "Division por cero";
                return 0;
            }
            return num1 / num2;
        }
};

class Temperature {
    public:
        float celsius_to_fahrenheit(int degrees) {
            return (degrees * (9.0/5.0)) + 32;
        }

        float fahrenheit_to_celsius(int degrees) {
            return (degrees - 32.0) * (5.0/9.0);
        }
};


int main() {
    int num1, num2, option;
    Temperature temperature;
    BasicCalc basicCalc;

    do {
        cout << "---- Menu ----\n1- Sumar\n2- Restar\n3- Multiplicar\n4- Dividir\n5- Celsius a Fahrenheit\n6- Fahrenheit a Celsius\n7- Salir\n>> ";
        cin >> option;

        if (option >= 1 && option <= 4) {
            cout << "Ingrese primer numero\n>> ";
            cin >> num1;

            cout << "Ingrese segundo numero\n>> ";
            cin >> num2;
        }

        switch (option) {
            case 1:
                cout << "Resultado: " << basicCalc.sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << basicCalc.restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << basicCalc.multiplicar(num1, num2) << endl;
                break;
            case 4:
                try {
                    cout << "Resultado: " << basicCalc.dividir(num1, num2) << endl;
                } catch (const char* msg) {
                    cout << "Error: " << msg << endl;
                }
                break;
            case 5:
                cout << "Ingrese grados celsius\n>> ";
                cin >> num1;
                cout << "Grados fahrenheit: " << round(temperature.celsius_to_fahrenheit(num1)) << endl;
                break;
            case 6:
                cout << "Ingrese grados fahrenheit\n>> ";
                cin >> num1;
                cout << "Grados celsius: " << round(temperature.fahrenheit_to_celsius(num1)) << endl;
                break;
            case 7:
                cout << "Cerrar programa" << endl;
                break; 
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (option != 7);
}