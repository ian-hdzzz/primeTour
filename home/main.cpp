#include "../clases/liveTour.cpp"

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



void web(){

    // Maquetamos la web
    ofstream web("main.html");
    web<< "<html><head> <title> Prime Tour </title> <link rel= \"stylesheet\" href=\"main.css\"</head><body>" << endl;
    web << "<style> @import url('https://fonts.googleapis.com/css2?family=Bebas+Neue&display=swap');</style>" << endl;
    web << "<style>@import url('https://fonts.googleapis.com/css2?family=Bebas+Neue&family=Open+Sans:ital,wght@0,300..800;1,300..800&display=swap');</style>" << endl;
    web << "<style> @import url('https://fonts.googleapis.com/css2?family=Anton&family=Fjalla+One&display=swap');</style>" << endl;

    web << "<nav class=\"menu\" >" << endl;

            web << "<div class=\" categorias\">" << endl;
                web << "<h2 href=\"../servicio_streaming.html \" class=\"logo\"> Prime Tour</h2>" << endl;
                
                web << "<div class=\"contenedor-categorias \">" << endl;
                    web << "<a href=\"#\" class=\"active\"> Inicio </a>" << endl;
                    web << "<a href=\"../toursVivo/toursVivo.html\"> Tours en Vivo </a>" << endl;
                    web << "<a href=\"../videosOficiales/videosOficiales.html\"> Videos Oficiales </a>" << endl;
                    web << "<a href=\"#\"id=\"generos\" > Por Género <i class=\"fas fa-caret-down\"></i> </a>" << endl;
        
                web << "</div>" << endl;

            web << "</div>" << endl;

            web << "<div class=\"grid\">" << endl;
                web << "<div class=\"grid-subcategorias \">" << endl;
                    web << "<a href=\"../rock/rock.html\" class=\"active\"> Rock </a>" << endl;
                    web << "<a href=\"../pop/pop.html\" class=\"active\"> Pop </a>" << endl;
                    web << "<a href=\"../reggaeton/reggaeton.html\" class=\"active\"> Reggaeton </a>" << endl;
                web << "</div>" << endl;
            web << "</div>" << endl;
    web << "</nav>" << endl;        

    web << "<div class=\"videoCompleto\"><video controls loop autoplay muted><source src=\"../lib/videos/something.mp4\" type=\"video/mp4\"></video></div>" << endl;
    web << "<div class=\" principal\">" << endl;
    web << "<div class=\"contenedor\">"<< endl;
    
    web << "<video autoplay muted loop id=\"video-fondo\"><source src=\"../lib/videos/coldplay2.mp4\" type=\"video/mp4\"></video><div class=\"oscurecer\"></div>" <<endl;
    web << "<div class=\"content\">" << endl;
    web << "<h3 class=\"titulo\"> Coldplay </h3>" <<endl;
    web << "<p class=\"descripcion\"> Disfruta de los conciertos en vivo más memorables de una de las mejores bandas de la música pop. Tours, shows en vivo, festivales, unplugged. Todo en un mismo lugar! </p>"<<endl;
    web << "<button role=\"button\" class= \"boton\" id=\"reproducir\"> <i class=\"fas fa-play\"></i> Reproducir </button>"<< endl;
    web << "<button role=\"button\" class= \"boton\"> <i class=\"fas fa-info-circle\"></i> Mas información </button>"<< endl;
    web << "</div>" << endl;
    web << "</div>" << endl;
    web << "</div>" << endl;

    web << "<div class=\"artistas-recomendados contenedor\">" <<endl;
        web << "<div class=\"contenedor-titulo-controles\">" <<endl;
            web << "<h3>Artistas Recomendados</h3>" << endl;
            web << "<div class =\"indicadores\"></div>"<<endl;
        web<< "</div>"<< endl;
        
        web << "<div class=\"contenedor-principal\">"<< endl;
            web << "<button role=\"button\" id=\"flecha-izquierda\" class=\"flecha-izquierda\"><i class=\"fas fa-angle-left\"></i></button> "<< endl;
            web << "<div class=\"contenedor-carrusel\">"<< endl;
                web << "<div class=\"carrusel\">"<< endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"./luismi.html\"><img src=\"../lib/img/img9.png\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"./shawn.html\"><img src=\"../lib/img/img2.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"./onedirection.html\"><img src=\"../lib/img/img5.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"charlie.html\"><img src=\"../lib/img/img4.png\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"./danny.html\"><img src=\"../lib/img/danny.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"#\"><img src=\"../lib/img/img1.png\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"#\"><img src=\"../lib/img/img7.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"#\"><img src=\"../lib/img/img8.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "<div class=\"artista\">" << endl;
                    web << "<a href =\"#\"><img src=\"../lib/img/img3.jpeg\" alt =\"\"></a>" << endl;
                web << "</div>" << endl;
                web << "</div>" << endl;
            web << "</div>" << endl;
            web <<"<button role=\"button\" id=\"flecha-derecha\" class=\"flecha-derecha\"><i class=\"fas fa-angle-right\"></i></button> "<< endl;
        web << "</div>" << endl; 
    web << "</div>" << endl;
    web << "<div class=\"finalizar\" id=\"finalizar\">"<< endl;
    web << "<button role=\"button\"> Finalizar </button>"<< endl;
    web << "</div>" << endl;
    web << "<script src=\"../lib/scripts/carrusel.js\"></script>" << endl;
    web << "<script src=\"../lib/scripts/menu.js\"></script>" << endl;
    web<< "<script src=\"https://kit.fontawesome.com/596025b920.js\" crossorigin=\"anonymous\"></script>" << endl;
    
    web<< "</body></html>" <<endl;
    web.close();
}

