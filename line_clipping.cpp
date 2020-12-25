#include <bits/stdc++.h>
using namespace std;
int main()
{
    float xmax,xmin,ymax,ymin;//area
    float x1,y1,x2,y2;//lines
    cout<<"screen area:";
    cin>>ymax>>ymin>>xmax>>xmin;
    cout<<"lines:";
    cin>>x1>>y1>>x2>>y2;
    int flag1,flag2;//line points region
    //first point
    if(x1<=xmax && x1>=xmin && y1<=ymax &&y1>=ymin)
    {
        flag1=1;//inside
    }
    else if(x1<xmin && y1>ymax)
    {
        flag1=2;
    }
     else if(x1>xmax && y1>ymax)
    {
        flag1=3;
    }
    else if(x1<xmin && y1<ymin)
    {
        flag1=4;
    }
    else if(x1>xmax && y1<ymin)
    {
        flag1=5;
    }
    else if(y1>ymax)
    {
        flag1=6;
    }
    else if(x1<xmin)
    {
        flag1=7;
    }
    else if(x1>xmax)
    {
        flag1=8;
    }
    else if(y1<ymin)
    {
        flag1=9;
    }
    //second point
    if(x2<=xmax && x2>=xmin && y2<=ymax &&y2>=ymin)
    {
        flag2=1;//inside
    }
    else if(x2<xmin && y2>ymax)
    {
        flag2=2;
    }
     else if(x2>xmax && y2>ymax)
    {
        flag2=3;
    }
    else if(x2<xmin && y2<ymin)
    {
        flag2=4;
    }
    else if(x2>xmax && y2<ymin)
    {
        flag2=5;
    }
    else if(y2>ymax)
    {
        flag2=6;
    }
    else if(x2<xmin)
    {
        flag2=7;
    }
    else if(x2>xmax)
    {
        flag2=8;
    }
    else if(y2<ymin)
    {
        flag2=9;
    }
    cout<<flag1<<" "<<flag2<<endl;

        return 0;
}
