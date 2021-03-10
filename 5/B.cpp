#include <stack>
#include <iostream>
#include <string>
int main(){
    std::string polish;
    std::string chislo;
    chislo = "";
    std::getline(std::cin, polish);
    std::stack <int> s;
    int i = 0;
    int a;
    int b;
    while (i <= polish.size()){
        if ((polish[i]<='9') && (polish[i]>='0')){
            while (polish[i] != ' '){
               chislo+=polish[i];
               ++i;
            }
            a =std::stoi(chislo);
            chislo="";
            s.push(a);
        }
        if ((polish[i]=='-')&&((polish[i+1]<='9') && (polish[i+1]>='0'))){
            while (polish[i] != ' '){
                ++i;
                chislo+=polish[i];
            }
            a =std::stoi(chislo);
            chislo="";
            s.push(-a);
        }
        if (polish[i]=='*'){
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(a*b);
        }
        if (polish[i]=='/'){
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b/a);
        }
        if (polish[i]=='+'){
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(a+b);
        }
        if ((polish[i]=='-')&&!((polish[i+1]<='9') && (polish[i+1]>='0'))){
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b-a);
        }
        i+=1;
    }
    a = s.top();
    std::cout << a;

return 0;
}