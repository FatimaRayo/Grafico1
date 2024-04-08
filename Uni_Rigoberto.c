#include<graphics.h>
#include<conio.h>


int main()
{

    int driver=VGA,modo=VGAHI;

    /*columna azul izquierda*/

    int azul_frente[] = {225,48,261,18,270,24,270,427,238,427,225,425,123,406,123,396,225,399};
    int pimer_espacio_ventanasuperior[] = {238,65,261,49,269,54,269,65};
    int pimer_espacio_ventanainferior[] = {238,65,269,65,269,92,261,88,238,103};
    int segundo_espacio_ventanasuperior[] = {238,133,261,120,269,124,269,133};
    int segundo_espacio_ventanainferior[] = {238,133,269,133,269,167,261,163,238,174};
    int tercer_espacio_ventanasuperior[] = {238,206,261,196,269,199,269,206};
    int tercer_espacio_ventanainferior[] = {238,206,269,206,269,242,261,240,238,248};
    int cuarto_espacio_ventanasuperior[] = {238,280,261,273,269,276,269,280};
    int cuarto_espacio_ventanainferior[] = {238,280,269,280,269,319,261,319,238,322};
    int espacio_puerta[] = {238,354,261,352,269,352,269,427,238,427};


    int azuldere[] = {369,24,378,18,414,48,414,399,515,396,515,406,414,425,401,427,369,427};
    int pimer_espacio_superior[] = {401,65,378,49,370,54,370,65};
    int pimer_espacio_inferior[] = {401,65,370,65,370,92,378,88,401,103};
    int segundo_espacio_superior[] = {401,133,378,120,370,124,370,133};
    int segundo_espacio_inferior[] = {401,133,370,133,370,167,378,163,401,174};
    int tercer_espacio_superior[] = {401,206,378,196,370,199,370,206};
    int tercer_espacio_inferior[] = {401,206,370,206,370,242,378,240,401,248};
    int cuarto_espacio_superior[] = {401,280,378,273,370,276,370,280};
    int cuarto_espacio_inferior[] = {401,280,370,280,370,319,378,319,401,322};
    int espacio_puer[] = {401,354,378,352,370,352,370,427,401,427};

    /*Izquierda*/

    int pillar1[] = {11, 138, 5, 406, 123, 406, 123, 130, 107, 123, 107, 93, 56, 72, 29, 115, 11, 138};
    int manchapilar1[] = {25,406,30,113,39,99,80,113,76,406,67,406,70,141,42,132,37,406};



    /*Derecha*/

    int pillar2[] = {610, 115, 628, 138,583, 72,533, 93,533, 123,515, 129, 515, 406,610,406,635, 406,628, 138};
    int manchapilar2[]={569,141,597,133,602,406,610,406,610,115,599,98,561,112,562,406,573,406};


    /*parte de enmedio*/

    int cupula_edificio_azul[]={269,124,270,156,293,163,298,162,293,136};
    int cupula_edificio_gris[]={293,136,298,162,320,156,342,162,346,136,320,111};
    int cupula_edificio_dere[]={370,124,369,156,346,163,342,162,346,136};

    int rectangulomedio[]={298,156,342,155,342,401,298,401};

    int perlin1[]={269,196,303,196,320,193,335,196,370,196,370,206,332,205,330,211,320,207,310,211,307,205,269,206};
    int perlin1poli[]={303,196,320,193,335,196,330,211,320,207,310,211,};
    int perlin1_rellenobajo[]={269,206,307,205,310,211,269,216};
    int perlin1_rellenoba[]={370,206,332,205,330,211,370,216};
    int perlin2[]={269,242,292,248,320,245,348,248,370,242,370,272,320,263,269,272};
    int perlin3[]={269,296,292,299,320,298,348,299,370,296,370,319,320,316,269,319};
    int perlin4[]={269,342,320,348,370,342,370,371,320,369,269,371};
    int perlin5[]={269,399,370,399,370,425,269,425};


    /*paredes grises con ventanas*/
    /*izquierda*/
    int unionpard[]={123,130,123,396,225,399,225,48};
    int espaciogris1[]={123,149,225,72,225,84,123,158};
    int espaciogris2[]={123,200,225,139,225,153,123,211};
    int espaciogris3[]={123,253,225,209,225,223,123,265};
    int espaciogris4[]={123,307,225,281,225,295,123,318};
    int espaciogris5[]={123,362,225,354,225,368,123,373};

    int espacioazul1[]={123,179,216,118,216,131,123,189};
    int espacioazul2[]={123,231,216,185,216,199,123,242};
    int espacioazul3[]={123,287,216,257,216,270,123,297};
    int espacioazul4[]={123,342,216,328,216,341,123,353};


    int espacionegro1[]={123,158,216,90,216,118,123,179,};
    int espacionegro2[]={123,211,216,158,216,185,123,231};
    int espacionegro3[]={123,265,216,227,216,257,123,287};
    int espacionegro4[]={123,318,216,297,216,328,123,342};
    int espacionegro5[]={123,373,216,368,216,396,123,394};


    /*derecha*/
    int unionparedes[]={414,48,515,129,515,396,414,399};

    int espagris1[]={515,149,414,72,414,84,515,158};
    int espagris2[]={515,200,414,139,414,153,515,211};
    int espagris3[]={515,253,414,209,414,223,515,265};
    int espagris4[]={515,307,414,281,414,295,515,318};
    int espagris5[]={515,362,414,354,414,368,515,373};

    int espaazul1[]={515,179,423,118,423,131,515,189};
    int espaazul2[]={515,231,423,185,423,199,515,242};
    int espaazul3[]={515,287,423,257,423,270,515,297};
    int espaazul4[]={515,342,423,328,423,341,515,353};


    int espanegro1[]={515,158,423,90,423,118,515,179,};
    int espanegro2[]={515,211,423,158,423,185,515,231};
    int espanegro3[]={515,265,423,227,423,257,515,287};
    int espanegro4[]={515,318,423,297,423,328,515,342};
    int espanegro5[]={515,373,423,368,423,396,515,394};


    /*UNI*/

    int uni[]={300,427,300,456,315,456,315,440,325,440,325,462,328,462,328,435,312,435,312,453,302,453,302,427};
    int uni2[]={338,427,338,456,340,456,340,440,350,440,350,434,340,434,340,427};


    /*Paisaje*/
    int grama1[]= {588,479,463,434,463,434,462,460,462,460,496,479};
    int grama2[]= {150,480,183,461,183,461,182,437,182,437,67,479};
    /*cielo*/
    int cielo[]={1,1,1,156,1,156,57,74,57,74,109,93,109,93,110,125,110,125,125,129,125,129,262,21,262,21,273,25,273,25,273,127,273,127,296,136,296,136,322,113,322,113,347,137,347,137,367,127,367,127,367,30,367,30,378,22,378,22,516,130,516,130,533,124,533,124,533,94,533,94,584,73,584,73,640,156,640,156,640,0,640,0,1,1};
    int suelo[]={1,479,1,408,1,408,131,409,131,409,224,427,224,427,415,425,415,425,515,406,515,406,639,407,639,407,639,479,639,479,1,479};

   int centro_x = 79;
    int centro_y = 23;
    int radio = 10;
    /*NUBE 2*/
       int centro_x1 = 310;
    int centro_y1= 62;

    /*NUBE3*/
      int centro_x3 = 514;
    int centro_y3 = 46;
    /*NUBE4*/
      int centro_x4 = 154;
    int centro_y4 = 66;
    int radio4 = 10;
    /*NUBE5*/
     int centro_x5 = 423;
    int centro_y5= 24;
    int radio5 = 10;

    /*Coordenadas del centro del circulo de la rotonda*/

    int xr = 320;  /*Coordenada x del centro*/
    int yr = 478; /*Coordenada y del centro*/
    int radiusr = 50;
    int start_angler = 180; /*Angulo inicial*/
    int end_angler = 0;     /*Angulo final*/
    int j;
    int i;
       
   int ip;
   int jp;
    int radius_small = radiusr * 0.6;  

 int palmera[]={563,453, 574, 448, 574,448, 573,405, 578,403, 586,447,586,447,599,453,599,453, 563,453};
int hojas[]={575,403,557,424,557,424,570,396,570,396,540,401,540,401,570,392,570,392,545,377,545,377,577,389,577,389,609,380,609,380,586,393,586,393,612,409,612,409,586,399,586,399,596,424,596,424,575,403};

int palmera2[]={97,451,104,448,104,448,104,417,104,417,107,416,107,416,113,448,113,448,122,452,122,452,97,451};
int hojas2[]={106,414,93,430,93,430,101,412,101,412,81,414,81,414,102,408,102,408,85,398,85,398,107,406,107,406,128,400,128,400,113,408,113,408,131,420,131,420,113,414,113,414,120,431,120,431,106,414};

int camino2[]= {411,475,362,423,362,423,396,423, 474,480};
 int camino1[]={159,476,224,426,224,426,268,425,268,425,222,476};

int lampara[]={12,458,12,220,12,220,16,220,16,220,16,235,16,235,30,225,30,225,37,225,37,225,31,231,31,231,30,229,30,229,17,239,17,239,18,458};
int lampara2[]={597,470,595,317,595,317,581,317,581,317,574,317,574,317,580,315,580,315,594,315,594,315,600,470,600,470,597,460};

  

    initgraph(&driver,&modo,"C:\\TC20\\BIN");

    /* Contorno de pilar superior izquierdo */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(9, pillar1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(9,manchapilar1);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,unionpard);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris2);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris3);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris4);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris5);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul1);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul2);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul3);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul4);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro1);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro2);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro3);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro4);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro5);

    line(431,96,431,396);




    /* Contorno de pilar superior derecho */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(10, pillar2);
    line(583,72,610,115);
    line(583,72,628,138);
    line(610,115,628,138);


	setfillstyle(SOLID_FILL,8);
    fillpoly(9,manchapilar2);




    setfillstyle(SOLID_FILL,7);
    fillpoly(4,unionparedes);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris2);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris3);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris4);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris5);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul1);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul2);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul3);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul4);


    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro1);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro2);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro3);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro4);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro5);



    /*en medio*/

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,rectangulomedio);

    setfillstyle(SOLID_FILL,BLUE);
    fillpoly(5,cupula_edificio_azul);

    setfillstyle(SOLID_FILL,7);
    fillpoly(6,cupula_edificio_gris);

    setfillstyle(SOLID_FILL,BLUE);
    fillpoly(5,cupula_edificio_dere);

    /*perlin*/
    setcolor(BLUE);
    line(281,160,281,399);
    line(292,163,292,399);

    line(357,160,357,399);
    line(348,163,348,399);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,14);
    fillpoly(12,perlin1);

    setfillstyle(SOLID_FILL,7);
    fillpoly(6,perlin1poli);

    setfillstyle(SOLID_FILL,14);
    fillpoly(4,perlin1_rellenobajo);

    setfillstyle(SOLID_FILL,14);
    fillpoly(4,perlin1_rellenoba);

    line(269,216,370,216);

    setfillstyle(SOLID_FILL,14);
    fillpoly(8,perlin2);

    line(269,272,370,272);

    setfillstyle(SOLID_FILL,14);
    fillpoly(8,perlin3);
    line(269,319,370,319);

    setfillstyle(SOLID_FILL,14);
    fillpoly(6,perlin4);
    line(269,371,370,371);


    setfillstyle(SOLID_FILL,7);
    fillpoly(4,perlin5);


    /*pared azul frente*/

    setfillstyle(SOLID_FILL,1);
    fillpoly(9,azul_frente);

    setfillstyle(SOLID_FILL,1);
    fillpoly(9,azuldere);

    line(261,18,261,49);
    line(261,120,261,88);
    line(261,163,261,196);
    line(261,240,261,273);
    line(261,319,261,352);

    line(378,18,378,48);
    line(378,120,378,88);
    line(378,163,378,196);
    line(378,240,378,273);
    line(378,319,378,352);


    setfillstyle(SOLID_FILL,7);
    fillpoly(4,pimer_espacio_ventanasuperior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,pimer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,pimer_espacio_superior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,pimer_espacio_inferior);


    setfillstyle(SOLID_FILL,7);
    fillpoly(4,segundo_espacio_ventanasuperior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,segundo_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,segundo_espacio_superior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,segundo_espacio_inferior);



    setfillstyle(SOLID_FILL,7);
    fillpoly(4,tercer_espacio_ventanasuperior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,tercer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,tercer_espacio_superior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,tercer_espacio_inferior);


    setfillstyle(SOLID_FILL,7);
    fillpoly(4,cuarto_espacio_ventanasuperior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,cuarto_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,cuarto_espacio_superior);
    setfillstyle(SOLID_FILL,8);
    fillpoly(5,cuarto_espacio_inferior);

    setfillstyle(SOLID_FILL,8);
    fillpoly(5,espacio_puerta);

    setfillstyle(SOLID_FILL,8);
    fillpoly(5,espacio_puer);

    /*Ventanas del lado izquierdo*/
   rectangle(97,150,113,192);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 160, WHITE);
    rectangle(97,197,113,245);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 210, WHITE);
    rectangle(97,252,113,300);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 260, WHITE);
    rectangle(97,308,113,339);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 315, WHITE);


    /*Ventanas del lado derecho*/
    setcolor(WHITE);
    rectangle(525, 155,543,188);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 160, WHITE);
    rectangle(526,201,543,242);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 210, WHITE);
    rectangle(526,254,543,299);
     setfillstyle(SOLID_FILL, BLACK); /*Relleno negro*/
    floodfill(530, 260, WHITE);
    rectangle(526,310,543,339);
     setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 315, WHITE);
    rectangle(528,374,545,406);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 380, WHITE);
    rectangle(94,374,111,406);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(96, 380, WHITE);



    /*LINEAS DE VENTANAS derecha*/
    setcolor(WHITE);

    line(105,152,105,188);
    line(97,164,113,168);
    line(97,175,113,179);
    line(105,199,105,243);
    line(97,211,113,216);
    line(97,227,113,230);
    line(97,272,113,275);
     line(105,253,105,299);
     line(105,308,105,340);
     line(97,324,113,326);

   line(441,104,441,129);
   line(457,117,457,141);
   line(472,127,472,149);
   line(488,139,488,159);
   line(501,148,501,168);
   line(423,108,515,171);

   line(441,168,441,193);
   line(457,178, 457,201);
   line(472,186,472,209);
   line(488,195,488,217);
   line(501,202,501,223);
   line(423,177,514,223);

   line(441,235,441,262);
   line(457,241,457,266);
   line(472,247,472,271);
   line(488,254,488,276);
   line(501,259,501,280);
   line(423,246,516,279);

   line(441,302,441,329);
   line(456,306,456,331);
   line(472,309,472,334);
   line(488,312,488,336);
   line(501,317,501,337);
   line(423,316,516,333);

   line(441,371,441,399);
   line(456,370,456,398);
   line(472,372,472,398);
   line(488,373,488,397);
   line(500,374,500,396);
   line(423,389,512,389);

   /*lineas de ventanas izquierda*/


    line(533,153,533,189);
    line(542,162,526,167);
     line(542,172,526,180);
     line(533,199,533,243);
     line(533,253,533,299);
     line(533,309,533,340);
     line(542,211,526,215);
     line(542,228,526,232);
     line(542,279,526,279);
     line(542,323,526,323);

   line(198,105,198,129);
   line(180,119,180,141);
   line(165,129,165,151);
   line(150,141,150,161);
   line(137,150,137,170);
   line(216,109,126,170);

   line(198,169,198,195);
   line(180,179,180,203);
   line(165,188,165,211);
   line(150,196,150,218);
   line(137,203,137,224);
   line(216,176,126,224);

    line(198,235,198,262);
    line(180,242,180,268);
    line(165,248,165,272);
    line(150,254,150,278);
    line(137,259,137,281);
    line(216,247,126,278);

    line(198,302,198,330);
    line(180,307,180,332);
    line(165,311,165,335);
    line(150,313,150,337);
    line(137,316,137,338);
    line(216,317,126,334);

    line(198,370,198,397);
    line(180,372,180,397);
    line(165,372,165,397);
    line(150,372,150,397);
    line(137,372,137,397);
    line(216,388,126,388);

    
   

    /*paisaje*/

	setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama1);
    setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama2);

    setfillstyle(SOLID_FILL,9);
	fillpoly(42, cielo);

    
    setfillstyle(SOLID_FILL,8);
	fillpoly(18,suelo);

    /*Dibujar primer circulo*/
    circle(centro_x, centro_y, radio);
    setfillstyle(SOLID_FILL, WHITE); // Color blanco
    floodfill(centro_x, centro_y, WHITE);

    /*Dibujar segundo circulo*/
    circle(centro_x + 15, centro_y - 5, radio);
    floodfill(centro_x + 15, centro_y - 5, WHITE);

    /*Dibujar tercer circulo*/
    circle(centro_x + 25, centro_y + 5, radio);
    floodfill(centro_x + 25, centro_y + 5, WHITE);

    /*Dibujar cuarto circulo*/
    circle(centro_x + 35, centro_y, radio);
    floodfill(centro_x + 35, centro_y, WHITE);

    /*NUBE DOS*/

   
    circle(centro_x1, centro_y1, radio);
    setfillstyle(SOLID_FILL, WHITE); /*Color blanco*/
    floodfill(centro_x1, centro_y1, WHITE);


    circle(centro_x1 + 15, centro_y1 - 5, radio);
    floodfill(centro_x1+ 15, centro_y1 - 5, WHITE);

    circle(centro_x1 + 25, centro_y1 + 5, radio);
    floodfill(centro_x1 + 25, centro_y1 + 5, WHITE);


    circle(centro_x1 + 35, centro_y1, radio);
    floodfill(centro_x1 + 35, centro_y1, WHITE);

