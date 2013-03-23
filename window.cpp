#include <ncurses.h>

enum direction {UP,DOWN,RIGHT,LEFT};
#define WORLD_W 50
#define WORLD_H 20

int main()
{
    WINDOW *nonrow_window;
    int offsetx, offsety;

    initscr();
    refresh();
    start_color();
    assume_default_colors(COLOR_RED,COLOR_BLUE);
    offsetx = (COLS - WORLD_W ) / 2;
    offsety = (LINES - WORLD_H ) / 2;

    nonrow_window = newwin(WORLD_H,
                           WORLD_W,
                           offsety,
                           offsetx);
    box(nonrow_window,0,0);
    printw("HELLO");
    getch();

    delwin(nonrow_window);
    endwin();
    return 0;
}
