#include <iostream>
const double METRE_PAR_PIEDS = 3.281;
const double LIVRE_PAR_GRAMME = 0.002205;
const double FAHRENHEIT_PAR_CELSIUS = 1.8;
const double ZERO_CELSIUS_EN_FAHRENHEIT = 32;


double metreToPieds(double valeurMetre)
{
    return valeurMetre * METRE_PAR_PIEDS;
}
double grammesToLivres(double valeurGrammes)
{
    return valeurGrammes * LIVRE_PAR_GRAMME;
}
double CelsiusToFahrenheit(double valeurCelsius)
{
    return (valeurCelsius * FAHRENHEIT_PAR_CELSIUS) + ZERO_CELSIUS_EN_FAHRENHEIT;
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
