#include <iostream>

void merge(int *k, int *l, int *m){
    int size= m - k;
    int *n = new int[size];
    for (int i=0; i<size; ++i){
        if (*k < *l){
            *n=*k;
            k+=1;
            n+=1;
        }
        if (*k>*l){
            *n=*l;
            l+=1;
        }
        if (*k=*l){
            *n=*k;
            k+=1;
            n+=1;
            *n=*l;
            l+=1;
            n+=1;
        }
    }
}

int main(){

    return 0;
}
