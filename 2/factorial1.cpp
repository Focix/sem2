#include <iostream>
void factorial(int n) {
    long long fac=1;
    for (int i = 1; i <= n; i++){
        fac = fac * i;
    }
    std::cout << fac;
}
int main() {
    int x;
    std::cin >> x;
    factorial(x);
    return 0;
}
