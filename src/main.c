#include "../include/engine.h"
#include "../build/external/raylib-master/src/raylib.h"
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

    DrawLine(100, 0, 100, Height, WHITE);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
