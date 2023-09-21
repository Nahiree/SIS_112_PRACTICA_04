/*Materia: Programaci�n I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creaci�n: 21/09/2023

Fecha modificaci�n: 21/09/2023

N�mero de ejercicio: 11

Problema planteado:  Realice una funci�n que envi�ndole dos numero calcule el m�ximo com�n
divisor con el algoritmo de Euclides.
*/

#include <iostream>

using namespace std;

int euclide  (int n1, int n2);

//Funcion principal

int main (){
    int numero1, numero2, resultado;
    cout << "Ingres dos numeros: ";
    cin >> numero1>> numero2;
    resultado = euclide(numero1, numero2);
    cout << "El maximo comun divisor es: "<< resultado << endl;
}

//Funcion que nos ayudara a hallar el MCD por el metodo de euclides'

int euclide  (int n1, int n2){
    int aux=1, resultado;
    if (n1>n2){
    while (aux!=0){
    aux=n1%n2;
    n1=n2;
    n2= aux;
    resultado = n1;
    }
    }
    else  if (n1<n2){
    aux = n2%n1;
    resultado = n1;
    while (aux!=0){
    aux=n2%n1;
    n2=n1;
    n1= aux;
    resultado = n2;
    }
    }
    return resultado;
    }
