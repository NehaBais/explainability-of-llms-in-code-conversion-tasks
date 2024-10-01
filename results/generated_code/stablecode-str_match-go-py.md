Below is the equivalent Python code for the given Golang code:

```python
def match(first, second):
    print(f'1. {first} starts with {second}: {first.startswith(second)}')

    index = first.find(second)

    if index >= 0:
        print(f'2. {first} contains {second}: True, Index Location: {index}')

        for start in range(index+1):
            temp_index = first[start:].find(second)

            if temp_index < 0:
                break

            print(f'2.2. at location {start+temp_index},')

    print(f'3. {first} ends with {second}: {first.endswith(second))}')

def main():
    match("abracadabra", "abr")

if __name__ == '__main__':
    main()
```
This Python code performs the same string matching operations as the provided Golang code. It uses the `startswith`, `find`, and `endswith` methods to determine if a string starts with another, contains at any location, or ends with another respectively. The program prints out the results of these checks for the given strings 'abracadabra' and 'abr'.
