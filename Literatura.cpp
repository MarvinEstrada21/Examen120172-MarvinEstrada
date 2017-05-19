#include "Literatura.h"
#include <string>

using namespace std;

Literatura::Literatura(){

}

Literatura::Literatura(string genero, string epoca, string id, string nombre, string artista, string fecha) : Obras(id, nombre, artista, fecha){
	this -> genero = genero;
	this -> epoca = epoca;
	/*this -> id = id;
	this -> nombre = nombre;
	this -> artista = artista;
	this -> fecha = fecha;*/
}
