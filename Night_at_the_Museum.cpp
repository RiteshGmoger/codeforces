#include <iostream>
#include <string>
#include <climits>

int main()
{
    std::string str{};
    std::cin >> str;

    int minv{INT_MAX}, left{}, right{}, ans{};
    char ch{'a'};
    char* ptr = &ch;

    for (int i{}; i < str.size(); ++i)
    {
        left = right = 0;
	char var = *ptr;
	int count = 0;
        while(1)
        {
        	if (var == str[i])
        	{
			left = count;
			break;
        	}
		var++;
        	if (var > 'z') var = 'a';
                	count++;
	}
	var = *ptr;
        count = 0;
        while(1)
        {
        	if (var == str[i])
        	{
                	right = count;
                	break;
        	}
        	var--;
        	if (var < 'a') var = 'z';
        	count++;
        }

        minv = std::min(left, right);
        ans += minv;

        *ptr = str[i];
    }

    std::cout << ans << '\n';
    return 0;
}

