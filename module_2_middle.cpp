int itc_min_num(long long number)
{
    int maxi = 10, num;
     while(number!=0)
    {
        num = number%10;
        if(num <= maxi)
        {
            maxi = num;
        }
        number = number/10;
    }
    return maxi;
}
int itc_rev_num(long long number)
{

    int score = 0;
    while (number!= 0)
    {
        if(number%10 != 0)
        {
            score++;
        }

        number = number/10;
    }
    return score;
}
int itc_null_count(long long number)
{
    int score = 0;
    while (number!= 0)
    {
        if(number%10 == 0)
        {
            score++;
        }

        number = number/10;
    }
    return score;
}
bool itc_mirror_num(long long number)
{
    string strNum = to_string(number);
    int sizs = strNum.length();

    for (int i = 0; i < sizs / 2; i++)
    {
        if (strNum[i] != strNum[sizs - i - 1])
        {
            return false;
        }
    }

    return true;
}
int itc_mirror_count(long long number)
{
    return 0;
}
int itc_second_max_num(long long number) {
    if (number <= 9) {
        return -1;
    }

    int max1 = -1;
    int max2 = -1;

    while (number > 0) {
        int digit = number % 10;

        if (digit >= max1) {
            max2 = max1;
            max1 = digit;
        } else if (digit > max2 && digit != max1) {
            max2 = digit;
        }

        number /= 10;
    }

    return max2;
}
int itc_second_simple_max_num(long long number)
{
    if (number <= 9) {
        return -1;
    }

    int max1 = -1;
    int max2 = -1;

    while (number > 0) {
        int digit = number % 10;

        if (digit >= max1) {
            max2 = max1;
            max1 = digit;
        } else if (digit > max2 && digit != max1) {
            max2 = digit;
        }

        number /= 10;
    }
    if (max1 == max2)
        return -1;
    else
        return max2;
}
