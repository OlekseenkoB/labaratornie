#include <iostream>
#include <string>
using namespace std;

class AdHocSquare
{
public:

    void set_side(double side);
    double get_area();

    void print() {
        cout << "Площадь  AdHocSquare: " << get_area() << endl;
    }
private:

    double side;

};
//вынесенный метод класса AdHocSquare
void AdHocSquare::set_side(double side)
{
    this->side = side;
}
//вынесенный метод класса AdHocSquare
double AdHocSquare::get_area()
{
    return side * side;
}



class LazySquare
{
public:
    void set_side(double side);
    double get_area();
    void sideChange(bool change);
    void print() {
        cout << "Площадь LazySquare: " << get_area() << endl;
    }
private:
    double side;
    double area;
    bool side_changed;
};



//вынесенный метод класса LazySquare
void LazySquare::set_side(double side)
{
    this->side = side;
}
//вынесенный метод класса LazySquare
double LazySquare::get_area() {
    if (side_changed == true)
    {
        this->area = side * side;
        return area;
    }
    else {
        return NULL;

    }
}
//вынесенный метод класса LazySquare
void LazySquare::sideChange(bool change) {
    this->side_changed = change;
}




int main()
{
    setlocale(LC_ALL, "rus");


    AdHocSquare AdHoc;
    AdHoc.set_side(24.0);
    AdHoc.print();

    LazySquare Lazy;
    Lazy.set_side(-5.34);
    Lazy.sideChange(true);//change on true
    Lazy.print();

    LazySquare VeryLazy;
    VeryLazy.set_side(220.16);
    VeryLazy.sideChange(false);//change on false
    VeryLazy.print();
    return 0;

}