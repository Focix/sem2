#include <iostream>

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

    return 0;
}
