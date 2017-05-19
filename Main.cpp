#include <iostream>
#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Pinturas.h"
#include "Disenos.h"
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int menu();
int menu2();
void Reportes(vector<Obras>);
string IDAleatorio();

int main(){
	vector<Obras> olist;
	vector<Obras> transferred;
	string nombre, artista, fecha;
	bool salir = false;
	while (!salir){
                switch(menu()){
                        case 1:{
				switch(menu2()){
					case 1:{//Literatura
						string genero, epoca, id = IDAleatorio();
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
						string peso, material, id = IDAleatorio();
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
						string material_lienzo, tecnica, id = IDAleatorio();
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
						string terreno, id = IDAleatorio();
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
				int numero;
				cout << "Ingrese la posición que desea eliminar: " << endl;
				for (int i = 0; i < olist.size(); i++){
					cout << i << " >>> " << olist[i].getNombre() << endl;
				}
				cin >> numero;
				olist.erase(olist.begin() + numero);
				cout << "Obra eliminada exitosamente";
				break;
			};
			
			case 3:{//Transferir Obras
				int numero;
				cout << "Ingrese la posición que desea transferir: " << endl;
				for (int i = 0; i < olist.size(); i++){
					cout << i << " >>> " << olist[i].getNombre() << endl;
				}
				cin >> numero;
				transferred.push_back(olist[numero]);
				olist.erase(olist.begin() + numero);
				cout << "Obra transferida exitosamente";
				break;
			};

			case 4:{//Reportes
				Reportes(olist);
				break;
			};

			case 5:{//Búsqueda
				cout << "Ingrese el autor/artista que desea buscar: " << endl;
				string artista;
				cin >> artista;
				for (int i = 0; i < olist.size(); ++i){
					cout << "Obras del museo: " << endl;
					if (olist.at(i).getArtista() == artista){
						cout << "Nombre: " << olist.at(i).getNombre() << endl;
					}
					cout << endl;
				}
				cout << endl;
				break;
			};

			case 6:{//Salir
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
                cout << "     MENU" << endl
                << "1.- Agregar Obra" << endl
		<< "2.- Eliminar Obra" << endl
		<< "3.- Transferir Obra" << endl
		<< "4.- Reportes" << endl
		<< "5.- Búsqueda" << endl
                << "6.- Salir" <<  endl;

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

void Reportes(vector<Obras> listaob) {
	for (int i = 0; i < listaob.size(); i++){
		cout << endl<<"Numero de obra: " << (i) << endl;
		cout << endl<<"Nombre: " << listaob.at(i).getNombre() << endl;
		cout << endl<<"ID de la obra: "<<listaob.at(i).getID() << endl;
		cout << endl<<"Artista: "<<listaob.at(i).getArtista() << endl;
		cout << endl<<"Fecha de ingreso: "<<listaob.at(i).getFecha() << endl;
        }
}

string IDAleatorio() {
	int random;
	stringstream aleat;
	string aleat2;
	for (int i = 0; i < 6; ++i){
		random = rand() % 15 + 0;
		if (random == 10){
			aleat << "A";
		} else if (random == 11){
			aleat << "B";
		} else if (random == 12){
			aleat << "C";
		} else if (random == 13){
			aleat << "D";
		} else if (random == 14){
			aleat << "E";
		} else if (random == 15){
			aleat << "F";
		} else {
			aleat << random;
		}
	}
	aleat2 = aleat.str();
	return aleat2;
}
