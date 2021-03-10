#include <queue>
#include <iostream>
#include <string>
int main() {
    std::deque<int> q;
    int N;
    std ::string x;
    std ::string chislo;
    chislo = "";
    std::cin >> N;
    for(int i=0; i<=N; i++) {
        std::getline(std::cin, x);
        if (x[0] == '+') {
            int j = 2;
            while ((x[j] <='9') && (x[j]>='0')) {
                chislo += x[j];
                ++j;
            }
            q.push_back(std::stoi(chislo));
            chislo = "";
        }
        if (x[0] == '-'){
            std::cout << q.front() << "\n";
            q.pop_front();
        }
        if (x[0] == '*'){
            int j = 2;
            while ((x[j] <='9') && (x[j]>='0')) {
                chislo += x[j];
                ++j;
            }
            if(q.size() % 2 ==0){
                q.insert(q.begin()+q.size()/2,std::stoi(chislo));
            }
            else if(q.size() % 2 !=0){
                q.insert(q.begin()+q.size()/2+1,std::stoi(chislo));
            }
            chislo = "";
        }
    }
    return 0;
}