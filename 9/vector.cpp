#include <iostream>

struct vect{

    int x;
    int y;
    int z;

};
vect sum(vect v1, vect v2){
    return vect{v1.x+v2.x, v1.y+v2.y, v1.z+v2.z};
}

int main(){

    vect v1{2, 3, 4};
    vect v2{1, 3, 4};
    vect v3 = sum(v1, v2);
    std::cout<<v3.x<<v3.y<<v3.z;


    return 0;
}