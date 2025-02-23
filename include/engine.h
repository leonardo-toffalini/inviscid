#pragma once

#define N 100
#define IX(i, j) ((i) + (N + 2) * (j))

static unsigned char dens[(N + 2) * (N + 2)];
static unsigned char dens_prev[(N + 2) * (N + 2)];

static unsigned char u[(N + 2) * (N + 2)];
static unsigned char u_prev[(N + 2) * (N + 2)];
static unsigned char v[(N + 2) * (N + 2)];
static unsigned char v_prev[(N + 2) * (N + 2)];

void draw_grid(unsigned char *grid, int Width, int Height) {
  int i, j;
  int cell_size = Width / N;

  for (i = 1; i <= N; i++) {
    for (j = 1; j <= N; j++) {
      unsigned char c = dens[IX(i, j)];
      Color color = (Color){c, c, c};
      DrawRectangle((i - 1) * cell_size, (j - 1) * cell_size, cell_size,
                    cell_size, color);
    }
  }
}
