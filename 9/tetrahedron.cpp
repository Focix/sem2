#include <iostream>
#include <iomanip>
int main(){
    float x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
    std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
    float V, a1, a2, a3, a4, a5, a6, a7, a8, a9;
    a1 = x2 - x1;
    a2 = y2 - y1;
    a3 = z2 - z1;
    a4 = x3 - x1;
    a5 = y3 - y1;
    a6 = z3 - z1;
    a7 = x4 - x1;
    a8 = y4 - y1;
    a9 = z4 - z1;
    V=((a1*a5*a9+a2*a6*a7+a4*a8*a3)-(a3*a5*a7+a2*a4*a9+a6*a8*a1))/6;
    if (V<0){
        V=-V;
    }

    std::cout <<std::fixed<<std::setprecision(4)<< V;

    return 0;
}
