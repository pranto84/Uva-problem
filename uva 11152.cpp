#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>

#define pi acos(-1)

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double a, b, c;
    double s, R_C, r_i;                 // R_C = radius of Circumcircle of a triangle
    double  area_t, area_C, area_i;
    while(cin >> a >> b >> c){
        s = (a+b+c) * .5;
        area_t = sqrt(s*(s-a)*(s-b)*(s-c));
        R_C = (a*b*c) / ( 4 * area_t);
        area_C = pi * R_C * R_C;
        r_i = area_t / s;
        area_i = pi * r_i * r_i;
        double sunflower = area_C - area_t;
        double violate = area_t - area_i;
        double rose = area_i;
        printf("%.4lf %.4lf %.4lf\n", sunflower, violate, rose);
    }

    return 0;
}
