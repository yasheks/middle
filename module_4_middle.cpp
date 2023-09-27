int itc_covert_num(long long number, int ss)
{
    long long system = 0;
    long long multiplier = 1;

    while (number != 0) {
        int digit = number % ss;
        system += digit * multiplier;
        multiplier *= 10;
        number /= ss;
    }

    return system;
}
int itc_rev_covert_num(long long number, int ss)
{
    int dec = 0;
    int multiplier = 1;
    if (ss == 10)
        return number;
    if (number == 0)
        return 0;
    while (number != 0) {
        int digit = number % 10;
        dec += digit * multiplier;
        multiplier *= ss;
        number /= 10;
    }

    return dec;
}

