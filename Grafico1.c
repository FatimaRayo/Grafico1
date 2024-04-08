#include<graphics.h>
#include<conio.h>


void main()
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

    /*Miniventanas NEGRAS que van en las columnas azules del edificio*/
    /*Izquierda*/

    int ventnegra1[]={246,79,262,79,262,89,246,98};
    int ventnegra2[]={246,149,262,149,262,164,246,170};
    int ventnegra3[]={247,221,262,221,262,241,247,245};
    int ventnegra4[]={247,294,262,294,262,319,247,321};
    int ventnegra5[]={247,368,263,368,263,396,247,396};

    /*Derecha*/
    int ventanegra1[]={393,79,377,79,377,88,393,97};
    int ventanegra2[]={377,149,393,149,393,170,377,163};
    int ventanegra3[]={377,221,392,221,392,245,377,241};
    int ventanegra4[]={377,294,392,294,392,321,377,319};
    int ventanegra5[]={377,368,392,368,392,396,377,396};



    /*Pilares*/
    /*Izquierda*/

    int pillar1[] = {1, 138, 2, 406, 123, 406, 123, 130, 107, 123, 107, 93, 56, 72, 29, 115, 1, 138};
    int manchapilar1[] = {25,406,30,113,39,99,80,113,76,406,67,406,70,141,42,132,37,406};


    /*Derecha*/

    int pillar2[] = {610, 115, 640, 138,583, 72,533, 93,533, 123,515, 129, 515, 406,610,406,640, 406,640, 138};
    int manchapilar2[]={569,141,597,133,602,406,610,406,610,115,599,98,561,112,562,406,573,406};




    /*parte de en medio*/

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




    initgraph(&driver,&modo," ");


    /* Contorno de pilar superior izquierdo */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(9, pillar1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(9,manchapilar1);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,unionpard);

    /*espacios negros de ventana izquierda*/

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



    /*Lineas de ventanas grandes de la pared gis intermedia*/
    /*IZQUIERDA grande*/

    line(131,152,131,174);
   line(137,148,137,170);
   line(143,143,143,166);
   line(150,138,150,161);
   line(157,133,157,157);
   line(164,128,164,152);
   line(172,122,172,147);
   line(180,117,180,142);
   line(189,110,189,136);
   line(198,104,198,130);
   line(208,96,208,123);


   line(131,206,131,227);
   line(137,203,137,224);
   line(143,200,143,221);
   line(150,196,150,218);
   line(157,192,157,214);
   line(164,188,164,211);
   line(172,183,172,207);
   line(180,179,180,203);
   line(189,173,189,198);
   line(198,168,198,194);
   line(208,163,208,189);


   line(131,262,131,284);
   line(137,259,137,282);
   line(143,257,143,281);
   line(150,254,150,278);
   line(157,251,157,276);
   line(164,248,164,274);
   line(172,245,172,271);
   line(180,242,180,269);
   line(189,238,189,266);
   line(198,234,198,263);
   line(208,230,208,260);



   line(131,316,131,341);
   line(137,315,137,340);
   line(143,313,143,339);
   line(150,312,150,338);
   line(157,310,157,337);
   line(164,309,164,336);
   line(172,307,172,335);
   line(180,305,180,333);
   line(189,303,189,332);
   line(198,301,198,331);
   line(208,299,208,329);


   line(131,373,131,394);
   line(137,372,137,394);
   line(143,372,143,394);
   line(150,372,150,394);
   line(157,371,157,394);
   line(164,371,164,394);
   line(172,371,172,394);
   line(180,370,180,394);
   line(189,370,189,394);
   line(198,369,198,396);
   line(208,369,208,396);

   line(123,172,216,109);
   line(123,225,216,177);
   line(123,279,216,246);
   line(123,333,216,316);
   line(123,388,216,388);



   /*Izquierda pequena*/

   line(127,170,127,176);
   line(134,165,134,172);
   line(140,161,140,168);
   line(147,156,147,163);
   line(153,152,153,159);
   line(160,147,160,155);
   line(168,142,168,149);
   line(176,137,176,144);
   line(185,131,185,138);
   line(194,124,194,132);
   line(203,118,203,127);
   line(213,112,213,120);


   line(127,223,127,229);
   line(134,219,134,226);
   line(140,216,140,223);
   line(147,213,147,219);
   line(153,210,153,216);
   line(160,206,160,213);
   line(168,202,168,209);
   line(176,198,176,205);
   line(185,193,185,200);
   line(194,188,194,196);
   line(203,184,203,191);
   line(213,179,213,186);


   line(127,278,127,286);
   line(134,275,134,283);
   line(140,273,140,282);
   line(147,270,147,279);
   line(153,268,153,277);
   line(160,266,160,275);
   line(168,263,168,272);
   line(176,260,176,270);
   line(185,257,185,267);
   line(194,254,194,264);
   line(203,251,203,261);
   line(213,247,213,258);


   line(127,332,127,341);
   line(134,331,134,340);
   line(140,330,140,339);
   line(147,329,147,338);
   line(153,328,153,337);
   line(160,326,160,336);
   line(168,325,168,335);
   line(176,323,176,334);
   line(185,322,185,333);
   line(194,320,194,331);
   line(203,318,203,330);
   line(213,317,213,328);


   line(127,388,127,394);
   line(134,388,134,394);
   line(140,388,140,394);
   line(147,388,147,394);
   line(153,388,153,394);
   line(160,388,160,394);
   line(168,388,168,394);
   line(176,388,176,394);
   line(185,388,185,394);
   line(194,388,194,396);
   line(203,388,203,396);
   line(213,388,213,396);





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


    /*espacios negros de ventana derecha*/
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



    /*Lineas de ventanas grandes de la pared gis intermedia*/
    /*DERECHA grande*/

    line(508,153,508,174);
   line(502,148,502,170);
   line(495,143,495,166);
   line(489,138,489,161);
   line(482,133,482,157);
   line(475,128,475,152);
   line(467,122,467,147);
   line(458,117,458,142);
   line(450,110,450,136);
   line(441,104,441,130);
   line(431,96,431,123);


   line(508,206,508,227);
   line(502,203,502,224);
   line(495,200,495,221);
   line(489,196,489,218);
   line(482,192,482,214);
   line(475,188,475,211);
   line(467,183,467,207);
   line(458,179,458,203);
   line(450,173,450,198);
   line(441,168,441,194);
   line(431,163,431,189);


   line(508,262,508,284);
   line(502,259,502,282);
   line(495,257,495,281);
   line(489,254,489,278);
   line(482,251,482,276);
   line(475,248,475,274);
   line(467,245,467,271);
   line(458,242,458,269);
   line(450,238,450,266);
   line(441,234,441,263);
   line(431,230,431,260);



   line(508,316,508,341);
   line(502,315,502,340);
   line(495,313,495,339);
   line(489,312,489,338);
   line(482,310,482,337);
   line(475,309,475,336);
   line(467,307,467,335);
   line(458,305,458,333);
   line(450,303,450,332);
   line(441,301,441,331);
   line(431,299,431,329);


   line(508,373,508,394);
   line(502,372,502,394);
   line(495,372,495,394);
   line(489,372,489,394);
   line(482,371,482,394);
   line(475,371,475,394);
   line(467,371,467,394);
   line(458,370,458,394);
   line(450,370,450,394);
   line(441,369,441,396);
   line(431,369,431,396);

   line(515,172,423,109);
   line(515,225,423,177);
   line(515,279,423,246);
   line(515,333,423,316);
   line(515,388,423,388);



   /*Derecha pequena*/

   line(512,170,512,176);
   line(505,165,505,172);
   line(499,161,499,168);
   line(492,156,492,163);
   line(486,152,486,159);
   line(478,147,478,155);
   line(471,142,471,149);
   line(462,137,462,144);
   line(454,131,454,138);
   line(446,124,446,132);
   line(436,118,436,127);
   line(427,112,427,120);


   line(512,223,512,229);
   line(505,219,505,226);
   line(499,216,499,223);
   line(492,213,492,219);
   line(486,210,486,216);
   line(478,206,478,213);
   line(471,202,471,209);
   line(462,198,462,205);
   line(454,193,454,200);
   line(446,188,446,196);
   line(436,184,436,191);
   line(427,179,427,186);


   line(512,278,512,286);
   line(505,275,505,283);
   line(499,273,499,282);
   line(492,270,492,279);
   line(486,268,486,277);
   line(478,266,478,275);
   line(471,263,471,272);
   line(462,260,462,270);
   line(454,257,454,267);
   line(446,254,446,264);
   line(436,251,436,261);
   line(427,247,427,258);


   line(512,332,512,341);
   line(505,331,505,340);
   line(499,330,499,339);
   line(492,329,492,338);
   line(486,328,486,337);
   line(478,326,478,336);
   line(471,325,471,335);
   line(462,323,462,334);
   line(454,322,454,333);
   line(446,320,446,331);
   line(436,318,436,330);
   line(427,317,427,328);


   line(512,388,512,394);
   line(505,388,505,394);
   line(499,388,499,394);
   line(492,388,492,394);
   line(486,388,486,394);
   line(478,388,478,394);
   line(471,388,471,394);
   line(462,388,462,394);
   line(454,388,454,394);
   line(446,388,446,396);
   line(436,388,436,396);
   line(427,388,427,396);




    

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

    

    /*lineas medias entre las ventanas de la pared azul del frente */
    /*Izquierda*/
    line(261,18,261,49);
    line(261,120,261,88);
    line(261,163,261,196);
    line(261,240,261,273);
    line(261,319,261,352);

    /*Derecha*/
    line(378,18,378,48);
    line(378,120,378,88);
    line(378,163,378,196);
    line(378,240,378,273);
    line(378,319,378,352);
    

    


    /*Fondo gris de las ventanas*/
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,pimer_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,pimer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra1);

    

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,pimer_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,pimer_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra1);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,segundo_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,segundo_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra2);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,segundo_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,segundo_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra2);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,tercer_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,tercer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra3);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,tercer_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,tercer_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra3);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,cuarto_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,cuarto_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra4);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,cuarto_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,cuarto_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra4);

    setfillstyle(SOLID_FILL,7);
    fillpoly(5,espacio_puerta);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra5);

    setfillstyle(SOLID_FILL,7);
    fillpoly(5,espacio_puer);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra5);


    /*Divisones de ventanitas negras de pilares azules*/ 
    /*Izquierda*/       
    line(246,92,255,92);
    line(246,93,254,93);

    line(246,163,262,163);
    line(246,164,262,164);

    line(247,235,262,235);
    line(247,236,262,236);

    line(247,308,262,308);
    line(247,309,262,309);

    line(247,382,262,382);
    line(247,383,262,383);


    /*Derecha*/

    line(393,92,385,92);
    line(393,93,386,93);

    line(393,163,377,163);
    line(393,164,379,164);

    line(392,235,377,235);
    line(392,236,377,236);

    line(392,308,377,308);
    line(392,309,377,309);

    line(392,382,376,382);
    line(392,383,376,383);



    
    /*Lineas grises VERTICALES divisoras*/
    /*Izquierda*/
    
    line(254,163,254,167);
    line(255,163,255,166);

    line(254,163,254,167);
    line(255,163,255,166);

    line(254,235,254,243);
    line(255,235,255,243);

    line(254,308,254,320);
    line(255,308,255,320);

    line(254,382,254,398);
    line(255,382,255,398);


    /*Derecha*/
    
    line(384,163,384,166);
    line(385,163,385,167);

    line(384,235,384,243);
    line(385,235,385,243);

    line(384,308,384,320);
    line(385,308,385,321);

    line(384,382,384,398);
    line(385,382,385,398);


    




    setcolor(WHITE);
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
    /*Lineas de ventanas de columna gris derceha parte frente*/

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

   
    

    /*Logo UNI*/

    rectangle(290,427,350,462);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(320, 444, WHITE);

    setfillstyle(SOLID_FILL,15);
    fillpoly(12,uni);

    setfillstyle(SOLID_FILL,15);
    fillpoly(8,uni2);

    /*paisaje*/

	setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama1);
    setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama2);

    setfillstyle(SOLID_FILL,9);
	fillpoly(42, cielo);

    
    setfillstyle(SOLID_FILL,6);
	fillpoly(17,suelo);












    rectangle(272,463,367,480);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 471, WHITE);



    


    

    

    


    getch();

    closegraph();

}