bool buscarVideo(const vector<string>& videos, const string& nombreVideo){
    for (const auto& video : videos) {
        if (video == nombreVideo) {
            return true;
        }
    }
    return false;
}

int main() {
   
    cout << "\n--------------Iniciando streaming-----------------\n";
    // Codigo para calcular la calificacion promedio de los videos musicales
    cout << "\n------------Bienvenido a PRIME TOUR----------\n" << endl;

    vector<string> videos;
    vector <float> calificaciones;

    CLiveTour *tour1[4][4];
    tour1[0][0] = new CCiudad("#03", "Clocks" , "3min 10s", "Pop", "Coldplay", 5, "Music Of The Spheres World Tour", "05 de Junio del 2022","New York", "Clocks" );
    tour1[0][1] = new CCiudad("#04", "Viva La Vida","2min 15s", "Pop", "Coldplay", 4, "Music Of The Spheres World Tour", "10 de Julio del 2022", "México", "Viva La Vida");
    tour1[0][2] = new CCiudad("#01",  "The Scientist", "4min 20s", "Pop", "Coldplay", 4, "Music Of The Spheres World Tour", "18 de Septiembre del 2022", "Roma", "The Scientist" );
    tour1[0][3] = new CCiudad("#02", "A Sky Full Of Stars" , "3min 30s", "Pop", "Coldplay", 5, "Music Of The Spheres World Tour", "12 de Octubre del 2022", "Paris", "A Sky Full Of Stars" );
    
    tour1[1][0] = new CCiudad("#03",  "Neverita", "3min 10s", "Reggaeton", "Bad Bunny", 4, "Music Of The Spheres World Tour", "02 de Enero del 2023","Los Ángeles", "Neverita" );
    tour1[1][1] = new CCiudad("#04", "Ni bien ni mal", "2min 15s", "Reggaeton", "Bad Bunny", 4, "Music Of The Spheres World Tour", "10 de Febrero del 2022", "Mónaco", "Ni bien ni mal");
    tour1[1][2] = new CCiudad("#01", "Jumpa" , "4min 20s", "Reggaeton", "Bad Bunny", 5, "Music Of The Spheres World Tour", "18 de Julio del 2022", "Miúnich", "Jumpa" );
    tour1[1][3] = new CCiudad("#02",  "Ojitos lindos", "3min 30s", "Reggaeton", "Bad Bunny", 5, "Music Of The Spheres World Tour", "17 de Diciembre del 2022", "Londres", "Ojitos lindos" );

    tour1[2][0] = new CCiudad("#03", "Patience" , "3min 10s", "Rock", "Guns N' Roses", 4, "Music Of The Spheres World Tour", "02 de Abril del 1980","Japón", "Patience" );
    tour1[2][1] = new CCiudad("#04", "Paradise City", "2min 15s", "Rock", "Guns N' Roses", 5, "Music Of The Spheres World Tour", "10 de Mayo del 1980", "Chicago", "Paradise City");
    tour1[2][2] = new CCiudad("#01", "Welcome to the Jungle", "4min 20s", "Rock", "Guns N' Roses", 5, "Music Of The Spheres World Tour", "28 de Septiembre del 1980", "San Diego", "Welcome to the Jungle" );
    tour1[2][3] = new CCiudad("#02", "November Rain", "3min 30s", "Rock", "Guns N' Roses", 5, "Music Of The Spheres World Tour", "30 de Noviembre del 1980", "Brazil", "November Rain" );

    tour1[3][0] = new CCiudad("#03", "Dangerous", "3min 10s", "Pop", "Michael Jackson", 5, "Music Of The Spheres World Tour", "05 de Abril del 1995","Washington", "Dangerous" );
    tour1[3][1] = new CCiudad("#04", "Beat It", "2min 15s", "Pop", "Michael Jackson", 5, "Music Of The Spheres World Tour", "10 de Agosto del 1995", "Los Ángeles", "Beat It");
    tour1[3][2] = new CCiudad("#01", "Bille Jean", "4min 20s", "Pop", "Michael Jackson", 5, "Music Of The Spheres World Tour", "01 de Noviembre del 1995", "Venecia", "Bille Jean" );
    tour1[3][3] = new CCiudad("#02", "Smooth Criminal" , "3min 30s", "Pop", "Michael Jackson", 5, "Music Of The Spheres World Tour", "18 de Octubre del 1995", "Paris", "Smooth Criminal" );
   
    for(int i = 0;i<4 ;i++){
        for(int j = 0;j<4 ;j++){
            videos.push_back(tour1[i][j] -> nombre);
        }
     }

    bool existe = true;
    
    while(existe){
        string nombreVideo;
        float calificacion;
        float calificacionCliente;

        cout << "Ingrese el nombre del video que desea calificar: ";
        cin >> nombreVideo;
        for(int i = 0;i<4 ;i++){
            for(int j = 0;j<4 ;j++){
                if(tour1[i][j] -> nombre == nombreVideo){
                    calificacion = tour1[i][j] -> califPromedio;
                }
            }
        } 
       
        existe = buscarVideo(videos, nombreVideo);
        if(!existe){
            cout << "Ese video no existe, por favor ingrese otro titulo" << endl;
            break;
        }
        int contador = 1;
        float calificacionNueva;
        try{
            cout << "Ingrese una calificación para el video: ";
            cin >> calificacionCliente;
            if(calificacionNueva >= 1 || calificacionNueva<=5){
                calificacionNueva = calificacion + calificacionCliente;
                contador +=1;
                float promedio = calificacionNueva/contador;
                cout << "Calificacion anterior: " << calificacion << " estrellas" << endl;
                cout << "Calificacion actual: "<< setprecision(2) << promedio << " estrellas" << endl;
                
            }else{
                cout << "Ingresa un valor numerico de 1 a 5 " << endl;
            }
        }catch(exception &e){
            cout << e.what();
        }
        char continuar;
        cout << "¿Desea calificar otro video? (s/n): ";
        cin >> continuar;
        if(continuar == 's' || continuar == 'S'){
            existe =true;
        }else{
             cout << "Gracias por visitar PRIME TOUR" << endl;
            break;
        }
    }
  web();
}
// 1. Tener clases con relaciones de herencia
// 2. Tener un arreglo de apuntadores de clases
// 3. Al menos debe existir un metodo virtual en el padre
//4. Necesitan cohercionar los elementos del arreglo, instanciando objeectos de cada clase.

//el polimorfismo se puede ver de dos formas: en tiempo de compilacion (polimorfismo de funciones y parametricoco u operadores) y en tiempo de ejecucion (polimorfismo de inclusión).