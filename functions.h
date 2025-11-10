#pragma once
#include <iostream>
using namespace std;

int biggestNum(int num1, int num2)
{
    return max(num1, num2);
}
int countOfSimpleNum(int size, int array[])
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if (array[i] >= 2)
        {
            if (array[i] == 2 or array[i] == 3 or array[i] == 5 or array[i] == 7 or array[i] == 11 or array[i] == 13)
            {
                count++;
            } else if (array[i] > 13)
            {
                if (array[i] % 2 != 0 and array[i] % 3 != 0 and array[i] % 5 != 0 and array[i] % 7 != 0 and array[i] % 11 != 0 and array[i] % 13 != 0)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int binarySearch(int array[],int size, int key)
{
    unsigned short start = 0;
    unsigned short end = size - 1;
    unsigned short middleNum = end / 2;
    int i = 0;
    while (start <= end)
    {
        if (array[middleNum] == key)
        {
            return middleNum;
        }
        else if (array[middleNum] > key)
        {
            end = middleNum - 1;
            middleNum = (end + start) / 2;
        }
        else if (array[middleNum] < key)
        {
            start = middleNum + 1;
            middleNum = (end + start) / 2;
        }
        i++;
    }
    return -1;
}