/**********************
*Section -12
*Roll no:21CE10081
*Name:Virat Dwivedi
*Assignment No: 6b
*Description:program to check sum of digits of two numbers are equal or not by using function
*********************/
#include<stdio.h>
int digitsum(int x)//declaring function
{
  int sum=0;//declaring and initializing sum to store sum of the digit

  while(x>0)
  {//using loop to count sum of digit
   sum=sum+x%10;//taking reminder on diving the no each time by 10 and updating the value of sum of digit in each iteration
   x=x/10;//updating the value of x in each iteration
  }
  return sum;//returning sum of the digit

}
int eqdigitsum(int x,int y){//declaring the function
  int m;//declaring variables to check the whether sum of digit are equal or not
  int n;
  int count;
  m=digitsum(x);//taking call from the first function
  n=digitsum(y);
  if(m==n){//applying the condition of question here through loop
  count=1;}
  else
  count=0;
  return count;//return count from the funcxtion
}

int main()
{

  int first_num,second_num,sum_1,sum_2,k;//declaring variables
  printf("enter first number and second number respectively\n");
  scanf("%d%d",&first_num,&second_num);//reading two numbers
  sum_1=digitsum(first_num);//taking call from first function
  sum_2=digitsum(second_num);
  k=eqdigitsum(sum_1,sum_2);//taking call from second function
  if(k==1)//using this print whether sum of digit are equal or not
  {
    printf("sum of digit of both no are equal");
     }
  else
  printf("sum of digit of both no are not equal");
return 0;
}


