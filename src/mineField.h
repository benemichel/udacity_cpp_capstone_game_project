#ifndef MINEFIELD_H
#define MINEFIELD_H

#include <vector>
#include <random>
#include "SDL.h"

class MineField {

    public:
        MineField(int grid_width, int grid_height) :
            engine(dev()),
            random_w(0, static_cast<int>(grid_width - 1)),
            random_h(0, static_cast<int>(grid_height - 1)) {}

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
