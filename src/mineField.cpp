#include "mineField.h"
#include <vector>
#include "SDL.h"


std::vector<SDL_Point> MineField::Mines() {
    return _mines;
}

void mineField::PlaceMines(Snake snake) {
  int x, y;

  for (int i = 0; i < nMines; i++) {
    
    SDL_Point mine;
    // check if occupied by food or snake
    while (true) {
        x = random_w(engine);
        y = random_h(engine);

        if (!snake.SnakeCell(x, y)) {
            mine.x = x;
            mine.y = y;
            _mines.push_back(mine);
            break;
        }
    }
  }
}