all: donante.exe

CPPFLAGS =  -c -g -Wall -ansi
OBJECTS = pruebaDonante.o donante.o

donante.exe: pruebaDonante.o donante.o
	g++ -o donante.exe $(OBJECTS)

pruebaDonante.o: pruebaDonante.cpp donante.hpp donanteInterfaz.hpp
	g++  $(CPPFLAGS) pruebaDonante.cpp

donante.o: donante.cpp donante.hpp donanteInterfaz.hpp
	g++  $(CPPFLAGS) donante.cpp

clean:
	rm -f $(OBJECTS) 
