#include<stdio.h>
#include<math.h>  


int lengthcheck(long a){
	int count=0;
	do {
	 a /= 10;
		++count;
	} while (a != 0);
	
	return count;
}
int main(){
	long cn=0;
	int pin=0;
	int bal=9999;
	int opt;
	int witam=0;
	int deposit=0;
	while (1)
	{
		printf("                      ---------------------------- \n");
		printf("                     |                            |\n");
		printf("                     |       Welcome to ATM       |\n");
		printf("                     |                            |\n");		
		printf("                      ---------------------------- \n");
 
		printf("\n\n\n       Enter Your card number: ");
		scanf("%ld",&cn);
		if (lengthcheck(cn)>9){
		printf("		  4 Digit Pin number :");
			scanf("%d",&pin);
			if(lengthcheck(pin)==4){
				while(1)
					
			 {
				printf("\n\n\n	   Choose any option below  \n");
				printf("				1.Check Balance \n");
				printf("				2.Withdraw Cash \n");
				printf("				3.Deposit Cash  \n");
				printf("				4.Quit			\n");
				printf("				Enter your choice: ");
				scanf("%d", &opt);
				if(opt==1)
					{
					printf("			    The available balance is %d\n\n\n",bal);	
					}
				if(opt==2)
				{
					printf("				The maximum withdrawable amount is 9999\n");
					printf("\n				Enter the amount :");
					scanf("%d", &witam);
					printf("\n				Please collect the amount :%d\n",witam);
					printf("\n				The available balance is :%d\n\n\n",bal-witam);
					bal=bal-witam;
				}
				if(opt==3)
				 {
					printf("				The maximum amount that can be deposited is 9999 :\n");
					printf("\n				Enter the amount to be deposited :");
					scanf("%d", &deposit);
					if(deposit>9999){
						while (1){
							printf("				Enter an amount less than 9999\n");
							printf("				Enter the amount to be deposited :");
							scanf("%d", &deposit);
							if(deposit<9999){break;} /*printf("\n				Amount %d successfully deposited\n",deposit);*/
				}
					}   printf("\n				Amount %d successfully deposited",deposit);
						bal=bal+deposit;

					}
					if(opt==4){
						printf("				Thank You for using Aditya Banking Service\n\n\n\n\n\n");
						break;
					}
				    }	
				
				
				
				
			   }
		     }
		    else{printf("				Enter a valid 10 digit card number (%d)\n\n\n\n", lengthcheck(cn));}
		
	  }

	  	
	  }
