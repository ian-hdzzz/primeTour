#pragma once
#include "iostream"
using namespace std;
#include <sstream>
#include <fstream>
#include <string>
#include "videos.cpp"
#include "videos.h"

class CLiveTour : public CVideo{
    protected:
        string tour;
        string fecha;

    public:
        string reproducir();
        string info();
        
        CLiveTour();
        CLiveTour(string id, string nombre, string duracion, string genero, string artista, int califPromedio, string tour, string fecha);

};

class CCiudad : public CLiveTour{
    public:
        string ciudad;
        string cancion;
        
        string info();
        CCiudad();
        CCiudad(string id, string nombre, string duracion, string genero, string artista, int califPromedio, string tour, string fecha, string ciudad, string cancion);
        string getCancion(){
            return cancion;
        }
};