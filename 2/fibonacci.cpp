#include <iostream>
int mas[10000] = {0};
long long fib(int x) {
    if (mas[x]>0)
        return mas[x];
   return mas[x] = mas[x-1] + mas[x-2];

}

int main() {
    int n;
    std::cin >> n;
    mas[1] = 1;
    mas[2] = 1;
    for (int i = 1; i <= n; i++)
        std::cout << fib(i) << ' ';
    return 0;
}