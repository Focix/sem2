#include <iostream>


int main(){
    int N;
    std::cin >> N;
    int M;
    std::cin >> M;
    int* a = new int[N];
    for (int i=0; i<N; ++i){
        std::cin >> a[i];
    }
    M = M % N;
    int* b = new int[M];
    for (int i=0; i<M; ++i){
        b[i]=a[i];
    }
    for (int i=M; i<N; ++i){
        a[i-M]=a[i];
    }
    for (int i=N-M; i<N; ++i){
        a[i]=b[i-N+M];
    }
    for (int i=0; i<N; ++i){
        std::cout << a[i]<<" ";
    }
    delete[] a;
    delete[] b;
    return 0;
}
