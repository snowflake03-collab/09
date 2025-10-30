#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int test_score [5];
  int i;
  
  test_score[0] = 10;
  test_score[1] = 20;
  test_score[2] = 30;
  test_score[3] = 40;
  test_score[4] = 50;
  
  for(i=0; i<5; i++)
           printf("grade[%i] = %i\n", i, test_score[i]);
  
  system("PAUSE");	
  return 0;
}
