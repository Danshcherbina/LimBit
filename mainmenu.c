#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <conio.h>

int main_menu();

int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    int fmt;
    int ch;
ch=main_menu();
return 0;
}

int main_menu(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    int fmt;
    int sel=0;
    int s;
 while(1){
fmt=FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY;
SetConsoleTextAttribute(hConsole, fmt);
             system("cls");
fmt=FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY;
SetConsoleTextAttribute(hConsole, fmt);
pos.X=0;
pos.Y=0;
SetConsoleCursorPosition(hConsole, pos);
printf("Start game\n");
printf("Options\n");
printf("Exit\n");
pos.X=0;
pos.Y=6;
SetConsoleCursorPosition(hConsole, pos);
printf("use w or s to select, press space to choose");
fmt=BACKGROUND_GREEN;
SetConsoleTextAttribute(hConsole, fmt);
switch(sel){
case 0:{
    pos.X=0;
    pos.Y=0;
    SetConsoleCursorPosition(hConsole, pos);
    printf("Start game\n");
break;
}
case 1:
    {
    pos.X=0;
    pos.Y=1;
    SetConsoleCursorPosition(hConsole, pos);
      printf("Options\n");
break;
    }
case 2:
    {
    pos.X=0;
    pos.Y=2;
    SetConsoleCursorPosition(hConsole, pos);
      printf("Exit\n");
break;
    }
}
s=getch();
if(s==119){
    if(sel==0){
    sel=2;
    continue;
    }
    if(sel>0){
    sel--;
    }
}
if(s==115){
    if(sel==2){
        sel=0;
    continue;
    }
    if(sel<2){
        sel++;
    }
}
 if (s==32){
       break;
    }
}
return sel;
}
