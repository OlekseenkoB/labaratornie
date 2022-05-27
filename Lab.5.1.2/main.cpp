#include <iostream>
#include <string>
using namespace std;


class Square
{
private:
    double side;
    double area;
public:
    void print();
    void setSide(double side) {
        if (side <= 0)
        {
            cout << "Value less then 0!" << endl;
        }
        else
        {

            this->side = side;
            this->area = side * side;

        }
    }
};

void Square::print() {
    cout << "Сторона =\t" << this->side << "\t Площадь =" << this->area << endl << endl;
}


int main() {
    setlocale(LC_ALL, "rus");

    Square side;

    side.setSide(13.5);
    side.print();

    side.setSide(3.44);
    side.print();

    side.setSide(0.);
    side.print();


}