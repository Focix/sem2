#include <iostream>
int main() {
    int x;
    float sum = 0;
    int count = 0;
    std::cin >> x;
    int mas[1000]={0};
    for (int i=0; i<x; i++){
        std::cin >> mas[i];
        sum += mas[i];
    }
    sum = sum /x;
    for (int i=0; i<x; i++){
        if (mas[i] > sum)
            count+=mas[i];
    }
    std::cout << count;
    return 0;
}
