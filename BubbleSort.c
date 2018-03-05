/*************************************************************************
	> File Name: BublleSort.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Mar 2018 08:19:53 PM CST
 ************************************************************************/

#include<stdio.h>

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] =  A[j];
    A[j] = temp;
}

void BubbleSort(int A[], int n)
{   
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j<n-i-1; j++ )
        {
            if(A[j]>A[j+1]) 
            {
                Swap(A, j, j+1);
            }
        }
    }
}

int main()
{    //int A[] = { 9, 8, 7, 6, 5, 4, 3, 2 }
    int A[] ={ 6, 5, 3, 1, 8, 7, 2, 4  };
    int n = sizeof(A)/sizeof(int);
    BubbleSort(A, n);
        printf("冒泡排序结果：");
        for (int i = 0; i < 8; i++)
    {
                printf("%d ", A[i]);
            
    }
        printf("\n");
        return 0;
}
