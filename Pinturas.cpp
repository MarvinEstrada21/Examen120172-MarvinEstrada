#include "Pinturas.h"
#include <string>
#include "Obras.h"

using namespace std;

Pinturas::Pinturas(){

}

Pinturas::Pinturas(string material_lienzo, string tecnica, string id, string nombre, string artista, string fecha){
	this -> material_lienzo = material_lienzo;
	this -> tecnica = tecnica;
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fecha = fecha;
}
