#include <iostream>
#include <iomanip>
int main(){
    int n;
    float s;
    int x;
    std::cin >> n;
    for (int i=0; i<n; ++i){
        std::cin >> x;
        s+=x;
    }
    std::cout <<std::fixed<<std::setprecision(10)<< s/n;
    return 0;
}

