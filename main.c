#include "Header.h"
int main()
{
	int n=0,i=0;
	int choice=1,iNo=0,Ret=0,Rem=0;
	while(choice)
	{
		printf("\n\nEnter your choice:\n");
		printf("................................................\n");
		printf("			NUMBER SYSTEM CONVERSION			\n");
		printf("1.	Binary 		to	 Decimal 	 conversion  ...\n");
		printf("2.	Binary 		to	 Octal 		 conversion  ...\n");
		printf("3.	Binary 		to	 Hexadecimal conversion  ...\n");
		printf("4.	Decimal	 	to	 Binary		 conversion  ...\n");
		printf("5.	Decimal 	to	 Octal 		 conversion  ...\n");
		printf("6.	Decimal 	to	 Hexadecimal conversion  ...\n");
		printf("7.	Octal 		to	 Binary 	 conversion  ...\n");
		printf("8.	Octal 		to	 Decimal	 conversion  ...\n");
		printf("9.	Octal 		to	 Hexadecimal conversion  ...\n");
		printf("10.	Hexadecimal to	 Binary      conversion  ...\n");
		printf("11.	Hexadecimal to	 Decimal 	 conversion  ...\n");
		printf("12.	Hexadecimal to	 Octal 		 conversion  ...\n");
		printf("................................................\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1	:
				A:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp=iNo;
				while(temp!=0)
				{
					Rem=temp%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp);
						printf("try again..\n");
						goto A;
					}
					
					temp=temp/10;
				}
				Ret=BinaryToDecimal(iNo);
				printf("Decimal converion of %d is : %d",iNo,Ret);
				break;
			case 2	:
				B:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp2=iNo;
				while(temp2!=0)
				{
					Rem=temp2%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp2);
						printf("try again..\n");
						goto B;
					}
					temp2=temp2/10;
				}
				Ret=BinaryToOctal(iNo);
				printf("Octal converion of number %d  is: %d",iNo,Ret);
				break;
			case 3	:
				C:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp3=iNo;
				while(temp3!=0)
				{
					Rem=temp3%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp3);
						printf("try again..\n");
						goto C;
					}
					temp3=temp3/10;
				}
				BinaryToHexadecimal(iNo);
				break;
			case 4	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("Binary of %d is:",iNo);
				DecimalToBinary(iNo);
				break;
			case 5	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("octal of %d is:",iNo);
				DecimalToOctal(iNo);
				break;
			case 6	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("Hexadecimal of %d is:",iNo);
				DecimalToHexadecimal(iNo);
				break;
			case 7	:
				D:
				printf("\nEnter octal number (0 to 7) :  "); 
				scanf("%d",&iNo);
				int temp4=iNo;
                while(temp4!=0)
                {
                    Rem=temp4%10;
                    if(Rem>7)
                    {
                        printf("\n%d is not a octal number.\n",Rem);
                        goto D;
                    }
                    else
                    {
                    temp4=temp4/10;
                    i++;
                    }
                }
				printf("Binary of %d is:",iNo);
				OctalToBinary(iNo);
				break;
			case 8	:
			
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				break;
			case 9	:
				break;

			case 10	:
				break;
			case 11	:
				break;

			case 12	:
				break;
		
		}
		
	}	
	return 0;
}