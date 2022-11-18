#include <ncurses.h>
 
int main()
{
    initscr();
    printw("hello, world! press any key to exit ...");
    refresh();
    getch();
    endwin();
 
    return 0;
}
