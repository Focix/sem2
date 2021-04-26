#include <iostream>
int main(){
    int N;
    int M;
    int K;
    std::cin >> N;
    std::cin >> M;
    std::cin >> K;
    int *p1 = new int[K];
    int *p2 = new int[K];
    for(int i=0; i<K; i++){
        std::cin >> p1[i];
        std::cin >> p2[i];
    }
    int mas[100][100];
    for (int i=0; i<=N+1; i++) {
        for (int j = 0; j <= M + 1; j++) {
            mas[i][j] = 0;
        }
    }

    for(int i=0; i<K; i++){
        mas[p1[i]][p2[i]]=-1;
    }


        for (int i=1; i<=N; i++){
            for (int j=1; j<=M; j++){
            if (mas[i][j]!=-1){
                if(mas[i-1][j-1]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i-1][j]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i-1][j+1]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i][j+1]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i][j-1]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i+1][j-1]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i+1][j]==-1) {
                    mas[i][j] += 1;
                }
                if(mas[i+1][j+1]==-1) {
                    mas[i][j] += 1;
                }

                }
            }
        }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++) {
            std::cout << mas[i][j]<<' ';
        }
        std::cout << '\n';
    }

    delete[] p1;
    delete[] p2;
    }



