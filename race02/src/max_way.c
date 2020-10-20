#include "../inc/header.h"

int max(int **grid,int ax, int ay,int He, int Wi, char **final)
{
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int d, x, y, k;
  bool stop = false;
  int maxim;
  int flag = 1;



  d = 0;
  grid[ay][ax] = 0;
  while ( !stop  || flag) {
    stop = true;
    for ( y = 0; y < He; ++y )
      for ( x = 0; x < Wi; ++x )
        if ( grid[y][x] == d )
        {
          for ( k = 0; k < 4; ++k )
          {
             int iy=y + dy[k], ix = x + dx[k];
             if ( iy >= 0 && iy < He && ix >= 0 && ix < Wi &&
             grid[iy][ix] == -2 )
             {
                stop = false;
                grid[iy][ix] = d + 1;
             }
          }
        }
    d++;
    flag = 0;
  }
  maxim = grid[0][0];
  for (int i = 0; i < He; ++i) {
        for (int j = 0; j < Wi; ++j) {
              if (grid[i][j] > maxim) {
                  maxim = grid[i][j];
              }
        }
  }
  for (int i = 0; i < He; ++i) {
        for (int j = 0; j < Wi; ++j) {
            if (grid[i][j] == maxim) {
                if (final[i][j] == '*') {
                    final[i][j] ='X';
                }
                else {
                    final[i][j] = 'D';
                }
            }
        }
  }
  return maxim;
}
