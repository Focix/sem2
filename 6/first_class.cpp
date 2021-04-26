#include <iostream>


class vector2d{
public:

    vector2d(int x = 0, int y = 0):x(x), y(y){
        std::cout << "created";
        print();
        std::cout <<"\n";
        // this->x = x;
        // this->y = y;
    }
    void print() const { // const значит не меняет объекта, значит можно  вызывать для константных объектов
        std::cout<< "(" << x <<","<< " " << y << ")"<<"\n";
    }

    vector2d add(const vector2d& v1) const{
        return vector2d(x+v1.x, y + v1.y);
    }
    vector2d operator+(const vector2d& v1) const{
        return vector2d(x+v1.x, y + v1.y);
    }

    vector2d operator*(int a)const{
        return vector2d(x * a, y * a);
    }
    int x, y;
};

vector2d operator-(const vector2d& v1, const vector2d& v2) {
    return vector2d(v1.x - v2.x, v1.y - v2.y);
}

vector2d operator* (int a, const vector2d& v) {
    return v * a;
}

std::ostream& operator<<(std::ostream& out, const vector2d v) {
    out<< "(" << v.x <<","<< " " << v.y << ")"<<"\n";
    return out;
}

int main(){

    vector2d v(42,21);
    std::cout << v;

    const vector2d vc(5, 5);
    std::cout << vc;
    vector2d v4 = v + vc;

    vector2d v5 = v - v4;

    vector2d v6 = 3 * v5;
    vector2d v7 = v5 * 3;
    return 0;
}