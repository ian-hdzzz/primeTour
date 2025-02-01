#pragma once
#include "iostream"
using namespace std;
#include <sstream>
#include <fstream>
#include <string>
#include "videos.cpp"
#include "videos.h"

class CVideoOficial : public CVideo{
    private:
        string album;
        string formato;
    public:
       string reproducir();
       string info();
        
        CVideoOficial();
        CVideoOficial(string id, string nombre, string duracion, string genero, string artista, int califPromedio, string album, string formato);

}; 

