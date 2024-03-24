#include <math.h>
#include <iostream>
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

int main()
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

    return 0;
}
