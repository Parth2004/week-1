#include <iostream>
int *readNumbers()
{

    int *arr;
    arr = new int[10];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> *(arr + i);
        std::cout << "Print"<< *(arr + i);
    }
    return arr;
}

void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << *(numbers + i) << std::endl;
    }
}


int secondSmallestSum(int *numbers, int length){
    int small, secondsmall;
    small = secondsmall = 0;
    // add all numbers to secondsmall and one number less to small
    for (int i = 0; i < length - 1; i++)
    {
        small += numbers[i];
        secondsmall += numbers[i];
    }
    secondsmall += numbers[length - 1];
    // update small and secondsmall
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = i; j < length; j++)
        {
            sum += numbers[j];
            if (sum < small)
            {
                secondsmall = small;
                small = sum;
            }
            else if (sum < secondsmall)
                secondsmall = sum;
        }
    }
    return secondsmall;
}

int main(){
    int *a;
    a = readNumbers();
    int secondsmall = secondSmallestSum(a, 4);
    std::cout << "Second smallest sum: " << secondsmall << std::endl;

    return 0;
}