/*NUBE 3*/

    circle(centro_x3, centro_y3, radio);
    setfillstyle(SOLID_FILL, WHITE); 
    floodfill(centro_x3, centro_y3, WHITE);

    circle(centro_x3 + 15, centro_y3 - 5, radio);
    floodfill(centro_x3 + 15, centro_y3 - 5, WHITE);

    circle(centro_x3 + 25, centro_y3+ 5, radio);
    floodfill(centro_x3 + 25, centro_y3 + 5, WHITE);

    circle(centro_x3 + 35, centro_y3, radio);
    floodfill(centro_x3 + 35, centro_y3, WHITE);

    /*NUBE4*/

    circle(centro_x4, centro_y4, radio4);
    setfillstyle(SOLID_FILL, WHITE); 
    floodfill(centro_x4, centro_y4, WHITE);

    circle(centro_x4 + 15, centro_y4 - 5, radio4);
    floodfill(centro_x4+ 15, centro_y4 - 5, WHITE);

    circle(centro_x4 + 25, centro_y4 + 5, radio4);
    floodfill(centro_x4 + 25, centro_y4 + 5, WHITE);

    circle(centro_x4 + 35, centro_y4, radio);
    floodfill(centro_x4 + 35, centro_y4, WHITE);

    /*NUBE5*/

    circle(centro_x5, centro_y5, radio5);
    setfillstyle(SOLID_FILL, WHITE); 
    floodfill(centro_x5, centro_y5, WHITE);

    circle(centro_x5 + 15, centro_y5 - 5, radio);
    floodfill(centro_x5 + 15, centro_y5 - 5, WHITE);

    circle(centro_x5 + 25, centro_y5 + 5, radio5);
    floodfill(centro_x5 + 25, centro_y5 + 5, WHITE);

    circle(centro_x5 + 35, centro_y5, radio5);
    floodfill(centro_x5 + 35, centro_y5, WHITE);

