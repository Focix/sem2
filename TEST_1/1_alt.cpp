#include <iostream>
int fact (int x){
    if (x==1){
        return x;
    }
    else{
        return x*fact(x-1);
    }
}

int main(){
    int n;
    std::cin >> n;
    std::cout << fact(n);
    return 0;
}

