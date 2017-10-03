#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // 1
    cout << "enter x,y" << endl;
    int x = 0;
    int y = 0;
    cin >> x >> y;
    if (!(x % 2 == 0) && !(y % 2 == 0))
    {
        cout << "they are odd" << endl;
    }
    // 2
    const int num = 20;
    if ((x < num) || (y < num) && !((x < num) && (y < num)))
    {
        cout << "one of the numbers <" << num << endl;
    }
    // 3
    if ((x == 0) || (y == 0))
    {
        cout << " one of the numbers = 0" << endl;
    }
    // 4
    cout << "z=";
    int z = 0;
    cin >> z;
    const int condition = 0;
    if ((x < condition) && (y < condition) && (z < condition))
    {
        cout << "all numbers < " << condition << endl;
    }
    // 5
    if ((x % 5 == 0) && (y % 5 == 0))
    {
        cout << "error" << endl;
    }
    else if ((y % 5 == 0) && (z % 5 == 0))
    {
        cout << "error" << endl;
    }
    else if ((x % 5 == 0) && (z % 5 == 0))
    {
        cout << "error" << endl;
    }
    else if (x % 5 == 0)
    {
        cout << "5|x" << endl;
    }
    else if (y % 5 == 0)
    {
         cout << "5|y" << endl;
    }
    else if (z % 5 == 0)
    {
        cout << "5|z" << endl;
    }
    // 6
    const int cond = 100;
    if ((x > cond) || (y > cond) || (z > cond))
    {
        cout << "one of the numbers > " << cond << endl;
    }
    //////// Шахматы
    /* Ладья На поле (a, b) расположена ладья. 
    Записать условие, при котором она угрожает полю (c, d).*/
    cout << "enter coordinates a,b" << endl;
    pair<int, int> l;
    cin >> l.first >> l.second;
    cout << "enter coordinates c,d" << endl;
    pair<int, int> p;
    cin >> p.first >> p.second;
    if ((l.first <= 8) && (l.second <= 8) && (p.first <= 8) && (p.second <= 8))
    {
        // 1
        if ((l.first == p.first) || (l.second == p.second))
        {
            cout << "the rook threatens the figure" << endl;
        }
        if ((abs(l.first - p.first)) == (abs(l.second - p.second)))
        {
            cout << "the bishop threatens the figure" << endl;
        }
        if (((abs(l.first - p.first)) == 1) || ((abs(l.second - p.second)) == 1))
        {
            cout << "the king threatens the figure" << endl;
        }
        if (((abs(l.first - p.first)) == (abs(l.second - p.second)) ||
            ((l.first == p.first) || (l.second == p.second))))
        {
            cout << "the queen threatens the figure" << endl;
        }
        if ((abs(l.first - p.first == 1)) && (p.second - l.second == 1))
        {
            cout << "the pawn threatens the figure" << endl;
        }
        else if (l.second == 2)
        {
            if ((l.first = p.first) &&
                (((p.second - l.second) == 1) || ((p.second - l.second) == 2)))
            {
                cout << "the pawn goes to (" << p.first << "," << p.second << ")" << endl;
            }
            else
            {
                cout << "the pawn goes to (" << p.first << "," << p.second << ")" << endl;
            }
        }
    }
    //////
    const int num4 = 7;
    int j = 1;
    for (int j = 1; j < 10; j++)
    {
            cout << num4 << 'x' << j << '=' << num4*j << endl;
    }
    //////
    j = 1;
    for (int i = 8; i < 15; i++)
    {
            j = j*i;
            cout << j << endl << endl;
    }
    //////
    int a = 0;
    j = 1;
    cin >> a;
    if ((a > 1) && (a < 20))
    {
        for (int m = a; m < 21; m++)
        {
            j = j*m;
            cout << j << endl << endl;
        }
    }
    //////
    int b = 0;
    j = 1;
    cin >> b;
    if ((b > 1) && (b < 20))
    {
        for (int l = 1; l < b++; l++)
        {
            j = j*l;
            cout << j << endl << endl;
        }
    }
    //////
    a = 0;
    b = 0;
    j = 1;
    cin >> a >> b;
    if (b >= a)
    {
        for (int k = a; k < b++; k++)
        {
            j = j*k;
            cout << j << endl;
        }
    }
    return 0;
}
