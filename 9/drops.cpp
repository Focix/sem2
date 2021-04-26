#include <iostream>
#include <cmath>
#include <iomanip>
int main(){

    int N;
    std::cin >> N;
    float R;
    R=0;
    double* p = new double[N];
    for (int i=0; i<N; ++i){
        std::cin >> p[i];
        R+=p[i]*p[i];
    }
    R=sqrt(R);
    std::cout<<std::fixed<<std::setprecision(4);
    std::cout << R;
    delete [] p;

    return 0;
}
