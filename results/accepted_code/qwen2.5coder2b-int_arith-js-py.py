import sys

# Check if exactly two arguments are provided
if len(sys.argv) != 3:
    print("Usage: python script_name.py <a> <b>")
    sys.exit(1)

try:
    a = int(sys.argv[1])
    b = int(sys.argv[2])

    # Perform calculations
    sum = a + b
    difference = a - b
    product = a * b
    division = a / b  # Python uses integer division for this purpose
    remainder = (
        a % b
    )  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

    # Print results
    print(f"a + b = {sum}")
    print(f"a - b = {difference}")
    print(f"a * b = {product}")
    print(f"a / b = {division:.2f}")  # Format division result to 2 decimal places
    print(f"a % b = {remainder}")

except ValueError:
    print("Both inputs must be integers.")
