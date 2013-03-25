#include <ncurses.h>
enum direction {UP,DOWN,RIGHT,LEFT};
#define WORLD_W 100
#define WORLD_H 60

int main()
{
    WINDOW *nonrow_window;
    int offsetx, offsety;
    initscr();
    refresh();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    start_color();
    assume_default_colors(COLOR_RED,COLOR_BLUE);
    offsetx = (COLS - WORLD_W/1,5 );
    offsety = (LINES - WORLD_H/1,5 );
    nonrow_window = newwin(WORLD_H,
                           WORLD_W,
                           offsety,
                           offsetx);
    //box(nonrow_window,0,0);
    //wrefresh(nonrow_window); 
    for (int i = 0; i < WORLD_H/2; i++) {
        if(i%2)
        {
            printw("|");
            for (int p = 0; p < WORLD_W/10; p++) {
                printw("--------|");
            }
            for(int d =0; d < 2;d++) {
            printw("\n|");
            for(int t = 0; t < WORLD_W/10; t++) {
                printw("        |");
            }
            }
            printw("\n");
        }

    }
    getch();
    refresh();
    delwin(nonrow_window);
    endwin();
    return 0;
}
