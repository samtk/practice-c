#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int main()
{
    initscr();
    start_color();
    init_pair(1,COLOR_YELLOW,COLOR_BLACK);
    init_pair(2,COLOR_BLUE,COLOR_YELLOW);
    init_pair(3,COLOR_RED,COLOR_BLACK); 
    wmove(stdscr,5,5);
    wprintw(stdscr,"Hello, World.");
    wbkgd(stdscr,COLOR_PAIR(2));
    wmove(stdscr,10,10);
    wrefresh(stdscr);
    sleep(2);
    wbkgd(stdscr,COLOR_PAIR(3));
    wprintw(stdscr,"in blood");
    getch();
    endwin();
    return 0;
}
