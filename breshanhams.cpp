#include<bits/stdc++.h>
#include<graphics.h>
using  namespace std;
int main()
{
    int gd= DETECT, gm;
    int x1,y1,x2,y2,p;
    cout<<"Enter the starting point";
    cin>>x1>>y1;
    cout<<"Enter the ending point";
    cin>>x2>>y2;
    initgraph(&gd, &gm," ");

    int dx = x2-x1, dy= y2-y1;
    p = 2 *(dy) - dx ;

    int x = x1, y =y1;

    while(x<=x2)
    {
        if (p<0)
        {
            putpixel(x,y,BLUE);
            x++;
            p= p+2*(dy);
        }
        else
        {
            putpixel(x,y,RED);
            y++;
            x++;
            p = p+ 2*dy - (2*dx);
        }
    }
    getch();

    closegraph();
}

