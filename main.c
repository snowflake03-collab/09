#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //��ó�� 

int main(void)
{ 
#if 0
  int i;
  int grade[SIZE];
  int score[SIZE];
   
  for(i=0; i<SIZE; i++){
           grade[i] = rand() % 100;
           score[i] = grade[i];
}
  for(i=0; i<SIZE; i++){
           printf("score[%d] = %d\n", i, score[i]);
           printf("grade[%d] = %d\n", i, grade[i]);
}
#endif
 
 int i;
 
 int a[SIZE] = {1, 2, 3, 4, 5};
 int b[SIZE] = {1, 2, 3, 4, 5};
 int flag_same = 1;

 for(i=0; i<SIZE; i++)
 {
          #if 0
          if (a[i] == b[i])
             printf("index %i: same\n", i);
          else
              printf("index %i: different\n", i); 
          #endif
          
          if (a[i] != b[i])
             printf("%dth element is not same\n", i); 
             flag_same = 0;
}          
printf("Are a and b the same? %i\n", flag_same); 

               
#if 0
 if (a==b) //array�� ���۵Ǵ� �޸� ������ 
    printf(���迭�� ���� ���� �����ϴ�.\n��);
 else               
    printf(���迭�� �ٸ� ���� �����ϴ�.\n��)

#endif

  system("PAUSE");	
  return 0;
}
