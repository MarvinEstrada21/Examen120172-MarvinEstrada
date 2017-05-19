#include "Esculturas.h"
#include <string>
#include "Obras.h"

using namespace std;

Esculturas::Esculturas(){

}

Esculturas::Esculturas(string peso, string material, string id, string nombre, string artista, string fecha){
	this -> peso = peso;
	this -> material = material;
	this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fecha = fecha;
}
