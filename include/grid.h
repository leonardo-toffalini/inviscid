#pragma once

#include <vector>

struct Cell {
  const int x;
  const int y;
  const int size;

  Cell(int x, int y, int size) : x(x), y(y), size(size) {}
  void draw(unsigned char lum) const;
};

struct Grid {
  const int cellSize = 20;
  const int screenWidth;
  const int screenHeight;
  std::vector<std::vector<Cell> > cells;

  Grid(int cellSize, int screenWidth, int screenHeight);
  void showGrid();
  void drawCells();
};
