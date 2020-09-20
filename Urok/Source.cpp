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
        cout << "��� ��� ������������ ������ ���� ��,\n"
            "���������� ��������� �� ����� ������������ ������" << endl << endl;
    }
    if (D == 0)
    {
        cout << "��� ��� ������������ ����� ���� ��,\n"
            "���������� ��������� ����� ���� �������������� ������:\n ";
        x = -((*b) / (2 * (*a)));
        cout << "x = " << x << endl;
        return x;
    }
    if (D > 0)
    {
        cout << "��� ��� ������������ ������ ���� ��,\n"
            "���������� ��������� ����� ��� �������������� �����: " << endl;
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


    cout << "�������� ��� ���������" << endl;
    cout << "1 - ��������\n2 - ����������\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "������� �������� ������" << endl;
        do
        {
            cout << "a=";
            cin >> a;
            if (a == 0)
                cout << "� �� ����� ��������� 0" << endl;
        } while (a == 0);

        cout << "b=";
        cin >> b;
        if (b == 0)
        {
            cout << "���� b= 0, �� ������� ���������� �����, ��������� ����� ����� �������� ��������" << endl;
        }
        cout << "x= " << Rivnannya(&a, &b);

    }
    if (choice == 2)
    {
        cout << "������� �������� ������" << endl;
        do
        {
            cout << "a=";
            cin >> a;
            if (a == 0)
                cout << "� �� ����� ��������� 0" << endl;
        } while (a == 0);
        cout << "b=";
        cin >> b;
        cout << "c=";
        cin >> c;
        Rivnannya(&a, &b, &c);

    }



}













