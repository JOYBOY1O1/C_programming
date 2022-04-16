#include<stdio.h>


int returnMax(int array[], int n)
{   
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max){
            max = array[i];
        }
    }
    // array[0]=999;  we changed the value of array from another function 
    return max;
}
int returnMin(int array[], int n)
{
    int min=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}

int main()
{
    int arr[]= {1,12,2,5455,5,67,654};
    int max = returnMax(arr,7);
    int min = returnMin(arr,7);
    printf("\nMaximum element in the array is %d\n\n", max);
    
    printf("\nMinimum element in the array is %d\n\n", min);

// To print all elements of array
    for(int i=0;i<7;i++)
    {
        printf("The element %d is %d\n",i,arr[i]);
    }

    return 0;
}