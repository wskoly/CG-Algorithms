#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x1,y1,r,rad;
    cin>>x1>>y1>>r;

    for(int i=0; i<360; i++)
    {
        rad=(i*M_PI)/180;
       float xc=round((r*cos(rad))+x1);
       float yc=round((r*sin(rad))+y1);
       printf("pixel coordinates: %.0f %.0f\n",xc,yc);
    }
    return 0;
}
