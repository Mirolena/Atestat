#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
bool gameOver;
int x,y,fructaX,fructaY,scor;
int nCoada;
int coadaX[100],coadaY[100];
const int latime=20;
const int inaltime=20;
enum eDirectie {STOP=0, LEFT, RIGHT, UP, DOWN};
eDirectie dir;
void setup()
{
   gameOver=false;
   dir=STOP;
   x=latime/2;y=inaltime/2;
   fructaX=rand() % latime;
   fructaY=rand() % inaltime;
   scor=0;
}
void draw()
{
    system("cls"); //curata ecranul
    for(int i=0;i<latime+1;i++)
        cout<<"#";
    cout<<endl;

    for(int i=0;i<inaltime;i++)
    {
        for(int j=0;j<latime;j++)
        {
            if(j==0)cout<<"#";
            if(i==y&&j==x)
                cout<<"O";
            else if (i==fructaY&&j==fructaX) cout<<"F";
            else
            {
                bool print=false;
                for(int k=0;k<nCoada;k++)
                    {
                        if(coadaX[k]==j && coadaY[k]==i){cout<<"o";print=true;}
                    }
                if(!print) cout<<" ";

            }
            if(j==latime-1)cout<<"#";
        }
        cout<<endl;
    }

    for(int i=0;i<latime+1;i++)
        cout<<"#";
    cout<<endl;
    cout<<"Aveti "<<scor<<" puncte.";
}
void input()
{
     if(_kbhit())
     {
         switch(_getch())
         {
         case 'a':
            dir=LEFT;
            break;
         case 'd':
            dir=RIGHT;
            break;
         case 'w':
            dir=UP;
            break;
         case 's':
            dir=DOWN;
            break;
         case 'x':
            gameOver = true;
            break;
         }
     }
}
void logic()
{
    int prevX=coadaX[0],prevY=coadaY[0],prev2x,prev2y;
    coadaX[0]=x;coadaY[0]=y;
    for(int i=1;i<nCoada;i++)
    {
        prev2x=coadaX[i];
        prev2y=coadaY[i];
        coadaX[i]=prevX;
        coadaY[i]=prevY;
        prevX=prev2x;
        prevY=prev2y;
    }
     switch(dir)
     {
     case LEFT:
         Sleep(100);x--;draw();
        break;
     case RIGHT:
         Sleep(100);x++;draw();
        break;
     case UP:
         Sleep(100);y--;draw();
        break;
     case DOWN:
         Sleep(100);y++;draw();
        break;
     default:
        break;
     }
     if(x>latime||x<0||y>inaltime||y<0)gameOver=true;
     for(int i=1;i<nCoada;i++)
           if(coadaX[i] == x && coadaY[i] == y )
              gameOver=true;
     if(x==fructaX&&y==fructaY){
            scor++;nCoada++;
         fructaX=rand() % latime;
         fructaY=rand() % inaltime;}
}
int main()
{
    setup();
    draw();
    while(!gameOver)
    {
        input();
        logic();
    }

    return 0;
}
