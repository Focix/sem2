#include <iostream>

int main(){
    int N;
    std::cin >> N;
    float ** p= new float* [N];
    for (int i = 0; i < N; i++) {
        p[i] = new float [4];
    }
    for (int k=0; k<N; ++k){
        for (int i=0; i<3; ++i){
            std::cin >> p[k][i];
        }
        p[k][3] = p[k][0]*p[k][0]*p[k][1]*p[k][2];
    }
    int max=0;

    for (int i=1; i<N; ++i){
        if (p[i][3]>p[max][3]){
            max=i;
        }
    }

    std::cout << max;
    for (int i=0; i<N; ++i){
        delete [] p[i];
    }
    delete [] p;
    return 0;
}
