#include <iostream>

int main(){
    int N, M;
    std::cin>> N;
    std::cin>>M;
    for (int i=0; i<N; ++i){
        for (int j=0; j<M; ++j){
            if (i==0 or i==N-1){
                std::cout<<"*";
            }
            else{
                if(j==0 or j==M-1){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }
        }
        std::cout<<'\n';
    }
    return 0;
}


