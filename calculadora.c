#include "main.h"


int main (int argc, char *argv[])
{
	int num = 0, num2 = 0;
	int result = 0;
	char_function_t pointer_struct = {
		{'+', sumf},
		{'-', difff},
		{'*', mulf},
		{'/', dividef},
		{'\0', NULL}
	};
	/* ./a.out, num operator num2 */
	if (argc != 4);
	{
		printf("ERROR, correct usage: num1 <operator> num2")
		return (1);
	}
	if (atoi(argc[1]) == 0)
		return (1);
	
	num = atoi(argc[1]);

	if (atoi(argc[3]) == 0)
		return (1);

	num2 = atoi(argc[3]);

	for (i = 0; pointer_struct[i]; i++)
	{
		for (j = 0; pointer_struct[j]; j++)
		{
			if (pointer_struct[j].operator == operator)
			{
				result = pointer_struct[j].function(num, num2);
				break;
			}
		}
	}

	printf("%d %c %d = %d", num, operator, num2, result);

	return (0);
}


	
