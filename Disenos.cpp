#include "Disenos.h"
#include <string>
#include "Obras.h"

using namespace std;

Disenos::Disenos(){

}

Disenos::Disenos(string terreno, string id, string nombre, string artista, string fecha){
	this -> terreno = terreno;
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fecha = fecha;
}
