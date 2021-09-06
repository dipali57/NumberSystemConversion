#include "Header.h"
int BinaryToDecimal(int iNum)
{
	int arr[]={1,2,4,8,16,32,64,128,256,512,1024};
	int bin=0,i=0,Rem=0;
		while(iNum!=0)
		{

			Rem=iNum%10;
			if(Rem==1)
			{
				bin=bin+Rem*arr[i];
			}
			
			iNum=iNum/10;
			i++;
		}	
	return bin;
}
int BinaryToOctal(int iNum)
{
	int iVal=BinaryToDecimal(iNum);
	
	int oct=0,i=1,Rem=0;
		while(iVal!=0)
		{
			Rem=iVal%8;
			oct=oct+Rem*i;
			iVal=iVal/8;

			i=i*10;
		}	
	return oct;
}
void BinaryToHexadecimal(int iNum)
{
	int iVal=BinaryToDecimal(iNum);
	
	int hex=0,i=0,len=0,iRem[100];
		while(iVal!=0)
		{
			iRem[i]=iVal%16;
			iVal=iVal/16;
			i++;
			len++;
		}	
		printf("\nEquivalent Hexa-Decimal Number : ");
    	for(i=len-1;i>=0;i--)
    	{
    	    switch(iRem[i])
    	    {
    	        case 10:
    	            printf("A"); 
    	            break;
    	        case 11:
    	            printf("B"); 
    	            break;          
        	    case 12:
        	        printf("C"); 
        	        break; 
        	    case 13:
        	        printf("D"); 
        	        break;
            	case 14:
            	    printf("E"); 
            	    break;
            	case 15:
            	    printf("F"); 
            	    break;
            	default:
            	    printf("%d",iRem[i]);
      		  }    
    	}
}
void DecimalToBinary(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%2;
		iNum=iNum/2;
		i++;
		len++;
	}	
	for(i=len-1;i>=0;i--)
	{
		printf("%d",iRem[i]);
	}
}
void DecimalToOctal(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%8;
		iNum=iNum/8;
		i++;
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%d",iRem[i]);
	}
}
void DecimalToHexadecimal(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%16;
		iNum=iNum/16;
		i++;
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		switch(iRem[i])
    	{
    	    case 10:
    	        printf("A"); 
    	        break;
    	    case 11:
    	        printf("B"); 
    	        break;          
        	case 12:
        	    printf("C"); 
        	    break; 
        	case 13:
        	    printf("D"); 
        	    break;
          	case 14:
            	printf("E"); 
            	break;
            case 15:
            	printf("F"); 
            	break;
            default:
            	printf("%d",iRem[i]);
        } 
	}	
}
void OctalToBinary(int iNum)
{
	int rem[50],len=0,decimal=0,i=0,num,ans;
     
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
     
    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);
     
    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }

}