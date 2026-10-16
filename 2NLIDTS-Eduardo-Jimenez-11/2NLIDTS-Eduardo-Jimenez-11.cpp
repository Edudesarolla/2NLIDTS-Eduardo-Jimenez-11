#include <iostream>
using namespace std;
// Función que suma los dígitos usando ciclo
int sumaIterativa(int numero)
{
    int sumadigitos = 0;

    while (numero > 9)
    {
        sumadigitos += numero % 10;
        numero /= 10;
    }
    return sumadigitos + numero;
}
int sumaRecursiva(int n)
{
    if (n <= 9)
        return n;
    return sumaRecursiva(n / 10) + (n % 10);
}
int main()
{
    int cantidad;
    int numero;
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {


        cout << "\nIngrese el numero " << i << ": ";
        cin >> numero;

        cout << "Suma iterativa: "
            << sumaIterativa(numero) << endl;

        cout << "Suma recursiva: "
            << sumaRecursiva(numero) << endl;
    }

    return 0;
}