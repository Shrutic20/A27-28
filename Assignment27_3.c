///////////////////////////////////////////////////////////////////////////////
//
// Write a program which checks whether 7th & 15th & 21st , 28th bit
// is On or OFF.
// Input  : 135282752
// Output : On
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheackBit(UINT iNo)
{
    UINT iMask = 0x08104040; 
    UINT iAns = 0;           

    iAns = iNo & iMask;

    if(iMask == iAns)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CheackBit(iValue);

    if(bRet == true)
    {
        printf("Given bits are ON!\n");
    }
    else
    {
         printf("Given bits are OFF!\n");
    }
    
    return 0;
}
