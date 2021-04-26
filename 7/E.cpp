#include <iostream>
int main() {
    int N;
    std::cin >> N;
    int *a = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i; j <N; j++) {
            if (a[j]<0) {
                int x = j+1;
                while (a[x]>=0){
                    ++x;
                    if (x>=N) {
                        x=-1;
                        break;
                    }
                }
                if ((x!=-1) and (a[x]>a[j])){
                    int obmen = a[j];
                    a[j]=a[x];
                    a[x]=obmen;
                    for (int k=0; k<N; k++){
                        std::cout << a[k]<<" ";
                    }
                    std::cout<<"\n";
                }
            }
            if (a[j]>=0){
                int x = j+1;
                while (a[x]<0){
                    ++x;
                    if (x>=N) {
                        x=-1;
                        break;
                    }
                }
                if ((x!=-1) and (a[x]<a[j])){
                    int obmen = a[j];
                    a[j]=a[x];
                    a[x]=obmen;
                    for (int k=0; k<N; k++){
                        std::cout << a[k]<<" ";
                    }
                    std::cout<<"\n";
                }
            }

        }
    }
    delete[] a;
    return 0;
}

