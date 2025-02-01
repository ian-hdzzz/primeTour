#include "liveTour.h"

CLiveTour::CLiveTour (){
    tour = "";
    fecha = "";   
}

CLiveTour::CLiveTour (string _id, string _nombre, string _duracion, string _genero, string _artista, int _califPromedio, string _tour, string _fecha) : CVideo(_id, _nombre, _duracion, _genero, _artista, _califPromedio){
    tour = _tour;
    fecha = _fecha;   
}

string CLiveTour::reproducir(){
        return "<h2>Reproduciendo...</h2> Tour " + tour + " del artista " + artista + " el día " + fecha;

}
string CLiveTour::info(){
        return " <h2>Tour:</h2> " + tour  + " <h2>Genero:</h2> " +  genero + " <h2>Fecha:</h2> " + fecha +"<h2>Duracion:</h2> " + duracion +"<h2>Calificación:</h2> " + to_string(califPromedio) + " estrellas";
}
CCiudad::CCiudad (){
    ciudad ="";
    cancion = "";
}
CCiudad::CCiudad (string _id, string _nombre, string _duracion, string _genero, string _artista, int _califPromedio, string _tour, string _fecha, string _ciudad, string _cancion) : CLiveTour(_id, _nombre, _duracion, _genero, _artista,  _califPromedio, _tour, _fecha){
    ciudad = _ciudad;
    cancion =  _cancion;
}

string CCiudad::info(){
     return  "<li><b>Canción: </b>" +  cancion+"" +  "  <b>Ciudad: </b>" +  ciudad  +"   <b>Calificacion: </b>" + to_string(califPromedio) + " estrellas <button role=\"button\" href= \"../home/coldplay2.html\" class=\"boton\"><i class=\"fas fa-play\"></i><p>Reproducir</p></button></li>\n";
}