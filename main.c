#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //전처리 

int main(void)
{ 
  int i, average;
  int sum;
  int grade[SIZE];
  printf("%d명의 점수를 입력하세요.\n", SIZE); 
  
  sum = 0;  
  for(i=0; i<SIZE; i++){
           scanf("%d", &grade[i]);
           sum += grade[i];
  }
  
  average = sum / SIZE;
  printf("average grade: %d\n", average);
  
  //#if 0 -> 주석 처리랑 똑같은 효과, 지우기엔 아까울때 
  #if 0 
  for( i=0; i<SIZE; i++)
       printf(“grade[%d] = %d\n”, i, grade[i]);
 #endif
  
  system("PAUSE");	
  return 0;
}
