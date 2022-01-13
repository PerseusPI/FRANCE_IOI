#include <iostream>

double metreToPieds(double valeurMetre)
{
    return valeurMetre * 3.281;
}
double grammesToLivres(double valeurGrammes)
{
    return valeurGrammes * 0.002205;
}
double CelsiusToFahrenheit(double valeurCelsius)
{
    return (valeurCelsius * 1.8) + 32;
}


int main()
{
    int conversionAEffectuer;
    std::cin >> conversionAEffectuer;
    for(int i = 0;i<conversionAEffectuer;i++)
    {
        double valeur;
        char Mesure;
        double resultat = 0;
        std::cin >> valeur >> Mesure;
        if(Mesure == 'm')
        {
            double resultat = 0;
            resultat = metreToPieds(valeur);
            std::cout << resultat << " " << 'p' << std::endl;
        }
        else if(Mesure == 'g')
        {
            grammesToLivres(valeur);
            resultat = grammesToLivres(valeur);
            std::cout << resultat << " " << 'l' << std::endl;
        }
        else if(Mesure == 'c')
        {
            CelsiusToFahrenheit(valeur);
            resultat = CelsiusToFahrenheit(valeur);
            std::cout << resultat << " " << 'f' << std::endl;
        }
        else
        {
            std::cout << "pas une bonne mesure" << std::endl;
        }
    }
}
