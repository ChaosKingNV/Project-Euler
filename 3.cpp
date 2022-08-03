/**************************************
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
****************************************/

#include <iostream>

int main()
{
    long long int n = 11 ;
    int answer = 1;

    
    
    for (int i = 3 ; i < n; i++) 
    {
        if (answer < 2)
        {
            if (n%2 == 0)
                {
                    answer = 2;
                    n = n/2;
     
                }
        }
        
        for(int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
            if ((j+1) == i)
            {
                if (n % i == 0)
                {
                    answer = i;
                    n = n/i;
                    std:: cout << n << " ";
                }   
            }
        }
    }
    std::cout << answer;
}