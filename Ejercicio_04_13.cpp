/*Materia: Programación I, Paralelo 4

Autor: Nahir Casablanca Mansilla

Fecha creación: 21/09/2023

Fecha modificación: 21/09/2023

Número de ejercicio: 13

Problema planteado:  Una empresa efectúa el control de asistencia de sus empleados mediante
un lector biométrico, el horario en la entrada es a las 8:00 a.m y la salida es a las
16:00 p.m. El empleado tiene una tolerancia de 10 minutos en la entrada, si llega más allá
de los 10 minutos de tolerancia se penaliza todos los minutos de atraso (es decir si llega
a las 8:12 se penalizan los 12 minutos). De igual forma no puede salir antes del horario
establecido en la salida, (si lo hace se penaliza los minutos faltantes), pero si el empleado entra
antes o sale después de sus horarios el sistema solo toma en cuenta las 8 horas laborales
de trabajo.
El problema consiste en determinar el tiempo trabajado y los minutos de penalización
para el empleado en cualquier día laboral.
*/

#include <iostream>

using namespace std;

int penalizacion (int datos[]);

int main (){
    int horario[4], fecha[3];
    int min_penalizacion, codigo;
    cout << "Ingresa tu codigo de empleado: ";
    cin >> codigo;
    cout << "Ingresa la hora y minutos de entrada: ";
    cin >> horario[0]>>horario[1];
    cout << "Ingresa la hora y minutos de salida: ";
    cin >> horario[2]>>horario[3];
    cout << "Ingresa la fecha: ";
    cin >> fecha[0]>>fecha[1]>>fecha[2];
    min_penalizacion= penalizacion (horario);
    cout << "\nCodigo de empelado:" << codigo << endl;
    cout << "Hora de entrada " << horario[0] << " : " << horario[1] << endl;
    cout << "Hora de salida " << horario[2] << " : " << horario[3] << endl;
    cout << "Fecha:" << fecha[0] << "/" << fecha[1] << "/"<< fecha[2]<<endl;
    cout << "PENALIZACION: "<<min_penalizacion<< endl;
}

//Calcula los minutos de penalizacion
int penalizacion(int datos[]){
    int irregularidad=0;
    if (datos[0]==8 && datos[1]>10){
        irregularidad = datos[1];
    }
    if (datos[2]<16){
        irregularidad = (60-datos[3])+ irregularidad;
    }
    return irregularidad;
}
