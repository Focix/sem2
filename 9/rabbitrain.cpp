#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int* passengers = new int [N];
    int* rabbits = new int [N];
    for (int i=0; i<N; ++i){
        std::cin >> passengers[i];
        std::cin >> rabbits[i];
    }
    int M;
    std::cin >> M;
    int k=0;
    int count =0;
    int peresadit = 0;
    while (k<N/2){
        if (rabbits[k]!=0){
            peresadit = rabbits[k];
            rabbits[k]=0;
            for (int i=k+1; i<N; ++i){
                if (i == N - 1){
                    rabbits[i]+=peresadit;
                }
                else {
                        if (peresadit >= M - passengers[i] - rabbits[i]) {
                            count = M - passengers[i] - rabbits[i];
                            rabbits[i] += count;
                            peresadit -= count;
                        } else {
                            rabbits[i] += peresadit;
                            peresadit = 0;
                            break;
                        }


                }

            }
        }
        k+=1;
    }
    for (int i=0; i<N; ++i){
        std::cout << passengers[i]<<" "<<rabbits[i] <<'\n';
    }
    delete [] passengers;
    delete [] rabbits;
    return 0;
}