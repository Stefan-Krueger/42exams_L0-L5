#include <unistd.h>

int main()
{
	unsigned int num = 10;
	int bit = 7;

	while (bit >= 0)
	{
		char c = (num & (1LL<<bit))? '1' : '0';
		write(1, &c, 1);
		bit--;
	}
}
