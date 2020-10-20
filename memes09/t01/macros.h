#ifndef MACROS_H
#define MACROS_H

#define MX_SUM(x,y) ((x + y))
#define MX_MULT(x,y) ((x * y))
#define MX_MIN(x,y) ((x > y) ? (x) : (y))
#define MX_ABS(x) (((x) < (0)) ? (-x) : (x))
#define MX_IS_ODD(x) ((x) % 2 == 0 ? 0 : 1)

#endif
