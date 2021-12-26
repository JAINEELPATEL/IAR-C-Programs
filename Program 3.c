// A certain grade of steel is graded according to the following conditions: 
// (i)Hardness must be greater than 50 
// (ii)Carbon content must be less than 0.7 
// (iii) Tensile strength must be greater than 5600 
// The grades are as follows: 
// Grade is 10 if all three conditions are met 
// Grade is 9 if conditions (i) and (ii) are met 
// Grade is 8 if conditions (ii) and (iii) are met 
// Grade is 7 if conditions (i) and (iii) are met 
// Grade is 6 if only one condition is met 
// Grade is 5 if none of the conditions are met 
// Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. 
#include<stdio.h>
void main()
{
    float h,cc,ts;
    printf("Enter the Hardness , Carbon Content , Tensile Strength of the Steel : ");
    scanf("%f%f%f",&h,&cc,&ts);
    if(h>50&cc<.7&ts>5600)
    printf("GRADE 10 STEEL");
    else if(h>50&cc<.7)
    printf("GRADE 9 STEEL");
    else if(cc<.7&ts>5600)
    printf("GRADE 8 STEEL");
    else if(h>50&ts>5600)
    printf("GRADE 7 STEEL");
    else if(h>50||cc<.7||ts>5600)
    printf("GRADE 6 STEEL");
    else
    printf("GRADE 5 STEEL");
}