#include <iostream>

using namespace std;

void itc_num_print(int number)
{
    cout << number;
}
int itc_len_num(long long num)
{
    int razrads = 0;
    if (num == 0)
        return 1;
    while (num!=0)
    {
        num=num/10;
        razrads++;
    }
    return razrads;
}
int itc_sum_num(long long number)
{
    int summa = 0;
    while(number!=0)
    {
        if (number < 0)
            number = -number;
        summa += number%10;
        number = number/10;
    }
    return summa;
}
long long itc_multi_num(long long number)
{
    int summa = 1;
    if (number < 0)
        number = -number;
    while(number!=0)
    {
        summa *= number%10;
        number = number/10;
    }
    return summa;
}
int itc_max_num(long long number)
{
    int maxi = 0, num;
    if (number < 0)
        number = -number;
     while(number!=0)
    {
        num = number%10;
        if(num >= maxi)
        {
            maxi = num;
        }
        number = number/10;
    }
    return maxi;
}
