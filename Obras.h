#include <string>

#pragma once

using namespace std;

class Obras{
	protected:
		string id;
                string nombre;
                string artista;
                string fecha;

	public:
		Obras();
		Obras(string, string, string, string);
		string getNombre();
		string getID();
		string getArtista();
		string getFecha();
};
 
