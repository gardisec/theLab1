#include <iostream>
#include <math.h>
using namespace std;


float perimeter(float length, float width) // Вычисляет периметр прямоугольника
{
    return (2* (length + width));
}


float square(float length, float width) // Вычисляет площадь прямоугольника
{
    return (length * width);
}


float diagonal(float length, float width) // Вычисляет диагональ прямоугольника
{
    return  sqrt(pow(length, 2) + pow(width, 2));
}


void rectangle() //всё для прямоугольника
{
    float lenRect, widthRect;
    cout << "Len rectangle: " ; // Ввод данных10

    cin >> lenRect;
    cout <<  "\nWidth rectangle: ";
    cin >> widthRect;
    cout << "\n";

    cout << "Perimeter rectangle: " << perimeter(lenRect, widthRect) << "\n"; // Вывод периметра
    cout << "Square rectangle: " << square(lenRect, widthRect) << "\n"; //Вывод площади
    cout << "Dioganal rectangle: " << diagonal(lenRect, widthRect) << "\n"; // Вывод диагонали
}


void triangle() //всё для треугольника
{

}


float circumferenceFind(float rad, const float PI) //длина окружности
{
    float circumference = rad * PI;
    return circumference;
}


float areaCircle(float rad, const float PI) //площадь круга
{
    float area = rad * rad * PI;
    return area;
}


float sectorAreaFind(float rad, float sector, const float PI) //площадь сектора круга
{
    float area = sector/360.0 * areaCircle(radius, PI)
    return area;
}


void circle(){ //всё для круга
    const float PI = 3.14159265369;
    cout << "Enter the radius of the circle" << endl;
    float radius;
    cin >> radius;
    cout << "Enter a sector of the circle in degrees" << endl;
    float sector;
    cin >> sector;
    if (sector < 0 || sector > 360)
    {
        while (sector < 0 || sector > 360)
        {
            cout << "Enter the correct value, the sector must be in the range from 0 to 360" << endl;
            cin >> sector;
        }
    }
    float circumference = circumferenceFind(radius, PI);
    cout << "Circumference of circle = " << circumference << endl;
    float area = areaCircle(radius, PI);
    cout << "Area of a circle = " << area << endl;
    float sectorArea = sectorAreaFind(radius, sector, PI);
    cout << "Area of a sector of a circle = " << sectorArea << endl;
}


int main()
{
    cout << "Choose a shape" << endl << "1 - Rectangle" << endl << "2 - Triangle" << endl << "3 - circle" << endl;
    char figure;
    cin >> figure;
    switch (figure) { // Выбор фигуры
        case('1'): // Прямоугольник:
            triangle();
            break;
        case('2'): // Треугольник
            rectangle();
            break;
        case('3'): // Круг
            circle();
            break;
    }
    default: // Ошибка при выборе несуществующей фигуры
        cout << "Please enter a valid number" << endl;
}
return 0;
}