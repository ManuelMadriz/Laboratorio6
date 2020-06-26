#include "iostream"
#include "cmath"

using namespace std;

double promediar( double[], int);

int main(void)
{
    int n_mediciones, i;

    cout << endl << "Este programa te servira para encontrar la incerteza de una serie de mediciones" << endl;

    cout << endl << "¿Cuantas mediciones se han realizado?" << endl;
    cin >> n_mediciones;

    double sumatoria = 0;
    double promedio, incerteza, mediciones[n_mediciones];

    for ( i = 0; i < n_mediciones ; i++)
    {
        cout << endl << "Ingrese la medicion numero " << i+1 << endl;
        cin >>  mediciones[i];
    }

    promedio = promediar( mediciones, n_mediciones);/*Se calcula el promedio de las mediciones*/
    
    for ( i = 0; i < n_mediciones; i++)
    /*Se realiza la sumatoria de los cuadrados de la diferencia de cada medicion y el promedio*/
    {
        sumatoria += pow(mediciones[i]-promedio, 2);
    }

    incerteza = sqrt(sumatoria / (n_mediciones - 1));/*La raiz del cociente entre el total de la sumatoria y la cantidad de elementos - 1*/

    cout << endl << "La incerteza es del: "  << incerteza<< endl;
}

double promediar( double arreglo[], int tamano)
/*Basicamente es el mismo ejercicio 2, solo que recibe como parametro un arreglo double, en lugar de int*/
{
    int i;
    double sumatoria = 0;

    for ( i = 0; i < tamano; i++)
    {
        sumatoria += arreglo[i];
    }
    
    return sumatoria / static_cast<float>(tamano);
}