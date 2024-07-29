# include <ncurses.h>
# include <stdio.h>

struct Snake
{

    int segmentcount;
    int segments[20][1];

};


void initGame(Snake *snake)
{
    initscr();
    refresh();
    snake->segmentcount = 1;
    snake->segments[0][0] = 10;
    snake->segments[0][1] = 10;

}

void drawSnake(Snake *snake)
{
    for(int x=0;x < snake->segmentcount; x++)
    {
        move(snake->segments[x][1], snake->segments[x][0]);
        printw("O");
    }

}


int main()

{

    Snake snake;
    initGame(&snake);
    drawSnake(&snake);
    getch();


    return 0;
}