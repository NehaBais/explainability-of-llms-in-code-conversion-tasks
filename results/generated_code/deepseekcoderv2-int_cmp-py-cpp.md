"""
import sys

def main():
    # Enter code below this line.
    try: 
        int(input("Enter value of a : "))
        int(input("Enter value of b : "))
        
    except ValueError:
        print("That was not an integer! Please enter integers only.")
    
if __name__ == '__main__':
    main()
