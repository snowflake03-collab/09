#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //��ó�� 

int main(void)
{ 
  int i, average;
  int sum;
  int grade[SIZE];
  printf("%d���� ������ �Է��ϼ���.\n", SIZE); 
  
  sum = 0;  
  for(i=0; i<SIZE; i++){
           scanf("%d", &grade[i]);
           sum += grade[i];
  }
  
  average = sum / SIZE;
  printf("average grade: %d\n", average);
  
  //#if 0 -> �ּ� ó���� �Ȱ��� ȿ��, ����⿣ �Ʊ�ﶧ 
  #if 0 
  for( i=0; i<SIZE; i++)
       printf(��grade[%d] = %d\n��, i, grade[i]);
 #endif
  
  system("PAUSE");	
  return 0;
}
