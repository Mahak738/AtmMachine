
#include <stdio.h>


int main()
{
  int pin,pin1=7389;

  float balance=55000.0;
  int amt,amt1;
  char transaction ='y';
  
  printf("please insert your card :");
  printf("\nDon't remove your card");
  printf("  it is under process\n");
  
  printf("ENTER YOUR SECRET PIN NUMBER:");
  scanf("%d",&pin);
  if(pin!=pin1){
      printf("Please enter the valid pin \n");
      printf("Unauthenticate person \n");
      printf("Try next time \n");
      printf("PLEASE REMOVE YOUR CARD\n ");
       }
       
     else{
        
       int ch;
     
      do{
       printf("\n******************************************\n");
       printf("\n*************welcome to  ATM**************\n\n");
       printf("******************************************\n\n\n");
       printf("Please select your choice\n\n");
       printf("1. Withdraw Money\n");
       printf("2. Check Balance\n");
       printf("3. Deposit Money\n");
       printf("4. Exit\n\n");
       printf("*****************************************\n");
       printf("\n");
       
       scanf("%d",&ch);
       
        switch(ch){
          
          case 1:
                printf("Enter Withdraw amount :");
                scanf("%d",&amt);
            if (amt % 100 != 0)  
                //if withdrawl ammount isn't a multiple of 100 
              {
               printf("\n Please Enter the Amount in Multiples of 100");
                       //then it will ask user to enter a amount that is multiple of 100
              }
         else if (amt > (balance - 2000))  
                          //if after withdrawn, the ammount in account is less then that of 500, 
                         //the withdraw action will not be allowed
           {

             printf("\n Insufficent Balance, Minimum balance couldn't be less then ₹2000 in account");
           }
      
            else if(amt<10000){
                
              if(amt<balance){
                  
                  balance=balance-amt;
                  printf("Withdraw process is running \n please wait ");
                  printf("\nplease collect your amount \n");
                  printf("your current balance is = %f\n ",balance);
                }
                else{
                    printf("You have not sufficient balance");
                    }
              }
             
            else{
                  printf("You can withdraw only less than 10,000 amount in a day");
             }
           break;
           
          case 2:
            printf("your current balance is = %f\n ",balance);
            break;
            
          case 3:
             printf("Enter amount \n");
             scanf("%d",&amt1);
             
             balance=balance+amt1;
             
             printf("your balance is %f\n :",balance);
             break;
             
          case 4:
                printf("\n THANK YOU FOR USING Bank ATM");
                break;
                
          case 5:
                continue;
                
           default:
                 printf("You entered a wrong choice.\n");
                 printf("Press 5 For Continue");
                 break;
        }

	} while (ch!=5);
	
  }
    printf("\n\n THANKS FOR USING Bank ATM SERVICE");
 
    return 0;
}
