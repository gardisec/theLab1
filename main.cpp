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


    float lenRect, widthRect; //12321312

    cout << "Len rectangle: " ; // Ввод данных10

    cin >> lenRect;
    cout <<  "\nWidth rectangle: "; //123
    cin >> widthRect;
    cout << "\n";

    cout << "Perimeter rectangle: " << perimeter(lenRect, widthRect) << "\n"; // Вывод периметра
    cout << "Square rectangle: " << square(lenRect, widthRect) << "\n"; //Вывод площади
    cout << "Dioganal rectangle: " << diagonal(lenRect, widthRect) << "\n"; // Вывод диагонали
}

float perTriang(float side_1, float side_2, float side_3) { // Периметр треугольника
    return (side_1 + side_2 + side_3);
}

float areaTriang(float side_1, float side_2, float side_3, float perimeter) // Площадь треугольника
{
    return sqrt((perimeter / 2) * (perimeter / 2 - side_1) * (perimeter / 2 - side_2) * (perimeter / 2 - side_3));
}

int isoTriang(float side_1, float side_2, float side_3) // Проверка треугольник на равнобедренность
{
    if ((side_1 == side_2) || (side_2 == side_3) || (side_1 == side_3)) return 1;
    return 0;
}

void triangle() //всё для треугольника
{
    float firstSide, secondSide, thirdSide; // Стороны треугольника
    cout << "Enter the sides of the triangle: \n";
    cin >> firstSide >> secondSide >> thirdSide;

    if (((firstSide + secondSide < thirdSide) || (firstSide + thirdSide < secondSide) || (secondSide + thirdSide < firstSide)) || (firstSide < 1 || secondSide < 1 || thirdSide < 1)) // Проверка параметров треугольника
    {
        cout << "There is no triangle with these sides" << endl; // Такого треугольника нет
    }
    else
    {
        float perimeter = perTriang(firstSide, secondSide, thirdSide);
        cout << "Perimeter of triangle: " << perimeter << endl;
        cout << "Area of Triangle: " << areaTriang(firstSide, secondSide, thirdSide, perimeter) << endl;
        if (isoTriang(firstSide, secondSide, thirdSide) == 1)
        {
            cout << "This is an isosceles triangle";
        }
        else
        {
            cout << "This is not an isosceles triangle";
        }
    }
}


float circumferenceFind(float rad, const float PI) //длина окружности
{
    float circumference = 2 * rad * PI;
    return circumference;
}


float areaCircle(float rad, const float PI) //площадь круга
{
    float area = rad * rad * PI;
    return area;
}


float sectorAreaFind(float rad, float sector, const float PI) //площадь сектора круга
{
    float area = sector/360.0 * areaCircle(rad, PI);
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
            rectangle(); 
            break;
        case('2'): // Треугольник
            triangle();
            break;
        case('3'): // Круг
            circle();
            break;
    
    default: // Ошибка при выборе несуществующей фигуры
        cout << "Please enter a valid number" << endl;
    }
    return 0;
}