#include <iostream>
int main(){
    int symbols[256]={0};
    char c;
    while (std::cin.get(c)){
        ++symbols[c];
    }

    for(int i=0; i< 256; ++i){
        std::cout<<"'"<<(char) i << "':"<<i<<":"<<symbols[i]<<"\n";
    }
    return 0;
}
