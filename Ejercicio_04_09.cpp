/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 21/09/2023

Fecha modificación: 21/09/2023

Número de ejercicio: 9

Problema planteado:  A un trabajador se le paga según las horas que trabaja en la semana,
una tarifa de pago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se
incrementa en un 50%. Calcular el salario total del trabajador, además considere que si
existe un anticipo se debe restar este valor al salario total. Al total debe descontar un
10% para el pago de impuestos. Se debe obtener:
- Total ganado
- Total descuentos
- Pago neto
*/

#include <iostream>

using namespace std;

int ganado(int monto, int tiempo);
int descuentos(int pago);

int main (){
    int tarifa, horas, total, desc;
    cout << "Ingres la tarifa por hora trabajada: ";
    cin >> tarifa;
    cout << "Ingreesa el total de horas trabajadas:" ;
    cin >> horas;
    total = ganado(tarifa, horas);
    desc = descuentos (total);
    cout << "El total ganado es: "<< total << " Bs."<< endl;
    cout << "El total de descuentos es: "<< desc << " Bs."<< endl;
    cout << "El pago neto a realizar es: "<< total-desc<< endl;
}

int ganado (int monto, int tiempo){
    int total;
    if  (tiempo > 40){
        int diferencia;
        diferencia = tiempo - 40;
        total= (40*monto)+(diferencia *(monto/2));
    }
    else
        total = tiempo * monto;
    return total;
}

int descuentos(int pago){
    int anticipo = 0, lectura, total_desc;
    cout << "Tiene algun anticipo?"<< endl;
    cout << "Digite (1)si o (2)no "<< endl;
    cin >>lectura;
    if (lectura ==1){
    cout << "Digite el monto de su anticipo: ";
    cin >> anticipo;
    }
    cout << "Recuerde que se descontara el anticipo y el monto para impuestos de su salario actual."<< endl;
    total_desc = (pago *0.1)+anticipo;
    return total_desc;
}
