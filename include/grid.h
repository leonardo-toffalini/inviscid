#pragma once

struct Grid {
  const int cellSize = 20;
  const int screenWidth;
  const int screenHeight;

  Grid(int cellSize, int screenWidth, int screenHeight) : cellSize(cellSize), screenWidth(screenWidth), screenHeight(screenHeight) {}
  void showGrid();
};
