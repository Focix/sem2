#include <stack>
#include <iostream>
#include <string>
#include <math.h>
int main () {
    int x;
    std::string polish;
    std::getline(std::cin, polish);
    std::stack<int> s;
    std::string chislo;
    chislo = "";
    int i = 0;
    int a;
    while (i <= polish.size()) {
        if ((polish[i] <= '9') && (polish[i] >= '1')) {
            while (polish[i] != ' ') {
                chislo += polish[i];
                ++i;
            }
            --i;
            a = std::stoi(chislo);
            chislo = "";
            s.push(a);
        }
        if ((polish[i] == '-') && ((polish[i + 1] <= '9') && (polish[i + 1] >= '1'))) {
            while (polish[i] != ' ') {
                ++i;
                chislo += polish[i];
            }
            a = -std::stoi(chislo);
            if (!s.empty()) {
                if (s.top() + a > 0) {
                    a = s.top() + a;
                    s.pop();
                    s.push(a);
                }
                else
                    s.pop();
            }
            chislo = "";

        }
        ++i;
    }
    if (s.empty())
        std::cout <<s.size()<<' '<<-1;
    else
        std::cout <<s.size()<<' '<<s.top();
    return 0;
}