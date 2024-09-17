def factor(num):
    factors = [] # creates a new list for the factors of the number

    for i in range(1, int(((num ** 0.5) + 1)) * 2):  # loops from 1 to square root of num plus one
        if num % i == 0:  # if number is divisible by loop variable
            factors.append(i)  # appends smallest factor to factors list
            factors.append(num // i)  # appends largest factor to factors list
    factors.sort()  # sorts the factors into numerical order for viewing purposes

    return factors  # returns the factors list

print(factor(100)))  # prints factors of 100
print(factor(101)))  # prints factors of 101