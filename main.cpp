#include <iostream>
#include <winbgim.h>
#include <graphics.h>
using namespace std;

int winlenght, winheight;
char lines[100][1024];
char d;

int main()
{
 winlenght=1280;
 winheight=720;
 initwindow(winlenght, winheight, "Notepad^2");

 d=getch();
 cout<<d;

 int x = 400, y = 300, r;
 line(x,y,x+100,y+100);




 getch(); closegraph();
 return 0;
}
