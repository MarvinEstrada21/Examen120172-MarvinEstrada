#include <iostream>
#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Pinturas.h"
#include "Disenos.h"
#include <string>
#include <vector>

using namespace std;

int menu();
int menu2();

int main(){
	vector<Obras> olist;
	vector<Obras> transferred;
	string id, nombre, artista, fecha;
	bool salir = false;
	while (!salir){
                switch(menu()){
                        case 1:{
				switch(menu2()){
					case 1:{//Literatura
						string genero, epoca;
						cout << "Ingrese el género literario: " << endl;
						cin >> genero;
						cout << "Ingrese la época: " << endl;
						cin >> epoca;
						cout << "Ingrese el nombre: " << endl;
						cin >> nombre;
						cout << "Ingrese el artista: " << endl;
						cin >> artista;
						cout << "Ingrese la fecha de ingreso: " << endl;
						cin >> fecha;
						Literatura literatura(genero, epoca, id, nombre, artista, fecha);
						olist.push_back(literatura);
						break;
					};

					case 2:{//Esculturas
						string peso, material;
						cout << "Ingrese el peso: " << endl;
						cin >> peso;
						cout << "Ingrese el material con el que está hecho: " << endl;
						cin >> material;
						cout << "Ingrese el nombre: " << endl;
						cin >> nombre;
						cout << "Ingrese el artista: " << endl;
						cin >> artista;
						cout << "Ingrese la fecha de ingreso: " << endl;
						cin >> fecha;
						Esculturas esculturas(peso, material, id, nombre, artista, fecha);
						olist.push_back(esculturas);
						break;
					};

					case 3:{//Pinturas
						string material_lienzo, tecnica;
						cout << "Ingrese el material del lienzo: " << endl;
						cin >> material_lienzo;
						cout << "Ingrese la técnica que se utilizó: " << endl;
						cin >> tecnica;
						cout << "Ingrese el nombre: " << endl;
						cin >> nombre;
						cout << "Ingrese el artista: " << endl;
						cin >> artista;
						cout << "Ingrese la fecha de ingreso: " << endl;
						cin >> fecha;
						Pinturas pinturas(material_lienzo, tecnica, id, nombre, artista, fecha);
						olist.push_back(pinturas);
						break;
					};

					case 4:{//Diseños
						string terreno;
						cout << "Ingrese el terreno en donde está diseñada: " << endl;
						cin >> terreno;
						cout << "Ingrese el nombre: " << endl;
						cin >> nombre;
						cout << "Ingrese el artista: " << endl;
						cin >> artista;
						cout << "Ingrese la fecha de ingreso: " << endl;
						cin >> fecha;
						Disenos disenos(terreno, id, nombre, artista, fecha);
						olist.push_back(disenos);
						break;
					};
				}//Fin switch
				break;
			};
			
			case 2:{//Eliminar
			
				break;
			};
			
			case 3:{//Transferir Obras
			
				break;
			};

			case 4:{//Reportes
			
				break;
			};

			case 5:{
                                salir = true;
                                break;
			};
		}//Fin switch
	}//Fin while
	return 0;
}

int menu(){
        int opcion;
        bool valido = true;
        do{
                cout << "  MENU" << endl
                << "1.- Agregar Obra" << endl
		<< "2.- Eliminar Obra" << endl
		<< "3.- Transferir Obra" << endl
		<< "4.- Reportes" << endl
                << "5.- Salir" <<  endl;

                cout << "Ingrese una opción: ";
                cin >> opcion;

                if (opcion > 0 && opcion < 6)
                        valido = true;
                else {
                        cout << "Opción no válida, intente de nuevo ..." << endl;
                }
        }while(!valido);
        return opcion;
}

int menu2(){
        int opcion;
        bool valido = true;
        do{
                cout << "  AGREGAR OBRAS" << endl
                << "1.- Literatura" << endl
                << "2.- Esculturas" << endl
                << "3.- Pinturas" << endl
                << "4.- Diseños Arquitectónicos" << endl;

                cout << "Ingrese una opción: ";
                cin >> opcion;

                if (opcion > 0 && opcion < 5)
                        valido = true;
                else {
                        cout << "Opción no válida, intente de nuevo ..." << endl;
                }
        }while(!valido);
        return opcion;
}

