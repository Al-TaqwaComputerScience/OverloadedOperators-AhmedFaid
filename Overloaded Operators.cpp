#include <cmath>
#include <iostream>

using namespace std;

class Coords{
    public:
    int x;
    int y;

//Overloaded Coords equal operator
Coords operator= (Coords rhs){
        this->x = rhs.x;
        this->y = rhs.y;
    }
};

//Overloaded Coords addition operator
float operator+ (Coords lhs, Coords rhs){
    float z;
    z = sqrt(pow(rhs.x - lhs.x ,2) + pow(rhs.y - lhs.x, 2));

    return z;
}

//Overloaded Coords subtraction operator
float operator- (Coords lhs, Coords rhs){
    float z;
    z = sqrt(pow(rhs.x - lhs.x ,2) + pow(rhs.x - lhs.x ,2));

    return z;
}

//Increases x value of coord by one
Coords operator++ (Coords coord){
    coord.x++;

    return coord;
}

//Decreases x value of coord by one
Coords operator-- (Coords coord){
    coord.x++;

    return coord;
}


//Overloaded Coords output operator
std::ostream& operator<<(std::ostream& output, const Coords& coord){

    output<< "(" << coord.x << ", " << coord.y << ")";
    return output;
}

//Overloaded Coords input operator
std::istream& operator>>(std::istream &input, Coords& coord){

    input>> coord.x >> coord.y;
    return input;
}

int main(){


    return 0;
}
