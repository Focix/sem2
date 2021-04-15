#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int* p = new int[n];
    int first_point = 0;
    int second_point = 1;
    for (int i=0; i<n; ++i){
        std::cin >> p[i];
    }
    if (p[first_point]>p[second_point]){
        first_point=1;
        second_point=0;
    }
    int min = p[second_point]-p[first_point];
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (i!=j){
                if (abs(p[i]-p[j])<min){
                    if (p[i]<=p[j]){
                        first_point=i;
                        second_point=j;
                    }
                    if (p[i]>p[j]){
                        first_point=j;
                        second_point=i;
                    }
                    min = p[second_point]-p[first_point];
                }
                if (abs(p[i]-p[j]) == min) {
                    if ((p[i]<=p[j]) and (p[i]<p[first_point])){
                        first_point=i;
                        second_point=j;
                    }
                    if ((p[i]>p[j])and (p[j]<p[first_point])){
                        first_point=j;
                        second_point=i;
                    }
                }
            }
        }
    }
    std::cout << first_point+1<<' '<< second_point+1;
    delete[] p;
    return 0;
}

