#pragma once
#include "iostream"
using namespace std;
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>

class CConfiguraciones {
    virtual string reproducir() =0;
    virtual string info() = 0;
};


class CVideo : public CConfiguraciones{
    protected:
        string id;
    public:
        string nombre;
        string duracion; 
        string genero;
        string artista;
        int califPromedio;
        
        //Constructor
        CVideo();
        CVideo(string id, string nombre, string duracion, string genero, string artista, int califPromedio);
        
        //Métodos     
        string reproducir();
        string info();
    
};


