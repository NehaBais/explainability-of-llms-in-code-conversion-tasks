def main():
    n1 = int(input("enter number: "))
    n2 = int(input("enter number: "))

    if n1 < n2:
        print(f"{n1} less than {n2}")
    elif n1 == n2:
        print(f"{n1} equal to {n2}")
    else:
        print(f"{n1} greater than {n2}")
