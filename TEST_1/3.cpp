#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int* p = new int [n];
    for (int i=0; i<n; ++i){
        std::cin >> p[i];
    }
    int t;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n-i-1; ++j){
            if (p[j]<p[j+1]){
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
    if (n % 2 == 0){
        std::cout << p[n/2-1];
    }
    else {
        std::cout << p[n/2];
    }
    return 0;
}
