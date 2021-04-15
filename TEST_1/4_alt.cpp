#include <iostream>
#include <algorithm>
int main(){
    int n;
    std::cin >> n;
    int* p = new int[n];
    int* d = new int[n];
    for (int i=0; i<n; ++i){
        std::cin >> p[i];
        d[i]=p[i];
    }
    std::sort(p, p+n);
    int first_point = 0;
    int second_point = 1;
    int min = p[1]-p[0];
    for (int i=1; i<n-1; ++i){
        if ((p[i+1]-p[i])<min){
            first_point=i;
            second_point=i+1;
            min = p[second_point] - p[first_point];
        }
    }
    for (int i = 0; i<n; ++i){
        if ((d[i]==p[first_point]) and (first_point!=-1)){
            std::cout << i+1<<' ';
            first_point = -1;
        }
        if ((d[i]==p[second_point]) and (second_point!=-1)){
            std::cout << i+1<<' ';
            second_point = -1;
        }
        if ((second_point==-1) and (first_point==-1)){
            break;
        }
    }
    delete[] p;
    return 0;
}


