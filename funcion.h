#include <iostream>
using namespace std;
#include "funcion.cpp"
// La línea siguiente estaría definiendo un límite de 20 automóviles/dueños
#define CANTIDAD 20

struct duenoAutomovil {
  char nombre[CANTIDAD]; // Obligatorio
  char apellido[CANTIDAD]; // Obligatorio
  int dni[CANTIDAD]; // Obligatorio
  /* Debe introducir al menos un dato de contacto
     de manera obligatoria. */
  int telefono[CANTIDAD];
  char correo_electronico[CANTIDAD];
} ST_DUENO;
struct automovil {
  char patente[CANTIDAD]; // Obligatorio
  char tipo_de_vehiculo[CANTIDAD]; // Obligatorio
  duenoAutomovil nombre;
  duenoAutomovil apellido;
} ST_AUTOMOVIL;
struct cochera {
  int id[CANTIDAD];
  automovil tipo_de_vehiculo;
  int fecha_completa_y_horario[CANTIDAD];
  int precio[CANTIDAD];
  int pagos_mensuales[CANTIDAD]; // Útil para cocheras fijas
} ST_COCHERA;
struct garage {
  int cochera_fija[CANTIDAD];
  int cochera_movil[CANTIDAD];
  float precio_cochera_movil_auto_hora[CANTIDAD];
  float precio_cochera_movil_auto_dia[CANTIDAD];
  float precio_cochera_fija_auto[CANTIDAD];
  float precio_cochero_movil_camioneta_fija[CANTIDAD];
  float precio_cochera_movil_camioneta_dia[CANTIDAD];
  float precio_cochera_fija_camioneta[CANTIDAD];
} ST_GARAGE;
