/*
// Materia: Programación I, Paralelo 4

// Autor: Nahir Casablanca Mansilla

// Fecha : 14/09/23
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void seleccion(int vector2[], int n);
void insercion (int vector2[], int n);

int main (){
    int n, i;
    srand((unsigned)time(0));
    cout << "Ingresa la cantidad de numeros: ";
    cin >> n;
    int vector1[n];
    for (i=0 ; i < n ; i++){
        vector1[i] = (rand()% (11-1)+1);
    }
    cout << "Vector original: " <<endl;
    for (i=0 ; i < n ; i++){
        cout << vector1[i]<< ", ";
    }
    insercion(vector1,n);
    seleccion(vector1,n);
}

void seleccion(int vector2[],int n){
    int i, j;
    int aux;
     for (i=0 ; i < n ; i++){
        for (j=0 ; j < n ; j++){
            if (vector2[i]< vector2[j]){
            aux = vector2[i];
            vector2[i]=vector2[j];
            vector2[j]= aux;
            }
        }
    }
    cout << "\nVector ordenado por seleccion: "<< endl;
    for (i=0 ; i < n ; i++){
        cout << vector2[i]<< ", ";
    }
}
void insercion(int vector2[],int n){
    int i, j, k, l;
    int aux;
    cout << endl;
    cout << "\nVector ordenado por insercion: "<<endl;
    for (i=0 ; i < n ; i++){
        for (l=0 ; l<=i ; l++){
        for (j=0 ; j <=i ; j++){
            if (vector2[l]< vector2[j]){
            aux = vector2[l];
            vector2[l]=vector2[j];
            vector2[j]= aux;
            }
        }
        }
        for (k=0 ; k < n ; k++){
            cout << vector2[k]<< ", ";
        }
    cout <<endl;
    }
}
