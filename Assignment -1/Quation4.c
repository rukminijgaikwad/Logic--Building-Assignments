/* Qua 4 : Accept one Number and check whether is divisible by 5 or not */

 #include<stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0

int Check (  int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;

    }
    else 
    {
        return  0;
}
}
    int main()
    {

        int iValue = 0;
        bool bRet = FALSE ;

        printf("Enter Number");
        scanf("%d" , &iValue);

        bRet = Check(iValue);

        if(bRet == TRUE)
        {
            printf("Divisiblr by 5");
        }
        else
        {
            printf("not Divisible by 5 ");
        }
        return 0;
    }
