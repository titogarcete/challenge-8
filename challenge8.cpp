#include <iostream>

int main() {
    // Declarar variables para los n�meros
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos n�meros
    std::cout << "Introduce el primer n�mero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo n�mero: ";
    std::cin >> num2;

    // Sumar los n�meros
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}

