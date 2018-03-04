/*************************************************************************
	> File Name: quicksort.c
    > Author:JasonOk:
	> Mail: 
	> Created Time: Sun 04 Mar 2018 10:28:48 PM CST
 ************************************************************************/
#include<stdio.h>

void Swap(int num[], int i, int j)
{
    int temp = num[i];
    num[i] = num[j];
    num[j] = temp;
}

int Partitionint(int A[], int start, int end)
{
    int pivot = A[end];
    int tail = start - 1;
    for(int i = start; i < end; i++)
    {
        if(A[i] <= pivot){
            Swap(A, ++tail, i);
        }
    }
    Swap(A, tail+1, end);

    return tail+1;
}

void QuickSort(int A[], int start, int end)
{
    if(start >= end){
        return;
    }

    int pivott_index = Partitionint(A, start ,end);
    QuickSort(A, start, pivott_index-1);
    QuickSort(A, pivott_index+1, end);
}

int main()
{
        int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8  }; // 从小到大快速排序
        int n = sizeof(A)/sizeof(int);
        QuickSort(A, 0, n - 1);
        printf("快速排序结果：");
        for (int i = 0; i < n; i++)
        {
                printf("%d ", A[i]);
            
        }
        printf("\n");
        return 0;

}
