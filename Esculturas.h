#include <string>
#ifndef ESCULTURAS_H
#define ESCULTURAS_H
#include "Obras.h"

using namespace std;

class Esculturas : public Obras{
	public:
		string peso;
		string material;

		Esculturas();
		Esculturas(string, string, string, string, string, string);
};
#endif
