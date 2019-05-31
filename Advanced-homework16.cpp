/* 計算機概論實務-進階練習作業-作業16*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫
int add3(int); //自訂函式add3()

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業16\n");
    printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
   int i, result;
   for (i=2; i<=100; i++) //2+4+6+~+100
   {
       if (i%2==0) result=add3(i); //能被2整除累加 
   }
   printf("2+4+6+~+100加總：%d\n", result); 
   system("pause");//暫停視窗 
   return 0;//回傳值 0 
}

int add3(int j)
{
   static int sum=0; 
   sum+=j;//加 
   return sum;
}