// Dibujar el sol
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(20, 19, 30);
    floodfill(20, 19, YELLOW);

     rectangle(272,463,367,480);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 471, WHITE);

    /*escaleras*/
     setcolor(YELLOW);

    // Establecer el grosor de la línea
    setlinestyle(SOLID_LINE, 0, 3);
    line(453,452,453,421);
    line(452,421,508,409);
    line(508,409,637,409);
    line(464,433,508,421);
    line(508,421,638,420);
    line(483,438,508,431);
    line(508,431,638,430);
    line(507,409,507,448);
    line(187,451,187,415);
    line(187,415,131,404);
    line(131,404,2,407);
    line(179,440,179,420);
    line(179,420,130,412);
    line(130,412,2,412);
    line(92,412,89,412);
    line(178,430,130,422);
    line(130,422,2, 422);
    line(130,412,130,452);

    /*rotonda*/
    
    for (i = xr - radiusr; i <= xr + radiusr; i++) {
        for (j = yr - radiusr; j <= yr; j++) {
            if ((i - xr) * (i - xr) + (j - yr) * (j - yr) <= radiusr * radiusr) {
                putpixel(i, j, BROWN);
            }
        }
    }

    /*dibuja medio circulo*/
    setcolor(WHITE);
    arc(xr, yr, start_angler, end_angler, radiusr);


    for (ip = xr - radius_small; ip <= xr + radius_small; ip++) {
        for (jp = yr - radius_small; jp <= yr; jp++) {
            if ((ip - xr) * (ip - xr) + (jp - yr) * (jp - yr) <= radius_small * radius_small) {
                putpixel(ip, jp, (10));
            }
        }
    }

     /*Logo UNI*/

    rectangle(290,427,350,462);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(320, 444, WHITE);

    setfillstyle(SOLID_FILL,15);
    fillpoly(12,uni);

    setfillstyle(SOLID_FILL,15);
    fillpoly(8,uni2);

    setfillstyle(SOLID_FILL,6);
    fillpoly(10,palmera);

    setfillstyle(SOLID_FILL,10);
    fillpoly(24,hojas);

    setfillstyle(SOLID_FILL,6);
    fillpoly(10,palmera2);

    setfillstyle(SOLID_FILL,10);
    fillpoly(24,hojas2);

    setcolor(LIGHTGRAY);

    setfillstyle(SOLID_FILL,8);
    fillpoly(5,camino2);

    setcolor(LIGHTGRAY);

    setfillstyle(SOLID_FILL,8);
    fillpoly(6,camino1);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,0);
    fillpoly(18,lampara);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,8);
    fillpoly(14,lampara2);
    getch();
    closegraph();
    return 0;

}

