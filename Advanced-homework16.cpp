/* �p������׹��-�i���m�ߧ@�~-�@�~16*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw
int add3(int); //�ۭq�禡add3()

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~16\n");
    printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
   int i, result;
   for (i=2; i<=100; i++) //2+4+6+~+100
   {
       if (i%2==0) result=add3(i); //��Q2�㰣�֥[ 
   }
   printf("2+4+6+~+100�[�`�G%d\n", result); 
   system("pause");//�Ȱ����� 
   return 0;//�^�ǭ� 0 
}

int add3(int j)
{
   static int sum=0; 
   sum+=j;//�[ 
   return sum;
}
