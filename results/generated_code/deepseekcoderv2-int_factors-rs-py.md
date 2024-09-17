```python
import math
def factor(num):
  # Creates a new vector for the factors of the number
  factors = []
  # Iterates through every integer from 1 up to sqrt(num)+1
  for i in range(1, int((math.sqrt(num)) + 1)):
    # If num is divisible by i, add both i and num/i to the list of factors
    if (num % i == 0):
      factors.append(int(i))
      if (int(num/i) != int(math.sqrt(num))):
        factors.append(int(num/i))
  # Sorts the factors into numerical order for viewing purposes
  factors.sort()
  
  return factors
```