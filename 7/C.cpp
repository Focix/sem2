#include <iostream>


int main(){
    int N;
    std::cin >> N;
    int* a = new int[N];
    int * b = new int[N];
    for (int i=0; i<N; ++i){
        std::cin >> a[i];
    }
    for (int i=0; i<N; ++i){
        if (i-1<0) {
            b[i] = (a[N - 1] + a[i] + a[i + 1]) / 3;
            continue;
        }
        if (i+1>N-1) {
            b[i] = (a[i - 1] + a[i] + a[0]) / 3;
            continue;
        }
        b[i]=(a[i-1]+a[i]+a[i+1])/3;

    }
    for (int i=0; i<N; ++i){
        std::cout << b[i]<<" ";
    }
    delete[] a;
    delete[] b;
    return 0;
}