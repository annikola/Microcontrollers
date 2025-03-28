#include <stdio.h>

extern int map(const char *string);
extern int reduce(int prehash);
extern int fibonacci(int hash);
extern int crc_like_checksum(const char *string);

int main()
{
	const char *str = "A9b3307zfa$1Z9"; // 1053 --> 9
	// const char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 4056 --> 1
	// const char *str = "abcdefghijklmnopqrstuvwxyz"; // 5551 --> 2
	// const char *str = "0123456789"; // 97 --> 2
	
	printf("the first 10 fibonacci numbers are: ");
	for (int i=0; i<9; i++){
		printf("%d, ", fibonacci(i));
	}
	printf("%d\n", fibonacci(9));
	
	printf("The hash of %s is: %d\n", str, fibonacci(reduce(map(str))));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum(str));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum(""));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum("A"));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum("abc"));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum("123"));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum("@#!$%^"));
	printf("The crc-like checksum of %s is: %d\n", str, crc_like_checksum("a1@b2#c3$"));
	
	return 0;
}
