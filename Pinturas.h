#include <string>
#ifndef PINTURAS_H
#define PINTURAS_H
#include "Obras.h"

using namespace std;

class Pinturas : public Obras{
	public:
		string material_lienzo;
		string tecnica;

		Pinturas();
		Pinturas(string, string, string, string, string, string);
};
#endif
