#include "iostream"

using namespace std;

int mcd(int, int);

int main(void)
{
    int i, n_impar[100];

    for ( i = 0; i < 100; i++)
    {
        n_impar[i] = 2*i +1;/*Formula de sucesion de numeros impares*/
    }

    cout << endl << "Los primeros 100 numeros impares, ordenados en orden descendente, son ";

    for ( i = 100; i > 0; i--)
    {
        cout << n_impar[ i - 1 ] << " "; /*Resto 1 para que el primer elemento sea el 99, y el ultimo el 0*/
    }
}
