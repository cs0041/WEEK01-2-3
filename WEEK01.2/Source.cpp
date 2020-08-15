#include <iostream>
using namespace std;
void star()
{
    cout << "*";
}
void  hyphen()
{
    cout << "_";
}
int abss(int k)
{
    if (k >= 0)
    {
        return k;
    }
    else if (k < 0)
    {
        return k * -1;
    }
}
struct pos
{
    int  posstar1;
    int  posstar2;
};
int main()
{
    bool go = false;
    int a;
    while (!go)
    {
        cin >> a;
        if (a > 0)
        {
            go = true;
        }
        else if(a<=0)
        {
            cout << "ERROR" << endl;
        }
    }
    int allrow = 0;
    int line = 0;
    if (a % 2 == 0)
    {
        struct pos even;
        line = a / 2;
        allrow = a - 1;
        even.posstar1 = a / 2;
        even.posstar2 = a / 2;
        for (int i = 1; i <= a;)
        {
            for (int j = 1; j <= allrow; j++)
            {
                if (j == abss(even.posstar1) && j == 1)
                {
                    star();
                }
                else if (j == abss(even.posstar1) || j == abss(even.posstar2))
                {
                    star();
                }
                else
                {
                    hyphen();
                }
            }
            cout << endl;
            i++;
            if (i == (a / 2) + 1)
            {

            }
            else if (i == a)
            {
                even.posstar1 = a / 2;
                even.posstar2 = -999;
            }
            else if (i > (a / 2) + 1)
            {
                even.posstar1++;
                even.posstar2--;
            }
            else
            {
                even.posstar1--;
                even.posstar2++;
            }
        }
    }
    else
    {
        struct pos odd;
        allrow = a;
        line = a / 2;
        odd.posstar1 = (a + 1) / 2;
        odd.posstar2 = (a + 1) / 2;
        for (int i = 1; i <= a;)
        {
            for (int j = 1; j <= allrow; j++)
            {
                if (j == abss(odd.posstar1) && j == 1)
                {
                    star();
                }
                else if (j == abss(odd.posstar1) || j == abss(odd.posstar2))
                {
                    star();
                }
                else
                {
                    hyphen();
                }
            }
            cout << endl;
            i++;
            if (i == a)
            {
                odd.posstar1 = (a + 1) / 2;
                odd.posstar2 = -999;
            }
            else if (i >= ((a + 1) / 2) + 1)
            {
                odd.posstar1++;
                odd.posstar2--;
            }
            else
            {
                odd.posstar1--;
                odd.posstar2++;
            }
        }
    }
    return 0;
}
