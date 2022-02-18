#include "unity.h"
#include <Converters.h>

/* Modify these two lines according to the project */
#include <Converters.h>
#define PROJECT_NAME    "Converters"



/* Prototypes for all the test functions */
float test_fahrenheitToCelcius(float);
float test_celciusToFahrenheit(float);
float test_kelvinToCelcius(float);
float test_celciusToKelvin(float);

float test_USDtoEuro(float);
float test_USDtoJPY(float);
float test_USDtoRMB(float);

float test_ounceToPounds(float);
float test_gramsToPounds(float);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(fahrenheitToCelcius);
  RUN_TEST(celciusToFahrenheit);
  RUN_TEST(kelvinToCelcius);
  RUN_TEST(celciusToKelvin);
  RUN_TEST(USDtoEuro);
  RUN_TEST(USDtoJPY);
  RUN_TEST(USDtoRMB);
  RUN_TEST(ounceToPounds);
  RUN_TEST(gramsToPounds);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
 
float test_fahrenheitToCelcius(float) {
  
  TEST_ASSERT_EQUAL(212.000000, fahrenheitToCelcius(100));
  
  TEST_ASSERT_EQUAL(50.000000, fahrenheitToCelcius(10.000000));

  
}

float test_celciusToFahrenheit(float) {
  
  TEST_ASSERT_EQUAL(38.083336, celciusToFahrenheit(100.55));

  TEST_ASSERT_EQUAL(-295.755554, celciusToFahrenheit(-500.36));

 
}

float test_kelvinToCelcius(float) {
  
  TEST_ASSERT_EQUAL(727.839966, kelvinToCelcius(1000.99));
  
  TEST_ASSERT_EQUAL(-1172.510010, kelvinToCelcius(-899.36));

  
}

float test_celciusToKelvin(float) {
  
  TEST_ASSERT_EQUAL(373.149994, celciusToKelvin(100));

  TEST_ASSERT_EQUAL(173.149994, celciusToKelvin(-100));

}

float test_USDtoEuro(float){

  
  TEST_ASSERT_EQUAL(87.000000,USDtoEuro(100));

  TEST_ASSERT_EQUAL(8.900100,USDtoEuro(10.23));

}

float test_USDtoJPY(float){
 
  TEST_ASSERT_EQUAL(11109.000000,USDtoJPY(100));
  
  TEST_ASSERT_EQUAL(1136.450684,USDtoJPY(10.23));
  
}

float test_USDtoRMB(float){
 
  TEST_ASSERT_EQUAL(682.000000,USDtoRMB(100));

  TEST_ASSERT_EQUAL(69.768600,USDtoRMB(10.23));
  
}

float test_ounceToPounds(float){
    
    TEST_ASSERT_EQUAL(11109.000000,ounceToPounds(100));
    TEST_ASSERT_EQUAL(1136.450684,ounceToPounds(10.23));
    
}

float test_gramsToPounds(float){
    
    TEST_ASSERT_EQUAL(0.220462,gramsToPounds(100));
    TEST_ASSERT_EQUAL(0.022553,gramsToPounds(10.23));
    
}

}
