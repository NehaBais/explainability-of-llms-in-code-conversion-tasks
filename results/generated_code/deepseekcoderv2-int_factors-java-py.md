# Solution

## Python Code:

```python
# This code is contributed by Naseem Hasan
def Factors(num):
   """
     Compute the factors of a positive integer n, which is defined as the positive integers by which the number being factored can be divided to yield a positive integer result.
     Args: 
         num (int) : The input integer
     Returns:
        list_set : A set containing all factors of the given number n in ascending order
    """
   # TreeSet is an ordered collection that contains no duplicate elements, it will be used to store factors of a positive integers.
   tree_set = []
   if num == 0:
       return "please enter other numbers"
   elif num < 0:
       print("input should not less than zero")
   else:
       for i in range(1, int(num ** 0.5)+1): # the loop is from 1 to the sqrt of given number n  
           if (num % i == 0):  # check if num is divisible by integer between [1,sqrt(n)]
               tree_set.add(i)
               tree_set.add(int(num / i))
   return sorted(tree_set)
```
