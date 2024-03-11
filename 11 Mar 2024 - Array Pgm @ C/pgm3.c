
 // C program to count total number of negative elements in array


#include <stdio.h>


int main()
{
    int arr[MAX_SIZE];
    int i, size, count = 0;

    printf("Enter size of the array : ");
    scanf("%d", &size);



    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<size; i++)
    {
        /* Increment count if current array element is negative */
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\nTotal negative elements in array = %d", count);

    return 0;
}
