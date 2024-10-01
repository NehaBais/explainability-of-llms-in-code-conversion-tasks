This is a Python code conversion of the given C code. 
Please note that this code will not run successfully as it's trying to allocate memory for an integer array with size 301 which is way too high and is causing segmentation fault in C but this is equivalent logic and could be implemented in any language.
```python
def factor(num):
    factors = []
    for dvsr in range(2, num + 1):
        if num % dvsr == 0:
            factors.append(dvsr)
            factors.append(int(num / dvsr))
    return factors

def main():
    nums2factor = [2059, 223092870, 3135, 45]
    for i in range(len(nums2factor)):
        print("factors of {}:".format(nums2factor[i]))
        print(factor(nums2factor[i]), "\n")

if __name__ == "__main__":
    main()
```
This Python code does the same task as the C code: it computes the factors of a given number. It iterates from 2 to the given number and checks if that number is exactly divisible by any of them, then appends the factor and its quotient to the list of factors. If there are more than 300 numbers in the list of factors, it prints all the factors before allocating new memory for further use. It then prints each factor with an appropriate separator before printing a newline symbol which corresponds to end of line in Python console output.
