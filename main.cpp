#include <iostream>
#include <math.h>
#include <ctime>
#include <cmath>


using namespace std; 

int menu(); 

void recursivoPascal(int [], int [], int, int);

void desviacion();

void codigobarra(int [], int []);

int main(int argc, char** argv) {
	
	int opcion = menu();
	while (opcion != 4){
		switch (opcion){
			case 1:
				{
				cout << "-------EJERCICIO 1------" <<endl; 
				int max_n = 0; 
				bool v = false; 
				while (v == false){
					cout << "Ingrese la cantidad de iteraciones del triangulo de Pascal: " <<endl; 
					cin >> max_n; 
					if (max_n >= 1 && max_n <= 99){
						v = true; 
					}else {
						v = false;	
						cout << "Valor ingresado invalido. " <<endl; 
					}	
				}
				int res_anterior [100];
				int salida [100]; 
				int n = 0; 
				for (int c = 0; c < 100; c++){
					res_anterior [c] = 0; 
					salida [c] = 0; 
				}
				recursivoPascal(res_anterior, salida, max_n, n);
				cout << "-------FINAL EJERCICIO 1------" <<endl; 
				break; 
				}
			case 2:
				{
				cout << "-------EJERCICIO 2------" <<endl; 
				desviacion();
				cout << "-------FINAL EJERCICIO 2------" <<endl; 
				break; 
				}
			case 3: 
				{
				cout << "-------EJERCICIO 3------" <<endl; 
				int arreglo [10];
				int arreglo2 [10];
				srand(time(NULL));
				for (int c =0; c < 10;c++){
					int num = 1 + rand() % (19);
					arreglo [c] = num; 
				}
				for (int c = 0; c < 10;c++){
					int num = 1 + rand() % (19);
					arreglo2 [c] = num; 
				}
				codigobarra(arreglo, arreglo2);
				cout << "-------FINAL EJERCICIO 3------" <<endl; 	
				break; 
				}
		}//Fin del switch.
		cout <<endl; 
		opcion = menu(); 
	}//Fin del while. 
	
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

void recursivoPascal(int res_anterior [], int salida [], int max_n, int n){
	if (n == max_n){
		int arreglo [100]; 
			for (int c = 0; c < 100; c++){
				arreglo [c] =0;
			}
			int elem = 0; 
			for (int c = 0; c < 100;c++){
				int elemento = res_anterior [c];
				if (c < 99){
					int elemento2 = res_anterior [c + 1];
					if (elemento != 0 && elemento2 != 0){
						int suma = elemento + elemento2; 
						arreglo [elem] = suma; 
						elem++;  
					}
				}
			}
			salida [0] = 1; 
			int indice = 1;
			int v =0; 
			for (int c =0; c < 100; c++){
				int elemento = arreglo [c];
				if (elemento != 0){
					salida [indice] = elemento; 
					indice++; 
				}else if (v == 0){
					salida [indice] = 1; 
					v = 1; 
				}
			}
			for (int c =0; c < 100; c++){
				if (salida [c] != 0){
				cout << salida [c] << " "; 
				}
			}
			cout <<endl; 
			res_anterior = salida; 
	}else {
		if (n == 0){
			res_anterior [0] = 1; 
			for (int c = 0; c < 100;c++){
				int elemento = res_anterior [c]; 
				if (elemento != 0){
					cout << elemento << " ";
				}
			}
			cout <<endl; 
		}else if (n == 1){
			res_anterior [1] = 1; 
			for (int c = 0; c < 100;c++){
				int elemento = res_anterior [c]; 
				if (elemento != 0){
					cout << elemento << " ";
				}
			}
			salida = res_anterior;
			cout <<endl; 
		}else {
			int arreglo [100]; 
			for (int c = 0; c < 100; c++){
				arreglo [c] =0;
			}
			int elem = 0; 
			for (int c = 0; c < 100;c++){
				int elemento = res_anterior [c];
				if (c < 99){
					int elemento2 = res_anterior [c + 1];
					if (elemento != 0 && elemento2 != 0){
						int suma = elemento + elemento2; 
						arreglo [elem] = suma; 
						elem++;  
					}
				}
			}
			salida [0] = 1; 
			int indice = 1;
			int v =0; 
			for (int c =0; c < 100; c++){
				int elemento = arreglo [c];
				if (elemento != 0){
					salida [indice] = elemento; 
					indice++; 
				}else if (v == 0){
					salida [indice] = 1; 
					v = 1; 
				}
			}
			for (int c =0; c < 100; c++){
				if (salida [c] != 0){
				cout << salida [c] << " "; 
				}
			}
			cout <<endl; 
			res_anterior = salida; 
		}
		recursivoPascal(res_anterior, salida, max_n, n + 1); 
		
	}
}

void desviacion(){
	int arreglo [20]; 
	srand(time(NULL));
	for (int c =0; c < 20;c++){
		arreglo [c] = 1 + rand() % (99);
	}
	int sum =0;
	for (int c =0; c < 20; c++){
		sum += arreglo [c];
	}
	double promedio = (double) sum / 20; 
	double sumatoria =0; 
	for (int c =0; c < 20; c++){
		int num = arreglo [c];
		double valorabsoluto = num - promedio; 
		double cuadrado = valorabsoluto * valorabsoluto; 
		sumatoria += cuadrado; 
	}
	double fraccion = (double) sumatoria / 20; 
	double result = (double) sqrt(fraccion);
	cout << "[ ";
	for (int c =0; c < 20;c++) {
		cout <<  arreglo [c] << " "; 
		
	}
	cout << "]" <<endl; 
	cout << "La desviacion es: " << result <<endl; 
}

void codigobarra(int arreglo [], int arreglo2 []){
	cout << "Arreglo 1: " <<endl;
	cout << "[ ";  
	for (int c = 0; c < 10;c++){
		cout << arreglo [c]<< " ";
	}
	cout << "]" <<endl;
	cout << "Arreglo 2: " <<endl; 
	cout << "[ ";  
	for (int c = 0; c < 10;c++){
		cout << arreglo2 [c]<< " ";
	}
	cout << "]" <<endl;
	for (int c = 0; c < 10;c++){
		cout << c + 1 << ") ";
		int num1 = arreglo [c];
		int num2 = arreglo2 [c]; 
		for (int j = 0; j < num1;j++){
			int ascii = 177;
			char n = ascii; 
			cout << n << " ";
		}
		cout << endl; 
		cout << "   ";
		if (c + 1 == 10){
			cout << " ";
		}
		for (int j = 0; j < num2;j++){
			int ascii = 178;
			char n = ascii; 
			cout << n << " ";
		}
		cout << endl; 
		cout <<endl; 
	}
}


