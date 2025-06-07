/*  Qua 5 : Accept number from user and check whether number is even or odd */

    #include<stdio.h>

    #define TRUE 1
    #define FALSE 0 

    typedef int BOOL ;

    BOOL ChkEven(int iNo)
    if(iNo % 2 == 0)
    {
        return TRUE ;
    }

        else if (iNo /2 != 0)
        {
            return FALSE;
        }
    
    int main ()
    {
        int iValue = 0 ;
        BOOL bRet = FALSE ;

        printf("Enter Number is : ");
        scanf("%d",&iValue);

        bRet = ChkEven(iValue);

        printf("Number is  ", bRet);
        return 0;
    }