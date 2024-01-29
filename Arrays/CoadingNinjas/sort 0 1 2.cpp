#include <vector>

void sort012(int *arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
    }

    // Update the array with the sorted values
    int index = 0;

  
    while (count0 > 0)
    {
        arr[index++] = 0;
        count0--;
    }

  
    while (count1 > 0)
    {
        arr[index++] = 1;
        count1--;
    }

    while (count2 > 0)
    {
        arr[index++] = 2;
        count2--;
    }
}
