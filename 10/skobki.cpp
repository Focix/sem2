#include <iostream>

int main(){
    char ch;
    int open=0;
    int close=0;
    while (std::cin.get(ch)){
        if (ch=='('){
            open+=1;
        }
        if (ch==')'){
            close+=1;
        }
        if (close>open){
            std::cout << "NO";
            break;
        }

    }
    if (close==open){
        std::cout << "YES";
    }
    if (open > close){
        std::cout <<"NO";
    }

    return 0;
}

