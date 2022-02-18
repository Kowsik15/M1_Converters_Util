#include "Converters.h"
float fahrenheitToCelcius(float t1) { return ((9.0 / 5.0) * t1 + 32); }
// function that stores the converted F->C;

float celciusToFahrenheit(float t2) { return ((t2 - 32) * (5.0 / 9.0)); }
// function that stores the converted C->F;
float kelvinToCelcius(float t3) { return (t3 - 273.15); }
// function that stores the converted K->C;
float celciusToKelvin(float t4) { return (t4 + 273.15); }
// function that stores the converted C->K;

float USDtoEuro(float c1) { return (c1 * 0.87); }
// function to store USD to EURO;
float USDtoJPY(float c2) { return (c2 * 111.09); }
// function to store USD to JPY;
float USDtoRMB(float c3) { return (c3 * 6.82); }
// function to store USD to RMB;

float ounceToPounds(float m1) { return (m1 * 111.09); }
// stores the converted Ounce->Pounds;
float gramsToPounds(float m2) { return (m2 * 0.00220462); }
