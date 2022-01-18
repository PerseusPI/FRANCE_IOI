#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::string phrase;
    int tabAlpha[26] = {0};
    getline(std::cin, phrase);
    for(int i = 0;i<int(phrase.length());i++)
    {
        if(phrase[i] >= 'a' && phrase[i] <= 'z')
            tabAlpha[phrase[i] - 'a']++;
        else if(phrase[i] >= 'A' && phrase[i] <= 'Z')
            tabAlpha[phrase[i] - 'A']++;
    }
    int freq = 0;
    int majoritaire = 0;
    for(int i = 0;i<26;i++)
    {
        if(tabAlpha[i] > freq)
        {
            freq = tabAlpha[i];
            majoritaire = i;
        }
    }
    std::cout << char(majoritaire + 'A');

}
