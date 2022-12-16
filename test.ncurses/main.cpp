#include <stdio.h>
#include <ncurses.h>
#include <string.h>

int main() {
    char mesg[] = "\033[0;31mJust a string!\033[0m";
    int row, col;
    
    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col - strlen(mesg))/2, "%s", mesg);
    mvprintw(row - 2, 0, "\033[0;33mThis screen has %d rows and %d columns\033[0m\n", row, col);
    printw("\033[0;36mTry resizing your window(if possible) and then run this program again.\033[0m");
    refresh();
    getch();
    endwin();
	return 0;
}
