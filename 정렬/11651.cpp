#include <iostream>
#include <vector>
#include<algorithm>


using namespace std;

int main()
{
    int num;
    scanf("%d",&num);
    int x, y;
    vector<vector<int>> arr(num, vector<int>(2, 0));

    for (int i = 0; i < num; i++)
    {
        scanf("%d%d",&x,&y);
        arr[i][1] = x;
        arr[i][0] = y;
    }

    sort(arr.begin(),arr.end());

    for (int i = 0; i < num; i++)
    {
        printf("%d %d\n",arr[i][1],arr[i][0]);
    }
}