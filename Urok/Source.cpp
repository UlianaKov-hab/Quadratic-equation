#include <iostream>
#include <cmath>
using namespace std;
template<typename T>
T Rivnannya(T *a, T *b)
{
    T x;
    x = -((*b) / (*a));
    return x;

}
template<typename T>
T Rivnannya(T *a, T *b, T *c)
{
    T D;
    T x, x1, x2;

    D = (pow((*b), 2) - (4 * (*a) * (*c)));
    if (D < 0)
    {
        cout << "Так как дискриминант меньше нуля то,\n"
            "квадратное уравнение не имеет вещественных корней" << endl << endl;
    }
    if (D == 0)
    {
        cout << "Так как дискриминант равен нулю то,\n"
            "квадратное уравнение имеет один действительный корень:\n ";
        x = -((*b) / (2 * (*a)));
        cout << "x = " << x << endl;
        return x;
    }
    if (D > 0)
    {
        cout << "Так как дискриминант больше нуля то,\n"
            "квадратное уравнение имеет два действительных корня: " << endl;
        x1 = (-(*b) - sqrt(D)) / (2 * (*a));
        x2 = (-(*b) + sqrt(D)) / (2 * (*a));

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        return x1;
        return x2;
    }

}

void main()
{
    setlocale(LC_ALL, "rus");
    int choice;
    double a, b, c;


    cout << "Выберите тип уравнения" << endl;
    cout << "1 - линейное\n2 - квадратное\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Задайте исходные данные" << endl;
        do
        {
            cout << "a=";
            cin >> a;
            if (a == 0)
                cout << "а не может ровняться 0" << endl;
        } while (a == 0);

        cout << "b=";
        cin >> b;
        if (b == 0)
        {
            cout << "Если b= 0, то решений бесконечно много, поскольку любое число является решением" << endl;
        }
        cout << "x= " << Rivnannya(&a, &b);

    }
    if (choice == 2)
    {
        cout << "Задайте исходные данные" << endl;
        do
        {
            cout << "a=";
            cin >> a;
            if (a == 0)
                cout << "а не может ровняться 0" << endl;
        } while (a == 0);
        cout << "b=";
        cin >> b;
        cout << "c=";
        cin >> c;
        Rivnannya(&a, &b, &c);

    }



}













