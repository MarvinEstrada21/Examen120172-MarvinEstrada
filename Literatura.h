#include <string>
#include "Obras.h"
#pragma once

using namespace std;

class Literatura : public Obras {
	public:
		string genero;
		string epoca;

		Literatura();
		Literatura(string, string, string, string, string, string);
};
