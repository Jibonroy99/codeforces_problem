#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        // Check if the first and last elements of the array are equal to zero
        if (arr[0] != 0 || arr[n - 1] != 0)
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int i = 1; i < n - 1; ++i)
            {
                if (arr[i] < arr[i - 1] || arr[i] > arr[i + 1])
                {
                    cout << "NO" << endl;
                    break;
                }
            }

            if (arr[n - 2] < arr[n - 1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
