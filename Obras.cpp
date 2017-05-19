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

string Obras::getNombre(){
	return nombre;
}

string Obras::getID(){
	return id;
}

string Obras::getArtista(){
	return artista;
}

string Obras::getFecha(){
	return fecha;
}
