/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 19/09/2023

Fecha modificación: 20/09/2023

Número de ejercicio: 6

Problema planteado:  Escriba un programa que mediante una función determine el pago por el
servicio de  estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora
de  estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a
una  hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora
siguiente.
*/

#include <iostream>

using namespace std;

int paga(int datos[]);

int main (){
    int horas[4];
    cout << "Ingresa la hora y los minutos de entrada: ";
    cin >> horas[0] >> horas[1];
    cout << "Ingresa la hora y los minutos de salida: ";
    cin >> horas[2] >> horas[3];
    paga(horas);
    cout << "El total a pagar es: "<< paga(horas)<< " bs."<<endl;
}

//te dice el total a pagar
int paga(int datos[]){
    int total, pagar;
    int aux1, aux2;
    aux1= (datos[0]*60)+datos[1];
    aux2= (datos[2]*60)+datos[3];
    if ((aux1+60)>aux2){
        pagar= 8;
    }
    else if (aux1<aux2){
        pagar = (((aux2-aux1)/60)*3)+8;
    }
    return pagar;
}
