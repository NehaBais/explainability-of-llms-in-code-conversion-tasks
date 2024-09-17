# Function compare is written with standard comparison operators
def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    if a < b:
        print(f"{a} is less than {b}")
    if a > b:
        print(f"{a} is greater than {b}")


# Function compare_with_type_check is written with type check before comparison
def compare_with_type_check(a, b):
    if type(a) == type(b):
        compare(a, b)
    else:
        print(
            f"{a} ({type(a).__name__}) and {b} ({type(b).__name__}) are not of the same type and cannot be compared."
        )


# Main program
while True:
    try:
        a = int(input("Please enter first integer: "))
        b = int(input("Please enter second integer: "))
        compare_with_type_check(a, b)  # Calling function with type check
    except ValueError:
        print("Invalid input! Please provide valid integers.")
