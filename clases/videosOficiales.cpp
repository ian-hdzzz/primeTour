#include "videosOficial.h"


CVideoOficial::CVideoOficial(){
    album = "";
    formato = "";
}

CVideoOficial::CVideoOficial(string _id, string _nombre, string _duracion, string _genero, string _artista, int _califPromedio, string _album, string _formato) : CVideo(_id, _nombre, _duracion, _genero, _artista,_califPromedio){
    album = _album;
    formato = _formato;
}

string CVideoOficial::reproducir(){
    return "<h2>Reproduciendo...</h2> Video Oficial de " + artista +  " del album " + album + ", formato " + formato;
}
string CVideoOficial::info(){
   return "<h2>Titulo:</h2> " + nombre +  " <h2>Genero:</h2> " +  genero + " <h2>Album:</h2> " + album + "<h2> Formato: </h2>" + formato + " <h2>Duracion:</h2> " + duracion + " <h2>Calificacion:</h2> " + to_string(califPromedio) + " estrellas";
}

