#include <stdio.h>
#include<time.h>

int insertion_sort(int a[10],int n)
{ int current;
  int j;
  int i;
    for(i=1;i<n;i++)
    {
        current =a[i];
        j=i-1;
        while(a[j]>current&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}

void main()
{   int a[15000];
int best_case[15000];
int worst_case[15000];
int average_case[100000];
    int i;int n ;
    
    
    for(i=0;i<14999;i++)
{ best_case[i]=i; }
for(i=14999;i>0;i--)
{ worst_case[i]=14999-i; }
for(i=0;i<14999;i++)
{ average_case[i]=rand(); }
double time_spent1,time_spent2,time_spent3 ;
clock_t begin1 = clock();
insertion_sort(best_case,15000);
clock_t end1 = clock();
time_spent1 += (double)(end1 - begin1) ;
printf("\nThe elapsed time in best case is %f microseconds ", time_spent1);
clock_t begin2 = clock();
insertion_sort(average_case,15000);
clock_t end2 = clock();
time_spent2 += (double)(end2 - begin2) ;
printf("\nThe elapsed time in average case is %f microseconds ", time_spent2);
clock_t begin3 = clock();
insertion_sort(worst_case,15000);
clock_t end3 = clock();
time_spent3 += (double)(end3 - begin3) ;
printf("\nThe elapsed time in worst case is %f microseconds ", time_spent3);


}
