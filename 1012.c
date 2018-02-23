#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int A[6] = {0};
    int val;
    int nA2 = 1;
    int nA4 = 0;
    bool isA2 = false;
    cin >> val;
    while(cin >> val)
    {
        if(val % 5 == 0 && val % 2 == 0)
            A[1] += val;
        if(val % 5 == 1)
        {
            isA2 = true;
            if(nA2 == 1)
            {
                A[2] += val;
                nA2 *= -1;
            }
            else{
                A[2] += nA2 * val;
                nA2 *= -1;
            }
        }
        if(val % 5 == 2)
        {
            A[3]++;
        }
        if(val % 5 == 3)
        {
            A[4] += val;
            nA4++;
        }
        if(val % 5 == 4)
        {
            A[5] = A[5] > val ? A[5] : val;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(i != 2 && A[i] != 0)
        {
            if(i == 4)
                printf("%.1f", (float)A[4] / nA4);
            else
                cout << A[i];
        }
        else if(i != 2 && A[i] == 0)
            cout << "N";
        else if(i == 2 && isA2 == true)
        {
            cout << A[2];
        }
        else
            cout << "N";

        if(i != 5)
            cout << " ";
    }
    return 0;
}
