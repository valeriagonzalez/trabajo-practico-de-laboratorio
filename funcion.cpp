#include <iostream>
using namespace std;
#include "funcion.h"
/*  GLOBAL  */
DuenoAutomovil DuenoAutomovil[COCHERAFIJA];
ST_AUTOMOVIL Automovil[COCHERAFIJA+COCHERAMOVIL];
Cochera Cochera[COCHERAFIJA+COCHERAMOVIL];
/*  */

void lotePreSeteado(){
  //ST_DUENO.nombre="Santiago";
  //ST_DUENO.apellido="Agustin";

}

int cocheraDestino(){
  // Tengo que buscar una cochera disponible para, luego, asignar el auto.
  int i=0;
  int pos=0;
  while(Cochera[i].pagosMensuales != -1){
    i++;
  }
  return i;
}

void ingresarUnAutomovil(){
  int ubicacionDisponible = cocheraDestino(); // SALIDA: cocheraDestino() -> dice dónde se guardó el auto
  int tipoAlquiler;
  cout << "Fecha de ingreso del automóvil: ";
  cin >> Cochera[ubicacionDisponible].fecha;
  cout << "Horario de ingreso: ";
  cin >> Cochera[ubicacionDisponible].horario;
  cout << "Tipo de vehículo.\nDigite \"1\" para automóvil o \"2\" para camioneta: ";
  cin >> Automovil[ubicacionDisponible].tipoDeVehiculo;
  cout << "Patente en formato AA000AA: ";
  cin >> Automovil[ubicacionDisponible].patente;
  cout << "Tipo de alquiler:\n1. Hora(s)\n2. Día\n3. Mensual\n";
  cin >> tipoAlquiler;
      if(tipoAlquiler==1 || tipoAlquiler==2){
        Cochera[ubicacionDisponible].pagosMensuales=0; // Si "pagosMensuales" es cero, quiere decir que la cochera se alquila por un día o menos.
      } else if(tipoAlquiler==3){
        Cochera[ubicacionDisponible].pagosMensuales=1; // Si "pagosMensuales" es mayor a cero, se asume que el vehículo estará pagando por un mes o más.
        cout << "Nombre: ";
        cin >> DuenoAutomovil[ubicacionDisponible].nombre;
        cout << "Apellido: ";
        cin >> DuenoAutomovil[ubicacionDisponible].apellido;
        cout << "DNI: ";
        cin >> DuenoAutomovil[ubicacionDisponible].dni;
        cout << "Correo electrónico: ";
        cin >> DuenoAutomovil[ubicacionDisponible].correoElectronico;
        cout << "Teléfono: ";
        cin >> DuenoAutomovil[ubicacionDisponible].telefono;
      } else {
        cout << "No insertaste la opción correcta, la tenés atroden.";
      }

  cout << "¡Excelente! El vehículo está en la cochera " << ubicacionDisponible << endl;
}
