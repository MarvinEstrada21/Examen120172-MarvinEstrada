#include "Obras.h"
#include <string>

using namespace std;

Obras::Obras(){

}

Obras::Obras(string id, string nombre, string artista, string fecha){
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fecha = fecha;
}
