/* binsearch:  find x in v[0] <= v[1] <= ... <= v[n-1] */
#include <stdio.h>
#include <windows.h>

   int binsearch1(int x, int v[], int n)
   {
       int low, high, mid;
       low = 0;
       high = n - 1;
       while (low <= high) {
           mid = (low+high) >> 1;
           if (x < v[mid])
               high = mid - 1;
           else if (x  > v[mid])
               low = mid + 1;
           else    /* found match */
               return mid;
       }
       return -1;   /* no match */
   }
      int binsearch2(int x, int v[], int n)//2分查找的算法先判断后循环
   {
       int low, high, mid;
       low = 0;
       high = n - 1;
       mid = (low + high) >> 1;
       while( (x != v[mid]) && low <= high){//判断循环的条件为x!=v[mid]同时low<high
        if (x < v[mid]){//判断x<折半的数时,数组最大值变为原数前一个数
          high = mid - 1;
        }
        else {
          low = mid + 1;//判断x<折半的数时,数组最小值变为原数后一个数
        }
       mid = (low + high) >> 1;//判断完毕后对mid重新赋值,后,再判断循环条件
       }
       if (x == v[mid]){//一共就两种情况,x刚好==中位数,x!=中位数,
        return mid;
       }
        return -1;   /* no match */
   }
   #define ARR 10
   #define LOOP 10000000
   int main()
   {
      int v[ARR];//数组定义使用常量,不能使用变量,c99之后可以用,但是最好是使用常量!!
      for (int i =0; i < ARR; i++){
        v[i] = (i+1)*2;
      }
      DWORD dwStart = GetTickCount();
      for (int i = 0; i < LOOP; i++){
        int y1 = binsearch1(20,v,ARR);
      }
      DWORD dwUsed1 = GetTickCount() - dwStart;



      dwStart = GetTickCount();
      for (int i = 0; i < LOOP; i++){
        int y2 = binsearch1(20,v,ARR);
      }
      DWORD dwUsed2 = GetTickCount() - dwStart;
      printf("used1:%u\nused2:%u",dwUsed1,dwUsed2);

      /*int v[10];
      for (int k = 0 ; k < 10 ; k++){
        v[k] = k*2;
      }
      ;
      int x = binsearch(10,v,10);*/
      /*for (int m = 0 ; m < 10 ; m++){
        printf("%d ",i[m]);
      }*/
      //printf("%d",y1);



      return 0;

      
   }
