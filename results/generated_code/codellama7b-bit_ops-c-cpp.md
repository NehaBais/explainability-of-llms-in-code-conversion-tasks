 Here is the converted code from C to C++:
```
void bitwise(int a, int b)
{
	std::cout << "a and b: " << (a & b) << std::endl;
	std::cout << "a or b: " << (a | b) << std::endl;
	std::cout << "a xor b: " << (a ^ b) << std::endl;
	std::cout << "not a: " << ~a << std::endl;
	std::cout << "a << n: " << (a << b) << std::endl; /* left shift */
	std::cout << "a >> n: " << (a >> b) << std::endl; /* on most platforms: arithmetic right shift */
	/* convert the signed integer into unsigned, so it will perform logical shift */
	unsigned int c = a;
	std::cout << "c >> b: " << (c >> b) << std::endl; /* logical right shift */
	/* there are no rotation operators in C++ */
	return 0;
}
```
Note that the `<<` and `>>` operators have been replaced with their C++ equivalents, `std::cout`, to print the results to the console. Additionally, the signed integer `a` has been converted into an unsigned integer `c` to perform logical shift operations.
