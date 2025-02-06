#include "../include/grid.h"
#include "../build/external/raylib-master/src/raylib.h"
#include <vector>
#include <random>

void Cell::draw(unsigned char lum) const {
  DrawRectangle(this->x, this->y, this->size, this->size,
                (Color){lum, lum, lum, 255});
}

Grid::Grid(int cellSize, int screenWidth, int screenHeight)
    : cellSize(cellSize), screenWidth(screenWidth), screenHeight(screenHeight) {
  // Initialize the cells vector with the correct size
  this->cells.resize(screenWidth / cellSize);
  for (int i = 0; i < screenWidth / cellSize; i++) {
    this->cells[i].reserve(screenHeight / cellSize);
    for (int j = 0; j < screenHeight / cellSize; j++) {
      this->cells[i].emplace_back(i * cellSize, j * cellSize, cellSize);
    }
  }
}

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

void Grid::drawCells() {
  for (const auto row : this->cells) {
    for (const Cell cell : row) {
      unsigned char randomLum = (rand() % 201) + 50;  // 201 = (250 - 50 + 1)
      cell.draw(randomLum);
    }
  }
}
