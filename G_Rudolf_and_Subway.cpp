#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int deletions = 0;
        int i = 0;

        while (i < n - 2)
        {
            if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
                (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'))
            {
                deletions += 2;
                i += 3;
            }
            else
            {
                i += 1;
            }
        }

        cout << deletions << endl;
    }

    return 0;
}
