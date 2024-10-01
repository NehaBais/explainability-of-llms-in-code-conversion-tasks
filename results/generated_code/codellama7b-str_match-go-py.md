 Here is the Python code that corresponds to the given Go code:

```
import re

def main():
    first_string = "abracadabra"
    second_string = "abr"

    print(f'1. {first_string} starts with {second_string}: {first_string.startswith(second_string)}')
    i = first_string.find(second_string)
    print(f'2. {first_string} contains {second_string}: {i >= 0}')
    if i >= 0:
        print(f'2.1. at location {i}')
        for start in range(i+1, len(first_string)):
            i = first_string[start:].find(second_string)
            if i < 0:
                break
            print(f'2.2. at location {start + i}')
            start += i + 1
        print('2.2. and that is all')
    print(f'3. {first_string} ends with {second_string}: {first_string.endswith(second_string)}')

if __name__ == '__main__':
    main()
```
The Python code uses the `str.startswith()`, `str.find()`, `str.endswith()` and `re.finditer()` methods to perform the three types of string matching as described in the Go code. The output is similar to the output of the Go program.
