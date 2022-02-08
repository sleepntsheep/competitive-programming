#include <iostream>
#include <string>
int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        int sc = 0;
        int l = s.length();
        for (int c = 0; c < l; c++)
        {
            if (s[c] == 'a' || s[c] == 'e' || s[c] == 'i' || s[c] == 'o' || s[c] == 'u')
            {
                if (c > 0)
                {

                    if (s[c + 1] == 'a' || s[c + 1] == 'e' || s[c + 1] == 'i' || s[c + 1] == 'o' || s[c + 1] == 'u')
                    {
                    }
                    else
                    {
                        sc++;
                    }
                }
                else {
                    sc++;
                }
            }
        }
        std::cout << sc << "\n";
    }
}