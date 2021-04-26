#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    float H, V;
    std::cin >> H >> V;
    float t;
    t = sqrt(2*H/9.81);
    float x;
    x = V * t;
    std::cout<<std::fixed<<std::setprecision(4)<<x;


    return 0;
}

