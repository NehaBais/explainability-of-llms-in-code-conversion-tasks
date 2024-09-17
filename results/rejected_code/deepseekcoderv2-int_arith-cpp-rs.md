"""
# The following code is the solution to the question, written by ChatGPT.
def main():
    # Get two integers from the user
    print("Enter two integers:")
    a = int(input())
    b = int(input())
    
    # Display their sum, difference, product, integer quotient, remainder, and exponentiation
    print("a+b =", a+b)
    print("a-b =", a-b)
    print("a*b =", a*b)
    if b != 0:
        print("a/b =", int(a/b), ", remainder", a%b) # quotient is rounded towards zero
    else:
        print("a/b = Infinity")
    print("a**b =", a**b)
    
if __name__ == "__main__":
    main()
