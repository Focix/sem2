#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int sum;
    sum=0;
    int* p = new int [N];
    for (int i=0; i<N; ++i){
        std::cin >> p[i];
        sum+=p[i];
    }
    int M;
    std::cin>>M;
    int* goblins = new int [M];
    for (int i=0; i<M; ++i){
        goblins[i]=0;
    }
    int bez_monet=M;
    int i=2;
    int k=0;
    int indeks=-1;
    while (sum>-1){
        if(bez_monet==0){
            std::cout << "YES" << " " << sum;
            break;
        }
        if(p[k]==0){
            i+=1;
            if(sum==0){
                std::cout << "NO" << " " << bez_monet;
                break;
            }
            else{
                k+=1;
                continue;
            }
        }
        indeks=(indeks+i)% M;
        goblins[indeks]+=1;
        if(goblins[indeks]==1){
            bez_monet-=1;
        }
        p[k]-=1;
        sum-=1;
    }

    delete [] p;
    delete [] goblins;
    return 0;
}
