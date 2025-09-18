///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment8.1.c                                             //
//  Description: Program which accept radius of circle from user and         //
//               Calculate its area.Consider value of PI as 3.14.            //
//               (Area = PI * Radius * Radius)                               //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  10.4  
//Output :  339.6224 (3.14 * 10.4 * 10.4)

#include<stdio.h>
double CircleArea(float fRadius) 
{ 
    float PI = 3.14 , Area = 0;

    Area = PI * fRadius * fRadius;

    return Area;
} 
int main() 
{ 
    float fValue = 0.0; 
    double dRet = 0.0; 

    printf("Enter radius     : "); 
    scanf("%f",&fValue); 

    dRet = CircleArea(fValue); 
    printf("Area of Circle is : %.4f ",dRet); 

    return 0; 
}