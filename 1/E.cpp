#include <iostream>
int main(){
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    int* pa;
    int* pb;
    pa = &a;
    pb = &b;
    std::cout << (pa, pb);
    return 0;
}
