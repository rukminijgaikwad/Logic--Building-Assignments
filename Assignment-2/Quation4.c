/* Qua 4 : Accept two number from user and display  first number in second number of times */


   #include<stdio.h>

   int Display(int iNo, int iFrequency)
   {
    int num = 0; 

    //write updater 

    for (num = 1 ; num <= iFrequency ;  num++ )
     {
        printf("%d",&iNo);

     }
   }

   int main()
   {
    int iValue = 0 ;
    int iCount = 0 ;

    printf("Enter Number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iValue);

    Display(iValue , iCount);
    return 0 ;
   }
    