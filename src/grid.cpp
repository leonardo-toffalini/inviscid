#include "raylib.h"
#include "grid.h"

void Grid::showGrid() {
  // vertical lines
  for (int v = cellSize; v < screenWidth; v += cellSize) {
    DrawLine(v, 0, v, this->screenHeight, WHITE);
  }

  // horizontal lines
  for (int h = cellSize; h < screenHeight; h += cellSize) {
    DrawLine(0, h, this->screenWidth, h, WHITE);
  }
}
