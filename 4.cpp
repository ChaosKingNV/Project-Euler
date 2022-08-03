#include <iostream>

bool check_palindrome(int num)
{
    int n = num;
    int last_digit;
    int reversed_num = 0;
    while (n > 0)
    {
        last_digit = n % 10;
        n = n/10;
        reversed_num = (reversed_num*10) + last_digit;
    }
    
    if (num == reversed_num)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}
int main ()
{
    int number;
    int answer = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            number = i*j;

            if (check_palindrome(number))
            {
                if (number > answer)
                {
                    answer = number;
                }
                
            }
            
        }
        
    }
    
    std::cout << answer;
}