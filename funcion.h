#include <iostream>
using namespace std;

// La línea siguiente estaría definiendo un límite de 20 automóviles/dueños
#define COCHERAFIJA 20
#define COCHERAMOVIL 20

typedef struct DuenoAutomovil {
  int id;
  char nombre; // Obligatorio
  char apellido; // Obligatorio
  int dni; // Obligatorio
  /* Debe introducir al menos un dato de contacto
     de manera obligatoria. */
  int telefono;
  char correoElectronico;
} ST_DUENO;

typedef struct Automovil {
  DuenoAutomovil id;
  char patente[7]; // Obligatorio
  int tipoDeVehiculo; // Obligatorio
  DuenoAutomovil nombre;
  DuenoAutomovil apellido;
} ST_AUTOMOVIL;

typedef struct Cochera {
  int id;
  Automovil tipoDeVehiculo;
  int fecha;
  int horario;
  int precio;
  int pagosMensuales=0; // Útil para cocheras fijas
} ST_COCHERA;

typedef struct Garage {
  DuenoAutomovil id;
  Cochera cocheraFija[COCHERAFIJA];
  Cochera cocheraMovil[COCHERAMOVIL];
  float precioCocheraMovilAutoHora=50;
  float precioCocheraMovilAutoDia=300;
  float precioCocheraFijaAuto=2500;
  float precioCocheraFijaCamioneta=75;
  float precioCocheraMovilCamionetaDia=400;
  float precioCocheroMovilCamionetaFija=4000;
} ST_GARAGE;
// Función
void lotePreSeteado();
void ingresarUnAutomovil();
