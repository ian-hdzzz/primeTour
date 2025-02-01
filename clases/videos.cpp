#include "videos.h"

CVideo::CVideo(){
    id = "";
    nombre = "";
    duracion = "";
    genero = "";
    artista = "";
    califPromedio = 0;
}
CVideo::CVideo(string _id, string _nombre, string _duracion, string _genero, string _artista, int _califPromedio){
    id = _id;
    nombre = _nombre;
    duracion = _duracion;
    genero = _genero;
    artista = _artista;
    califPromedio = _califPromedio;
}

string CVideo::reproducir(){
    
    return "\n<h2>Reproduciendo...</h2> video " + nombre + " de " + artista + " del genero: " + genero;
}

string CVideo::info(){
     return " <h2>Titulo:</h2> " + nombre  + " <h2>Artista:</h2> " + artista + " <h2>Género:</h2> " +  genero + " <h2>Duración:</h2> " + duracion +" <h2>Calificación:</h2> " +to_string(califPromedio);
}
