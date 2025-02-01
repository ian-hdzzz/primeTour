#include "sobrecargaOperadores.h"


CSobrecarga::CSobrecarga(){
    x = 0;
}
CSobrecarga::CSobrecarga(int _x){
    x = _x;
}
CSobrecarga CSobrecarga::operator+ (const CSobrecarga& r){
    CSobrecarga temp(x +r.x);
    return temp;
}
