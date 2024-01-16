#include <stdio.h>
#include <stdlib.h>

/* Here is a list of the most used standard types in C
 * and their size (min max)
 * char => -128 127
 * unsigned char => 0 255
 * int => -2147483648 2147483647
 * unsigned int => 0 4294967295
 * long/unsigned long is the same as int/unsigned int
 * long long => -9223372036854775808 9223372036854775807
 * unsigned long long => 18446744073709551615
 * float and double are really big so you probably don't need to know the exact value
 * in case you still want it, here is a link describing these types
 * https://learn.microsoft.com/en-us/cpp/c-language/type-float
 */

// This is about understanding how ascii works and the storage types in C
int main(void)
{
	int a = 97;
	int b = '0';
	char c = 65;
	char d = '*';

	// Since a char is 1 octet (= 8bits)
	// the values go from -128 to 127 (range of 2^8 = 256)
	char e = 132;
	// Here, we cause an overflow of MAX_CHAR + 5
	// which will "go back" to -124
	// 127 + 1 => -128 then -128 + 1 => -127, etc... so 127 + 5 = -124

	printf("As int => a: %d - b: %d - c: %d - d: %d - e: %d\n", a, b, c, d, e);
	printf("As char => a: '%c' - b: '%c' - c: '%c' - d: '%c'\n", a, b, c, d);

	return (EXIT_SUCCESS);
}
