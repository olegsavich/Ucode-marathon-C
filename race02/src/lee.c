#include "../inc/header.h"

bool lee(int **grid,int ax, int ay, int bx, int by,int He, int Wi, int *len,int *px,int *py)   // поиск пути из ячейки (ax, ay) в ячейку (bx, by)
{
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int d, x, y, k;
  bool stop;

  if (grid[ay][ax] == -1 ) {
      mx_printerr("entry point cannot be an obstacle\n");
      exit(0);
  }
  if (grid[by][bx] == -1 ) {
      mx_printerr("exit point cannot be an obstacle\n");
      exit(0);
  }

  d = 0;
  grid[ay][ax] = 0;
  do {
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
  } while ( !stop && grid[by][bx] == -2 );

  if (grid[by][bx] == -2) return false;


  *len = grid[by][bx];
  x = bx;
  y = by;
  d = *len;
  while ( d > 0 )
  {
    px[d] = x;
    py[d] = y;
    d--;
    for (k = 0; k < 4; ++k)
    {
       int iy=y + dy[k], ix = x + dx[k];
       if ( iy >= 0 && iy < He && ix >= 0 && ix < Wi &&
            grid[iy][ix] == d)
      {
          x = x + dx[k];
          y = y + dy[k];
          break;
      }
    }
  }
  px[0] = ax;
  py[0] = ay;
  return true;
}
