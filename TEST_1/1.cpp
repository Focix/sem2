#include <iostream>

int main(){
    int n;
    int s;
    s=1;
    std::cin >> n;
    for (int i=1; i<=n; ++i){
        s=s*i;
    }
    std::cout << s;
    return 0;
}
