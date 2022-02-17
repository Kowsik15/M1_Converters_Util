#include <stdio.h>
int main()
{
    char choose_type;
    int temp_Choice;
    int currency_Choice;
    int mass_Choice;

    float usrinputF, usroutputF;              // Usr gives values for Fahreinheit;
    float usrinputC, usroutputC;              // Usr gives values for Celsius;
    float usroutputKC, usrinputK, usroutputK; // Usr gives values for Kelvin

    float fahrenheitToCelcius(float t1) { return ((9.0 / 5.0) * t1 + 32); }
    // variable that stores the converted F->C;

    float celciusToFahrenheit(float t2) { return ((t2 - 32) * (5.0 / 9.0)); }
    // variable that stores the converted C->F;
    float kelvinToCelcius(float t3) { return (t3 - 273.15); }
    // variable that stores the converted K->C;
    float celciusToKelvin(float t4) { return (t4 + 273.15); }
    // variable that stores the converted C->K;

    float usrinputUSDtoEuro, usrinputUSDtoJPY, usrinputUSDtoRMB;
    float usroutputUSDtoEuro, usroutputUSDtoJPY, usroutputUSDtoRMB;

    float USDtoEuro(float c1) { return (c1 * 0.87); }
    // Usr gives values for for USD to EURO;
    float USDtoJPY(float c2) { return (c2 * 111.09); }
    // Usr gives values for for USD to JPY;
    float USDtoRMB(float c3) { return (c3 * 6.82); }
    // Usr gives values for for USD to RMB;

    float usrinputOunce, usroutputPound;
    // Usr gives values for for Ounce;
    float usrinputGram;
    // Usr gives values for for Gram;

    float ounceToPounds(float m1) { return (m1 * 111.09); }
    // stores the converted Ounce->Pounds;
    float gramsToPounds(float m2) { return (m2 * 0.00220462); }
    // stores the converted Grams->Pounds;

    printf("Welcome to Unit Converter! \nHere is a list of conversation to choose from: \nTemperature(T),\nCurrency(C),\nMass(M) \nPlease enter the codeword you want to convert.\n");
    scanf("%c", &choose_type);

    if ((choose_type == 'T') || (choose_type == 't'))
    {
        printf("Welcome to Temperature Converter! \nHere is a list of conversations to choose from: \nEnter 1 for Fahrenheit to Celsius. \nEnter 2 for Celsius to Fahrenheit. \nEnter 3 for Kelvin to Celcius. \nEnter 4 for Celcius to Kelvin\n");
        scanf("%d", &temp_Choice);

        if (temp_Choice == 1)
        {
            printf("Enter the Fahrenheit value: \n");
            scanf("%f", &usrinputF);
            usroutputC = fahrenheitToCelcius(usrinputF);
            printf("Equivalent Celcius is:%2f", usroutputC);
        }
        else if (temp_Choice == 2)
        {
            printf("Enter the Celcius value: \n");
            scanf("%f", &usrinputC);
            usroutputF = celciusToFahrenheit(usrinputC);
            printf("Equivalent Fahrenheit is:%2f", usroutputF);
        }
        else if (temp_Choice == 3)
        {

            printf("Enter the Kelvin value: \n");
            scanf("%f", &usrinputK);
            usroutputKC = kelvinToCelcius(usrinputK);
            printf("Equivalent Celcius is:%2f", usroutputKC);
        }
        else if (temp_Choice == 4)
        {
            printf("Enter the Celcius value: \n");
            scanf("%f", &usrinputC);
            usroutputK = celciusToKelvin(usrinputC);
            printf("Equivalent Kelvin value is:%2f", usroutputK);
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
            printf("Enter the USD value: \n");
            scanf("%f", &usrinputUSDtoEuro);
            usroutputUSDtoEuro = USDtoEuro(usrinputUSDtoEuro);
            printf("Equivalent Euro value is:%2f", usroutputUSDtoEuro);
            // %.2f = rounds the float to only 2 decimal places;
        }
        else if (currency_Choice == 2)
        {
            printf("Enter the USD value: \n");
            scanf("%f", &usrinputUSDtoJPY);
            usroutputUSDtoJPY = USDtoJPY(usrinputUSDtoJPY);
            printf("Equivalent JPY value is:%2f", usroutputUSDtoJPY);
        }
        else if (currency_Choice == 3)
        {
            printf("Enter the USD value: \n");
            scanf("%f", &usrinputUSDtoRMB);
            usroutputUSDtoRMB = USDtoRMB(usrinputUSDtoRMB);
            printf("Equivalent RMB value is:%2f", usroutputUSDtoRMB);
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
            printf("Enter the ounce value: \n");
            scanf("%f", &usrinputOunce);
            usroutputPound = ounceToPounds(usrinputOunce);
            printf("Equivalent Pound value is:%2f", usroutputPound);
        }
        else if (mass_Choice == 2)
        {
            printf("Enter the Gram value: \n");
            scanf("%f", &usrinputGram);
            usroutputPound = gramsToPounds(usrinputGram);
            printf("Equivalent Pound value is:%2f", usroutputPound);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    return 0;
}
