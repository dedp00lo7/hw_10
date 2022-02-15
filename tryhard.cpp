#include <iostream>

using namespace std;

int main()
{
    string prikol;
    cin >> prikol;
    int a = 0, b = 0, c = 0;
    for (auto now : prikol)
    {
        switch (now)
        {
        case '(':
            a++;
            break;
        case '[':
            b++;
            break;
        case '{':
            c++;
            break;
        case ')':
            a--;
            break;
        case ']':
            b--;
            break;
        case '}':
            c--;
            break;
        }
        if (a < 0 || b < 0 || c < 0)
        {
            cout << "Incorrect" << endl;
            return 0;
        }
    }
    if (a || b || c)
        cout << "Incorrect";
    else
        cout << "Correct";
    return 0;
}
