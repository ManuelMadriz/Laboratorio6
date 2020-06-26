#include "iostream"

using namespace std;

double promediar(int[], int);

int main(void)
{
    int i, n;

    cout << endl << "¿Cuantos datos deseas ingresar?" << endl;

    cin >> n;

    int arreglo[n];

    for ( i = 0; i < n; i++)
    {
        cout << endl << "Ingresa el dato numero " << i + 1 << endl;
        cin >> arreglo[i];
    }

    cout << endl << "EL promedio de los datos ingresados es:" << promediar(arreglo, n) << endl;
}

double promediar( int arreglo[], int tamano)
{
    int i, sumatoria = 0;/*Lo igualo a 0 para que no pase nada raro en la sumatoria*/

    for ( i = 0; i < tamano; i++)
    {
        sumatoria += arreglo[i];
    }

    return static_cast<float>(sumatoria) / static_cast<float>(tamano);
    /*Como la division de numeros enteros puede no ser entero, hago estas conversiones*/
}
