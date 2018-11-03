#include <iostream>
using namespace std;

// La línea siguiente estaría definiendo un límite de 20 automóviles/dueños
#define COCHERAFIJA 20
#define COCHERAMOVIL 20

typedef struct DuenoAutomovil {
  char nombre; // Obligatorio
  char apellido; // Obligatorio
  int dni; // Obligatorio
  /* Debe introducir al menos un dato de contacto
     de manera obligatoria. */
  int telefono;
  char correo_electronico;
} ST_DUENO;
typedef struct Automovil {
  char patente; // Obligatorio
  char tipoDeVehiculo; // Obligatorio
  DuenoAutomovil nombre;
  DuenoAutomovil apellido;
} ST_AUTOMOVIL;

typedef struct Cochera {
  int id;
  Automovil tipoDeVehiculo;
  int fechaCompletaYHorario;
  int precio;
  int pagosMensuales; // Útil para cocheras fijas
} ST_COCHERA;
typedef struct Garage {
  int cocheraFija[COCHERAFIJA];
  int cocheraMovil[COCHERAMOVIL];
  float precioCocheraMovilAutoHora;
  float precioCocheraMovilAutoDia;
  float precioCocheraFijaAuto;
  float precioCocheroMovilCamionetaFija;
  float precioCocheraMovilCamionetaDia;
  float precioCocheraFijaCamioneta;
} ST_GARAGE;
// Función
void lotePreSeteado();
