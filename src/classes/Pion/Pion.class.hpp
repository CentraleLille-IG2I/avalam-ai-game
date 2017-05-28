// Project MPI [duck managed]
// Class Pion (src/classes/Pion/Pion.class.hpp)
#ifndef PION_CLASS_HPP
    #define PION_CLASS_HPP
    
    #include "../../SDL2/SDL.h"
    #include "../Display/Display.class.h"
    #include <stdio.h>
    //Pion class definition

    class Pion
    {
        public:

        SDL_Rect pion;
        int x, y, w, h, hauteur, selected;

        Pion(); //class constructor
        ~Pion();  
    };

    #endif