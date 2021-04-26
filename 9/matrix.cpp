#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            std::cin >> A[i][j];
        }
    }
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            std::cin >> B[i][j];
        }
    }
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            C[i][j]=0;
        }
    }
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            for (int k=0; k<N; ++k){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            std::cout << C[i][j]<<" ";
        }
        std::cout <<'\n';
    }
    return 0;
}

