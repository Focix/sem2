#include <iostream>
long long fact(int x) {
    if (x<=1)
        return 1;
    return fact(x-1) * x;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fact(n);
    return 0;
}