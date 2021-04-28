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



int main(){
    int n;
    int m;
    std::cin >> n>>m;
    int *p1=generate(n, time(0));
    int *p2=generate(m, time(0));
    for (int i=0; i<n; ++i){
        std::cout << *(p1+i)<<' ';
    }
    std::cout << '\n';
    selection_sort_recursion(p1, p1+n);
    for (int i=0; i<n; ++i){
        std::cout << *(p1+i)<<' ';
    }
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    for (int i=0; i<m; ++i){
        std::cout << *(p2+i)<<' ';
    }
    std::cout << '\n';
    selection_sort_recursion(p2, p2+m);
    for (int i=0; i<m; ++i){
        std::cout << *(p2+i)<<' ';
    }
    return 0;
}

