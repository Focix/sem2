#include <iostream>
#include "cstdlib"
#include <ctime>

int* generate(int n, int x){
    srand(x);
    int* p = new int[n];
    for (int i=0; i<n; ++i){
        *(p+i)=rand() % 10;
    }
    return p;
}

int* search(int* start, int* end, int x){
    while (start!=end){
        if (*start == x){
            return start;
        }
        else{
            start+=1;
        }
    }
    return nullptr;
}

int* binsearch_cycle (int* start, int* end, int x){
    int* mid = start + (end-start)/2;
    while ((end-start)!=1){
        if (x>*mid){
            start=mid;
            mid = start + (end-start)/2;
        }
        if (x<*mid){
            end=mid;
            mid = start + (end-start)/2;
        }
        if (x==*mid){
            return mid;
        }
    }
    return nullptr;
}

int* binsearch_recursion(int* start, int* end, int x){
    int* mid = start + (end-start)/2;
    if (x>*mid){
        return binsearch_recursion(mid, end, x);
    }
    if (x<*mid){
        return binsearch_recursion(start, mid, x);
    }
    if (x==*mid){
        return mid;
    }
}

void selection_sort_cycle(int* start, int* end){
    int swap;
    int* min;
    int size=end-start;
    for(int i=0; i<size; ++i) {
        min = start;
        for (int j = 1; j < (end-start); ++j) {
            if (*(start + j) < *min) {
                min = start + j;
            }
        }
        swap = *min;
        for (int j = 0; j < (min - start); ++j) {
            *(min - j) = *(min - j - 1);
        }
        *start = swap;
        start += 1;
    }
}

void selection_sort_recursion(int * start, int* end){
    int swap;
    int* min;
    min = start;
    for (int j = 1; j < (end-start); ++j) {
        if (*(start + j) < *min) {
            min = start + j;
            }
    }
    swap = *min;
    for (int j = 0; j < (min - start); ++j) {
        *(min - j) = *(min - j - 1);
    }
    *start = swap;
    start += 1;
    if ((end-start)!=1) {
        selection_sort_recursion(start, end);
    }
}

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
        if (k=l){
//нужно дописать
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    int *p=generate(n, time(0));
    for (int i=0; i<n; ++i){
        std::cout << *(p+i)<<' ';
    }
    std::cout << '\n';
    selection_sort_recursion(p, p+n);
    for (int i=0; i<n; ++i){
        std::cout << *(p+i)<<' ';
    }
    return 0;
}

