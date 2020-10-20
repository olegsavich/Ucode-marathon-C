#ifndef HEADER
#define HEADER
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define SHORT_DROPLET 
#ifdef SHORT_DROPLET
struct droplet{
    unsigned short length, col;
    short row;   //signed so droplets can start above screen
    unsigned short frames_per_row;
};
#else //SHORT_DROPLET
struct droplet{
    unsigned int length, col;
    int row;    //signed so droplets can start above screen
    unsigned int frames_per_row;
};
#endif //SHORT_DROPLET
int init_droplets();
void cleanup();
int draw_rain();
int draw_droplet(struct droplet *drop);
int gen_droplet_props(struct droplet *drop);
int droplets_realloc();

unsigned int refresh_rate;
char multicolor_trail;
char velocity;
char primary_color;
char secondary_color;
static const char max_char = 126, min_char = 33;
static unsigned int max_row, max_col;
static unsigned int num_of_droplets;
static struct droplet *droplets;

#endif 
