#include <string>
#ifndef DISENOS_H
#define DISENOS_H
#include "Obras.h"

using namespace std;

class Disenos : public Obras{
	public:
		string terreno;

		Disenos();
		Disenos(string, string, string, string, string);
};
#endif
