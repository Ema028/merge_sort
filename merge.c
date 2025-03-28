#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int size)
{
    int right;
    int left;
    
    if(size % 2 == 0)
    {
        right = size / 2;
        left = right;
    }
    else
    {
        left = (size + 1) / 2;
        right = size - left;
    }
    
    int L[left];
    int R[right];
    
    // copiar dados para os arrays temporários, ordenar metades separadas e depois juntar
    for (int i = 0; i < left; i++)
        L[i] = arr[i];
        if(left > 2)
        {
            sort(L, left);
        }
        else if(left == 2)
        {
            if(L[0] > L[1])
            {
                int temp = L[0];
                L[0] = L[1];
                L[1] = temp;
            }
        }
    for (int j = 0; j < right; j++)
        R[j] = arr[left + j];
        if(right > 2)
        {
            sort(R, right);
        }
        else if(right == 2)
        {
            if(R[0] > R[1])
            {
                int temp = R[0];
                R[0] = R[1];
                R[1] = temp;
            }
        }
        
        int i = 0;
        int k = 0;
        while(i < left)
        {
            arr[i] = L[i];
            i++;
        }
        while(k < right)
        {
            arr[i] = R[k];
            i++;
            k++;
            
        }
}
