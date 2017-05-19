Main:	Main.o Obras.o Literatura.o Esculturas.o Pinturas.o Disenos.o
	g++ Main.o Obras.o Literatura.o Esculturas.o Pinturas.o Disenos.o -o Main
Main.o:	Main.cpp Obras.h Literatura.h Esculturas.h Pinturas.h Disenos.h
	g++ -c Main.cpp
Obras.o:	Obras.h Obras.cpp
	g++ -c Obras.cpp
Literatura.o:	Obras.h Literatura.cpp Literatura.h
	g++ -c Literatura.cpp
Esculturas.o:	Obras.h Esculturas.cpp Esculturas.h 
	g++ -c Esculturas.cpp
Pinturas.o:	Obras.h Pinturas.cpp Pinturas.h
	g++ -c Pinturas.cpp
Disenos.o:	Obras.h Disenos.cpp Disenos.h
	g++ -c Disenos.cpp
