long long itc_bin_num(long long number) {
    long long binary = 0;
    long long multiplier = 1;

    while (number != 0) {
        int digit = number % 2;
        binary += digit * multiplier;
        multiplier *= 10;
        number /= 2;
    }

    return binary;
}
long long itc_oct_num(long long number){
    long long binary = 0;
    long long multiplier = 1;

    while (number != 0) {
        int digit = number % 8;
        binary += digit * multiplier;
        multiplier *= 10;
        number /= 8;
    }

    return binary;
}
int itc_rev_bin_num(long long number) {
    int dec = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        dec += digit * multiplier;
        multiplier *= 2;
        number /= 10;
    }

    return dec;
}
int itc_rev_oct_num(long long number){
    int dec = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        dec += digit * multiplier;
        multiplier *= 8;
        number /= 10;
    }

    return dec;
}
