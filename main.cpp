#include <iostream>
#include <math.h>


using namespace std; 

int menu(); 

int main(int argc, char** argv) {
	
	int opcion = menu();
	switch (opcion){
		case 1:
			{
			cout << "-------EJERCICIO 1------" <<endl; 
				
			break; 
			}
		case 2:
			{
				
			break; 
			}
		case 3: 
			{
				
			break; 
			}
	}//Fin del switch. 
	
	
	
	return 0;
}

int menu(){
	int opcion = 0; 
	while (opcion != 4){
		cout << "--------MENU--------" <<endl;
		cout << " 1) Ejercicio 1. "<<endl;
		cout << " 2) Ejercicio 2. " <<endl; 
		cout << " 3) Ejercicio 3. " <<endl; 
		cout << " 4) Salir. " <<endl; 
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		if (opcion == 4){
			cout << "Ha elegido salir del sistema. " <<endl; 
		}else if (opcion > 0 && opcion < 4){
			break; 
		}
	}
	return opcion; 
}


