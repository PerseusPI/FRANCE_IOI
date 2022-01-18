#include <iostream>
#include <string>

int main()
{
    std::string nom1;
    getline(std::cin, nom1);
    int resultat = 0;
    int resultat2 = 0;
    int digit = 0;
    for(int i = 0;i<int(nom1.length());i++)
    {
        if(nom1[i] != ' ')
            resultat = resultat + (nom1[i] - 'A');
        while(resultat > 9)
        {
            digit = resultat % 10;
            resultat /= 10;
            resultat += digit;
        }
        digit = 0;
        if(nom1[i] == ' ')
        {
            for(int j = i + 1;j<int(nom1.length());j++)
            {
                resultat2 = resultat2 + (nom1[j] - 'A');

            }
            while(resultat2 > 9)
            {
                digit = resultat2 % 10;
                resultat2 /= 10;
                resultat2 += digit;
            }
            i = nom1.length();
        }

    }
    std::cout << resultat << " " << resultat2 << "\n";

}
