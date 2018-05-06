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

//Increases y value of coord by one
Coords operator++ (){
    this->y++;

    return *this;
    }

//Decreases x value of coord by one
Coords operator-- (){
    if(this->y > 0)
    this->y--;

    return *this;
}

};

//Overloaded Coords addition operator
Coords operator+ (Coords lhs, Coords rhs){
    Coords z;
    z.x = lhs.x + rhs.x;
    z.y = lhs.y + rhs.y;

    return z;
}

//Overloaded Coords subtraction operator
Coords operator- (Coords lhs, Coords rhs){
    Coords z;
    z.x = lhs.x - rhs.x;
    z.y = lhs.y - rhs.y;

    return z;
}

//Increases x value of coord by one
Coords operator++ (Coords coord){
    coord.x++;

    return coord;
}

//Decreases x value of coord by one
Coords operator-- (Coords coord){
    if(coord.x > 0)
    coord.x--;

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

Coords operator* (int num, Coords coord){
    Coords newCoord;

    newCoord.x = num*coord.x;
    newCoord.y = num*coord.y;

    return newCoord;
}

int operator* (Coords lhs, Coords rhs){
    int dotProduct;
    dotProduct = lhs.x*rhs.x + lhs.y*rhs.y;

    return dotProduct;
}

bool operator < (Coords &coord, const Coords rhs){
        float mag1, mag2;
        mag1 = sqrt(pow(coord.x, 2)+pow(coord.y, 2));
        mag2 = sqrt(pow(rhs.x, 2)+pow(rhs.y, 2));

        if(mag1 < mag2)
            return true;

        if(mag1 > mag2)
            return false;

        if(mag1 == mag2)
            return false;

}

bool operator > (Coords &coord, const Coords rhs){
    float mag1, mag2;
    mag1 = sqrt(pow(coord.x, 2)+ pow(coord.y, 2));
    mag2 = sqrt(pow(rhs.x, 2) + pow(rhs.y, 2));

    if(mag1 > mag2)
        return true;

    else
        return false;

}

bool operator == (Coords &coord, const Coords rhs){
    float mag1, mag2;
    mag1 = sqrt(pow(coord.x, 2) + pow(coord.y, 2));
    mag2 = sqrt(pow(rhs.x, 2) + pow(rhs.y, 2));

    if(mag1 == mag2)
        return true;

    else
        return false;

}

int main(){


    return 0;
}
