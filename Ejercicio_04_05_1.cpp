/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 21/09/2023

Fecha modificación: 21/09/2023

Número de ejercicio: 5

Problema planteado:  Elabore un programa para registro académico de la UCB, que solicite el
nombre de una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al
final, se muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)
*/

#include <iostream>

using namespace std;

struct registros{
    char materia[40];
    int paralelo;
    char docente[30];
    int notas[50];
}registro;
int nota_final(int n);
void aprobado(int suma);

int main (){
    int n, i, nota_f;
    cout << "Ingresa el nombre de la materia: ";
    cin.getline(registro.materia, sizeof (registro.materia));
    cout << "Ingresa el paralelo: ";
    cin >> registro.paralelo;
    cin.ignore();
    cout << "Ingresa el nombre del docente: ";
    cin.getline(registro.docente, sizeof (registro.docente));
    cout << "Ingresa la cantidad de notas: ";
    cin >> n;
    for (i=0; i<n ;i++){
        cout << "Ingrese la nota: ";
        cin >>registro.notas[i];
    }
    nota_f = nota_final(n);
    aprobado(nota_f);
}

int nota_final(int n){
    int i, sum=0, prom;
    for (i=0 ; i <n ;i++){
    sum = sum +registro.notas[i];
    }
    prom = float(sum)/ float(n);
    return prom;
}

void aprobado(int suma){
    if (suma>50){
    cout << "Aprobaste la materia!"<< endl;
    cout << "Tu nota final es de: "<< suma<< endl;
    }
    else if (suma<50){
    cout << "Lo siento, no aprobaste la materia :( "<< endl;
    cout << "Tu nota final es de: "<< suma<< endl;
    }
}
