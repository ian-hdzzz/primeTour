#pragma once
#include "iostream"
using namespace std;
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>


class CSobrecarga{

    public:
        int x;
        CSobrecarga();
        CSobrecarga(int x);
        // Sobrecarga del operador + para agregar calificaciones
        CSobrecarga operator+(const CSobrecarga& r);

};