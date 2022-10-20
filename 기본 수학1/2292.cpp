#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int room = 1;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    int b = 1;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        b = b + 6 * i;
        count++;
        if (n <= b)
        {
            break;
        }
    }
    cout<<count;
}