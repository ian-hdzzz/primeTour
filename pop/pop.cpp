#include "../clases/videos.cpp"
#include <sstream>
#include <fstream>



int main(){
    CVideo *video[4];
    video[0] = new CVideo("#03", "Señorita", "3min 15s", "Pop", "Shawn Mendes", 4);
    video[1] = new CVideo("#01", "Thinking Out Loud", "3min 10s", "Pop", " Ed Sheeran", 5 );
    video[2] = new CVideo("#03", "How Long", "2min 59s", "Pop", "Charlie Puth", 3);
    video[3] = new CVideo("#02", "Uptown Funk", "3min 40s", "Pop", "Bruno Mars", 5 );
    

    cout << "\n-------------- STREAMING POP --------------" << endl;
    
    ofstream web("pop.html");
    
    web<< "<html><head> <title> Prime Tour </title> <link rel= \"stylesheet\" href=\"pop.css\"</head><body>" << endl;
    web << "<style> @import url('https://fonts.googleapis.com/css2?family=Bebas+Neue&display=swap');</style>" << endl;
    web << "<style>@import url('https://fonts.googleapis.com/css2?family=Bebas+Neue&family=Open+Sans:ital,wght@0,300..800;1,300..800&display=swap');</style>" << endl;
    web << "<style> @import url('https://fonts.googleapis.com/css2?family=Anton&family=Fjalla+One&display=swap');</style>" << endl;
    
     web << "<nav class=\"menu\">" << endl;

            web << "<div class=\" categorias\">" << endl;
                web << "<h2 href=\"../main.html \" class=\"logo\"> Prime Tour</h2>" << endl;
                
                web << "<div class=\"contenedor-categorias \">" << endl;
                    web << "<a href=\"../home/main.html\"> Inicio </a>" << endl;
                    web << "<a href=\"../toursVivo/toursVivo.html\"> Tours en Vivo </a>" << endl;
                    web << "<a href=\"../videosOficiales/videosOficiales.html\"> Videos Oficiales </a>" << endl;
                    web << "<a href=\"#\"id=\"generos\" class=\"active\"> Por Género <i class=\"fas fa-caret-down\"></i> </a>" << endl;
        
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
    
    web << "<div class = \"contenedor-principal\"> "<< endl; 
    web << "<h3 class=\"titulo\"> MÚSICA POP </h3>" <<endl;
    string toursVivo [] = {"V13.png", "V14.png", "V15.png", "V16.png"};

        for(int i = 0;i<4 ;i++){
            //funciones polimorficas
            web << "<div class=\"target\">" << endl;
            
                string cover = "../lib/img/targets/" + toursVivo[i];
                web << "<div class=\"cover\"> <h3 class=\"titulo\"> "<< video[i] -> artista << "</h3> <a href =\"#\"><img src=\"" << cover << "\" alt =\"\"></a></div>"<< endl;
                web << "<div class=\"info\">" << video[i] -> info()<< endl;
                web << "</div>" << endl;
            web << "</div>" << endl;
        } 
    web << "</div>" << endl; 

    web << "<script src=\"../lib/scripts/menu.js\"></script>" << endl;
    web<< "<script src=\"https://kit.fontawesome.com/596025b920.js\" crossorigin=\"anonymous\"></script>" << endl;
    web<< "</body></html>" <<endl;
    web.close();
    
}

//En las primeras dos funciones polimorficas se esta reescribiendo la funcion con el mismo nombre 
//con cada iteracion del bucle for, ya que estamos coercionando una clase diferente (las derivadas) 
//y cada una le estamos pasando datos diferentes, de modo que no tenmos que crear una funcion especifica para cada 
//clase. Por otro lado, la función no polimorfica, no se reescribe, se mantiene igual en cada iteracion 
//del bucle for, lo unico que cambiamos es el valor de la variable titulo que cambia en cada iteración del ciclo
//pero en sí la función se mantiene igual y no se sobreescribe.