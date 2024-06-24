#include <iostream>

int main() {
    // Declarar variables para los números
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    // Sumar los números
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}

