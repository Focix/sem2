#include <iostream>


int main() {
    int N;
    std::cin >> N;
    int *a = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                int x = a[j - 1];
                a[j - 1] = a[j];
                a[j] = x;
            }
        }
    }
    for (int i=0; i<N; i++){
        std::cout << a[i]<<" ";
    }
    delete[] a;
    return 0;
}