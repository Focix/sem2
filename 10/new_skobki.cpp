#include <iostream>
#include <stack>
int main(){

    std::stack<char> s;
    char ch;
    while (std::cin.get(ch)){
        if ((ch=='(') or (ch=='[') or (ch=='{') or (ch=='<')){
            s.push(ch);
            }
        if ((ch==')') or (ch==']') or (ch=='}') or (ch=='>')){
            if(s.empty()){
                std::cout << "NO";
                break;
            }
            if((ch==')')and (s.top()=='(')){
                s.pop();
            }
            if((ch=='}')and (s.top()=='{')){
                s.pop();
            }
            if((ch==']')and (s.top()=='[')){
                s.pop();
            }
            if((ch=='>')and (s.top()=='<')){
                s.pop();
            }
        }
        }
    if(s.empty()){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}

