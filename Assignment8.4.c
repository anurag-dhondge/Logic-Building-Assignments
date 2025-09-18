///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment8.4.c                                             //
//  Description: Program which accept temperature in Fahrenheit and          //
//               convert it into celsius.                                    //
//               (1 celsius = (Fahrenheit -32) * (5/9))                      //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10
//Output :  -12.2222 (10 - 32) * (5/9)

#include<stdio.h>
float DispayCelsius(float fFahrenheit) 
{ 
    float fCelsius =0.0f;
    fCelsius = (fFahrenheit - 32) * (5.0f / 9.0f);
    return fCelsius;
} 

int main() 
{ 
    float fValue = 0.0f, fRet = 0.0f; 

    printf("Enter temperature in  Fahrenheit : \n"); 
    scanf("%f",&fValue); 

    fRet = DispayCelsius(fValue);
    printf("Value in Celcius is : %f",fRet); 
    
    return 0; 
} 