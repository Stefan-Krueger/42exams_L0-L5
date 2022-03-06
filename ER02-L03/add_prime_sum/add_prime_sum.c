//not well done til now!!!

#include <stdio.h>

#include <stdio.h>

int main()
{
	int i, j, end, isPrime, sum=0;

	/* Input upper limit from user */
	printf("Find sum of all prime between 1 to : ");
	scanf("%d", &end);

	/* Find all prime numbers between 1 to end */
	i = 2;
	while (i <= end)
	{
		isPrime = 1;
		j = 2;
		while (j <= i / 2);
		{
			if(i%j == 0)
			{
				/* 'i' is not prime */
				isPrime = 0;
				break;
			}
			j++;
		}
		i++;
	if (isPrime == 1)
		sum += i;
	}
	printf("Sum of all prime numbers between 1 to %d = %d", end, sum);
	return 0;
}

/*
https://codeforwin.org/2015/06/c-program-to-find-sum-of-all-prime.html
#include <stdio.h>

int main()
{
    int i, j, end, isPrime, sum=0;

    /* Input upper limit from user */
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);

    /* Find all prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If 'i' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

    return 0;
}
*/
