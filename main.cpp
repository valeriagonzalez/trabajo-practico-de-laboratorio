#include <iostream>
#include "funcion.h"
using namespace std;
int main() {
	int opcion;
	// Inicia el menú principal
	cout << ":: CONTROLADOR DE GARAGE ::\nDigite la opción a seleccionar:" << endl;
	cout << "1. Ingresar un automóvil" << endl;
	cout << "2. Cambiar automóvil de cochera" << endl;
	cout << "3. Liberar una cochera fija" << endl;
	cout << "4. Listar deudores" << endl;
	cout << "5. Listar las cobranzas mensuales" << endl;
	// Finaliza el menú principal
	cout << "\nOpción: ";
	cin >> opcion;
	//lotePreSeteado();
	if(opcion==1){
		ingresarUnAutomovil();
	}
}
