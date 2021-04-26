#include <iostream>
int main(){
    char ch;
    int count=0;
    char A[128];
    double B[128];
    for (int i=0; i<128; ++i){
        A[i]=(char)i;
        B[i]=0;
    }
    while (std::cin.get(ch)){
        count+=1;
        for(int i=0; i<128; ++i){
            if (ch==A[i]){
                B[i]+=1;
            }
        }
    }
    int t;
    char swap;
    for (int i=0; i<127; ++i){
        for (int j=0; j<128-i-1; ++j){
            if (B[j]<B[j+1]){
                t=B[j];
                B[j]=B[j+1];
                B[j+1]=t;
                swap=A[j];
                A[j]=A[j+1];
                A[j+1]=swap;
            }
        }
    }
    for (int i=0; i<128; ++i){
        if (B[i]!=0){
            std::cout <<'"'<< A[i]<<'"'<<' '<<B[i]/count<<'\n';
        }
    }
    return 0;
}

