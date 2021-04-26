#include <iostream>

int main(){
    int x;
    std::cin >> x;
    if(x!=0){
        main();
    }
    std::cout << x<<' ';
    return 0;
}
