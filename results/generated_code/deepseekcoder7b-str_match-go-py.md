The Python version of the code would look like this:

```python
def match(first, second):
    print(f'1. {first} starts with {second}: {first.startswith(second)}')
    
    i = first.find(second)
    print(f'2. {first} contains {second}: {i != -1}')
    
    if i != -1:
        print(f'2.1. at location {i}')
        
        start = i+len(second)
        while True:
            i = first[start:].find(second)
            
            if i == -1:
                break
                
            print(f'2.2. at location {start + i}')
            start += i + len(second)
        
    print(f'3. {first} ends with {second}: {first.endswith(second)}')
    
match("abracadabra", "abr")
``` 

This Python script does the same as your original Golang code. It uses string methods `startswith()`, `find()` and `endswith()` to perform the required operations on two strings: first checking if the first string starts with the second one (match function 1), then it checks if there is a match anywhere in the first string (function 2). If such a match is found, its location is printed (sub-functions 2.1 and 2.2). The script also confirms whether the first string ends with the second string (function 3).

