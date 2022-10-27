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
        arr[i][0] = x;
        arr[i][1] = y;
    }
    // cout << ",,,,,,,,,," << endl;

    // for (int i = 0; i < num - 1; i++)
    // {
    //     if (arr[i][0] > arr[i + 1][0])
    //     {
    //         int tempx = arr[i][0];
    //         arr[i][0] = arr[i + 1][0];
    //         arr[i + 1][0] = tempx;

    //         int tempy = arr[i][1];
    //         arr[i][1] = arr[i + 1][1];
    //         arr[i + 1][1] = tempy;
    //     }
    // }

    sort(arr.begin(),arr.end());

    // int k = 0;
    // while (k<num)
    // {
    //     for (int j = 0; j < num - 1; j++)
    //     {
    //         if (arr[j][0] == arr[j + 1][0])
    //         {
    //             if (arr[j][1] > arr[j + 1][1])
    //             {
    //                 int temp = arr[j][1];
    //                 arr[j][1] = arr[j + 1][1];
    //                 arr[j + 1][1] = temp;
    //             }
    //         }
    //     }
    //     k++;
    // }
    for (int i = 0; i < num; i++)
    {
        printf("%d %d\n",arr[i][0],arr[i][1]);
        //cout << arr[i][0] << " " << arr[i][1] << endl;
    }
}