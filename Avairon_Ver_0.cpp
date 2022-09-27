// laboratory_1_Avairon.cpp, работу сделал Липский.Н.А. Вариант 2

#include <iostream>

int a;
int b;
int c;

float First(float m1, float m2, float d)
{
    return 6.67*10^-11*((m1*m2)/d^2) // возврат с подсчетом, О(н): (ввод) + (подсчет) + (вывод) = 3
}

float Second(float x1, float x2, float y1, float y2)
{
    float res;
    float x;
    float y;

    if (x1 > x2)
    {
        x = x1 - x2;
    }
    else
    {
        x = x2 - x1;
    }

    if (y1 > y2) { y = y1 - y2; }
  
    else { y = y2 - y1; }
    
    return (x ^ 2 + y ^ 2) ^ 0.5; // возврат с подсчетом, О(н): (ввод) + (подсчет) + (подсчет) + (подсчет) + (вывод) = 5
}

void Third(int x)
{
    int Mbi = x / 1048576;
    int Kbi = (x % 1048576) / 1024;
    int bi = x % 1024;

    cout << "МБайт: " << Mbi << " КБайт: " << Kbi << " Байт: " << bi; // вывод, О(н): (ввод) + (подсчет) + (подсчет) + (подсчет) + (вывод) = 5
}

void Four(int d)
{
    int ab = d * (6000 / 360);
    int a = ab / 100;
    int b = ab % 100;
    cout << a << "-" << b // вывод, О(н): (ввод) + (подсчет) + (подсчет) + (подсчет) + (вывод) = 5
}

int Fifth(int p, int t)
{
    int op = 0;
    while (t > 0) 
    {
        if (t > 5) { op = p * 0.8 + op; }
        else{ op = p + op; }
        t = t - 1;
    }
    return op; // возврат, О(н): (ввод) + ((подсчет) + (подсчет))t + (вывод) = 2 + 2t
}

bool Sixth(int a, int b)
{
    if (a > b)
    {
        if (b % 2 == 0) { return true; }
        else { return false; }
    }
    if (a % 2 == 0) { return true; }
    else { return false; } // да, тут много возвратов, О(н): (ввод) + (сравнение) + (сравнение) (вывод) = 4
}

int main() // а тут я тестил все богохульство написанное выше
{
    return;
}
