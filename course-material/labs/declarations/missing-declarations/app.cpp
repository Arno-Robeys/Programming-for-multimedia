#include <iostream>

int next_unsigned()
{
    int x;
    std::cin >> x;
    return x;
}

bool is_divisible_by(int a, int b)
{
    return b != 0 ? a % b == 0 : false;
}

int sqr(int x)
{
    return x * x;
}

bool is_prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        int k = 2;

        while (sqr(k) <= n)
        {
            if (is_divisible_by(n, k))
            {
                return false;
            }

            ++k;
        }

        return true;
    }
}

int main()
{
    std::cout << "Enter a value: ";
    int n = next_unsigned();

    if (is_prime(n))
    {
        std::cout << n << " is prime" << std::endl;
    }
    else
    {
        std::cout << n << " is not prime" << std::endl;
    }
}
