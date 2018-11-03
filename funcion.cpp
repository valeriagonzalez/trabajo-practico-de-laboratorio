#include <iostream>
using namespace std;
#include "funcion.h"
/*  GLOBAL  */
DuenoAutomovil DuenoAutomovil[COCHERAFIJA];
ST_AUTOMOVIL Automovil;
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
  //return i;
  cout << "I: " << i << endl;
}

void ingresarUnAutomovil(){
  // SALIDA: cocheraDestino() -> dice dónde se guardó el auto
  int ubicacionDisponible = cocheraDestino();
  /*int tipoAlquiler;
  cout << "Tipo de vehículo.\nDigite \"1\" para automóvil o \"2\" para camioneta: ";
  cin >> Automovil.tipoDeVehiculo;
  cout << "Patente en formato AA000AA: ";
  cin >> Automovil.patente;
  cout << "Tipo de alquiler:\n1. Hora\n2. Diaria\n3. Mensual";
  cin >> tipoAlquiler;
  if(tipoAlquiler==1 || tipoAlquiler==2){
      Cochera[0].pagosMensuales=0; // Si "pagosMensuales" es cero, quiere decir que la cochera se alquila por un día o menos.
  } else if(tipoAlquiler==3){
      Cochera[0].pagosMensuales=1; // Si "pagosMensuales" es mayor a cero, se asume que el vehículo estará pagando por un mes o más.
      cout << "Nombre: ";
      cin >> DuenoAutomovil[0].nombre;
      cout << "Apellido: ";
      cin >> DuenoAutomovil[0].apellido;
      cout << "DNI: ";
      cin >> DuenoAutomovil[0].dni;
      cout << "Correo electrónico: ";
      cin >> DuenoAutomovil[0].correoElectronico;
      cout << "Teléfono: ";
      cin >> DuenoAutomovil[0].telefono;
  } else {
    cout << "No insertaste la opción correcta, la tenés atroden.";
  }
  cout << "Fecha de ingreso del automóvil: ";
  cin >> Cochera[0].fecha;
  cout << "Horario: ";
  cin >> Cochera[0].horario;*/

}
