#include "../build/external/raylib-master/src/raylib.h"
#include "../include/engine.h"
#include "../include/resource_dir.h" // utility header for SearchAndSetResourceDir

int main() {
  SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
  InitWindow(1280, 800, "Hello Raylib");

  SearchAndSetResourceDir("resources");

  const int Width = GetScreenWidth();
  const int Height = GetScreenHeight();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    draw_grid(dens, Width, Height);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
