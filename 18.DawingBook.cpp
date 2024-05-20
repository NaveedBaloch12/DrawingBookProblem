#include <iostream>

using namespace std;

// User Defined Functions....
int pageCount(int n, int p)
{
    int turn = 0;
    if(n / 2 >= p)
    {   // Front Side
        if(p == 1)
            return turn;
        turn = (p / 2);
    }
    else
    {   // Back Side
        if(p == n || p == n - 1)
        {
            if(n % 2 == 0 && n != p)
            {
                turn = 1;
                return turn;
            }
                
            return turn;
        }

        p = n - p;
        turn = (p / 2);
    }

    return turn;
}
int main()
{
    int n, p;
    cin>> n;
    cin>> p;

    cout<< pageCount(n, p);
    return 0;
}