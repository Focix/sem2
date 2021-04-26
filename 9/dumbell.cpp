#include <iostream>
int main(){
    int N, M;
    std::cin >> N >> M;
    for (int i=0; i<M; ++i){
        std::cout << "|";
    }
    for (int i=0; i<N; ++i){
        std::cout << "=";
    }
    for (int i=0; i<M; ++i){
        std::cout << "|";
    }
    return 0;
}