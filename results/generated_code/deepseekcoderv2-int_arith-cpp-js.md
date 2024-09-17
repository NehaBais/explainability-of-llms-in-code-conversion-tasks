"""
def get_user_input():
    while True:
        try:
            user_inputs = input("Enter two integers (e.g., '5 3'): ")
            if not user_inputs:
                raise ValueError("Empty input")
            values = [int(num) for num in user_inputs.split()]
            return tuple(values)
        except ValueError as e:
            print(f"Error: {e}")
            continue

def main():
    a, b = get_user_input()
    
    sum_result = a + b
    difference_result = a - b
    product_result = a * b
    quotient_result = a // b  # Integer division in Python using double slash (//)
    remainder_result = a % b  
    exponentiation_result = None  # TODO: Implement the exponentiation logic if it exists in C++
    
    print("a+b =", sum_result)
    print("a-b =", difference_result)
    print("a*b =", product_result)
    print("a/b =", quotient_result, "with remainder", remainder_result)
    
    if exponentiation_result is not None:
        print(f"a^b = {exponentiation_result}")
        
if __name__ == "__main__":
    main()

