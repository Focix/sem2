#include <iostream>
struct StrangeMatrix {
    int first_line[3];
    int second_line[3];
    int third_line[3];
};
StrangeMatrix transpose(StrangeMatrix m){
    return StrangeMatrix{{m.first_line[0], m.second_line[0], m.third_line[0]}, {m.first_line[1],m.second_line[1], m.third_line[1]}, {m.first_line[2], m.second_line[2], m.third_line[2]}};
}
int main(){
    StrangeMatrix m {{1,2,3}, {4, 5, 6}, {7, 8, 9}};
    StrangeMatrix m1 = transpose(m);
    std::cout<< m1.first_line[2];
    return 0;
}
