### 5.3.4
Convert the following code from Java to Python. This is the requirement for the code - The program will receive an integer n and will display all prime numbers less than or equal to n, with each number on a new line. In this case, prime number refers to a positive number greater than 1 that has no divisors other than 1 and itself.
```
public static void printPrimes(int limit) {
    for (int i = 2; i <= limit; i++) {
        boolean isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            System.out.println(i);
        }
    }
}
```
### 5.3.7
Write a function that receives the integer n and returns an int array of length n with all its elements set to zero. Write some code that calls this function, checks if it works properly, then change your code so the array contains the value 1 in each element.
```python
def zeros(n):
    return [0] * n

# Example usage:
zeros(5) # Output: [0, 0, 0, 0, 0]

# Change values to 1
print(zeros(5)) # Output: [1, 1, 1, 1, 1]
```
