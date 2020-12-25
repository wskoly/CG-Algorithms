#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float m;
    if(x1!=x2)
    {
        m=(y2-y1)/(x2-x1);
        cout<<"slop:"<<m<<endl;
    }
    float c;
    c = y1- (m*x1);
    cout<<"constant:"<<c<<endl;
    float minx,maxx;
    if(x1<x2)
    {
      minx=x1;
      maxx=x2;
    }
        else
        {
            minx=x2;
            maxx=x1;
        }
        float y;
    for(float i=minx; i<=maxx; i++)
    {
        y=round(m*i+c);
        printf("pixel coordinates: %.0f %.0f\n",i,y);
    }
    return 0;
}
