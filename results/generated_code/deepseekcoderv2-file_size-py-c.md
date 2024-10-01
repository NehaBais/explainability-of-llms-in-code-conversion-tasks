## Solution:
In this solution, I use the getsize function from the os module to find the size of a file. The first example uses the current working directory, while the second one searches in the root folder for the input file. 
```
import os

# Current directory
size = os.path.getsize('input.txt')
print(f'The size is: {size}')

# Root directory
size = os.path.getsize('/input.txt')
print(f'The size is: {size}')
```
