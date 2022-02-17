#include <stdio.h>
int main()
{
    char choose_type;
    int temp_Choice;
    int currency_Choice;
    int mass_Choice;

    int usrinputF;   // Usr gives values for Fahreinheit;
    float usrinputC; // Usr gives values for Celsius;
    float usrinputK; // Usr gives values for Kelvin

    float usrinputUSDtoEuro; // Usr gives values for for USD to EURO;
    float usrinputUSDtoJPY;  // Usr gives values for for USD to JPY;
    float usrinputUSDtoRMB;  // Usr gives values for for USD to RMB;
    float usrinputOunce;     // Usr gives values for for Ounce;
    float usrinputGram;      // Usr gives values for for Gram;

    float fahrenheitToCelcius; // variable that stores the converted F->C;
    float celciusToFahrenheit; // variable that stores the converted C->F;
    float kelvinToCelcius;     // variable that stores the converted K->C;
    float celciusTokelvin;     // variable that stores the converted C->K;

    float USDtoEURO; // varaible that stores the converted USD->EURO;
    float USDtoJPY;  // stores the converted USD->JPY;
    float USDtoRMB;  // stores the converted USD->RMB;

    float ounceToPounds; // stores the converted Ounce->Pounds;
    float gramsToPounds; // stores the converted Grams->Pounds;

    printf("Welcome to Unit Converter! \nHere is a list of conversation to choose from: \nTemperature(T),\nCurrency(C),\nMass(M) \nPlease enter the codeword you want to convert.\n");
    scanf("%c", &choose_type);

    if ((choose_type == 'T') || (choose_type == 't'))
    {
        printf("Welcome to Temperature Converter! \nHere is a list of conversations to choose from: \nEnter 1 for Fahrenheit to Celsius. \nEnter 2 for Celsius to Fahrenheit. \nEnter 3 for Kelvin to Celcius. \nEnter 4 for Celcius to Kelvin\n");
        scanf("%d", &temp_Choice);

        if (temp_Choice == 1)
        {
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &usrinputF);
            fahrenheitToCelcius = ((usrinputF - 32) * (5.0 / 9.0));
            printf("Celcius: %f", fahrenheitToCelcius);
        }
        else if (temp_Choice == 2)
        {
            printf("Please enter the Celcius degree: \n");
            scanf("%f", &usrinputC);
            celciusToFahrenheit = ((9.0 / 5.0) * usrinputC + 32);
            printf("Fahrenheit: %f", celciusToFahrenheit);
        }
        else if (temp_Choice == 3)
        {
            printf("Please enter the Kelvin: \n");
            scanf("%f", &usrinputK);
            kelvinToCelcius = usrinputK - 273.15;
            printf("Celcius: %f", kelvinToCelcius);
        }
        else if (temp_Choice == 4)
        {
            printf("Please enter the Celcius: \n");
            scanf("%f", &usrinputC);
            kelvinToCelcius = usrinputC + 273.15;
            printf("Celcius: %f", celciusTokelvin);
        }

        else
            printf("Please enter the correct choice. \n");
    }

    else if ((choose_type == 'C') || (choose_type == 'c'))
    {
        printf("Welcome to Currency Converter! \n Here is a list of conversations to choose from: \nEnter 1 for USD to Euro. \nEnter 2 for USD to JPY. \nEnter 3 for USD to RMB. \n");
        scanf("%d", &currency_Choice);
        if (currency_Choice == 1)
        {
            printf("Please enter the USD amount: $\n");
            scanf("%f", &usrinputUSDtoEuro);
            USDtoEURO = usrinputUSDtoEuro * 0.87;
            printf("Euro: %.2f", USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
        }
        else if (currency_Choice == 2)
        {
            printf("Please enter the USD amount: \n");
            scanf("%f", &usrinputUSDtoJPY);
            USDtoJPY = usrinputUSDtoJPY * 111.09;
            printf("JPY: %.2f", USDtoJPY);
        }
        else if (currency_Choice == 3)
        {
            printf("Please enter the USD amount: \n");
            scanf("%f", &usrinputUSDtoRMB);
            USDtoRMB = usrinputUSDtoRMB * 6.82;
            printf("RMB: %.2f", USDtoRMB);
        }
        else
            printf("Please enter correct choice. \n");
    }
    else if ((choose_type == 'M') || (choose_type == 'm'))
    {
        printf("Welcome to Mass Converter! \nHere is a list of conversations to choose from: \nEnter 1 for ounces to pounds. \nEnter 2 for gram to pounds. \n");
        scanf("%d", &mass_Choice);
        if (mass_Choice == 1)
        {
            printf("Please enter the ounce amount: \n");
            scanf("%f", &usrinputOunce);
            ounceToPounds = usrinputOunce * 0.0625;
            printf("Pounds: %.2f", ounceToPounds);
        }
        else if (mass_Choice == 2)
        {
            printf("Please enter the gram amount: \n");
            scanf("%f", &usrinputGram);
            gramsToPounds = usrinputGram * 0.00220462;
            printf("Pounds: %.2f", gramsToPounds);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    return 0;
}
