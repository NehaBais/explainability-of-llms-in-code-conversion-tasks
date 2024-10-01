n1 = int(input("enter number: "))
n2 = int(input("enter number: "))

if n1 < n2:
    print(str(n1) + " is less than " + str(n2))
elif n1 == n2:
    print(str(n1) + " is equal to " + str(n2))
else:  # implies n1 > n2
    print(str(n1) + " is greater than " + str(n2))
