#ifndef MINEFIELD_H
#define MINEFIELD_H

#include <vector>
#include "SDL.h"

class Snake {

    public:
        std::vector<SDL_Point> Mines();
        void PlaceMines();


    private:
        std::vector<SDL_Point> _mines;
        std::random_device dev;
        std::mt19937 engine;
        std::uniform_int_distribution<int> random_w;
        std::uniform_int_distribution<int> random_h;

};

#endif
