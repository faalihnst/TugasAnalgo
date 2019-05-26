#include <stdio.h>
#include <limits.h>
#include <conio.h>

int heap[1000000],UkuranHeap;

void Init()
{
    UkuranHeap = 0;
    heap[0] = -INT_MAX;
}

void Insert(int element)
{
    UkuranHeap++;
    heap[UkuranHeap] = element; /*Sisipkan di tempat terakhir*/
    /*Sesuaikan posisinya*/
    int now = UkuranHeap;
    while(heap[now/2] > element)
    {
            heap[now] = heap[now/2];
            now /= 2;
    }
    heap[now] = element;
}
int DeleteMin()
{
    int minElement,lastElement,child,now;
    minElement = heap[1];
    lastElement = heap[UkuranHeap--];

    for(now = 1; now*2 <= UkuranHeap ;now = child)
    {
            child = now*2;
            if(child != UkuranHeap && heap[child+1] < heap[child] )
            {
                    child++;
            }
            if(lastElement > heap[child])
            {
                    heap[now] = heap[child];
            }
            else
            {
                    break;
            }
    }
    heap[now] = lastElement;
    return minElement;
}
int main()
{
    int number_of_elements;
    printf("Masukkan Berapa Banyak Elemen yang Ingin dimasukkan : ");
    scanf("%d",&number_of_elements);
    int iter, element;
    Init();
    printf("Masukkan %d Elemen : \n",number_of_elements);
    for(iter = 0;iter < number_of_elements;iter++)
    {
        scanf("%d",&element);
        Insert(element);
    }
    printf("Heap Sort Array : \n");
    for(iter = 0;iter < number_of_elements;iter++)
    {
        printf("%d ",DeleteMin());
    }
    printf("\n");
    getch();
}
