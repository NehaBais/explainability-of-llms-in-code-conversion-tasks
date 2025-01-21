def factor(num):
 factors = [] # creates an empty list to store the factors of the number
 for i in range(1, int(num**0.5) + 1):
 if num % i == 0:
 factors.append(i) # adds smallest factor to the list
 factors.append(num//i) # adds largest factor to the list
 factors.sort() # sorts the factors in ascending order
 return factors # returns the sorted list of factors