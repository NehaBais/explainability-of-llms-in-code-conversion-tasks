To convert the given Java code to Python, we need to define a Python class called `strAppend` and rewrite the main method as it's not available in Python:
```python
class strAppend:
    def __init__(self):
        self.string = "abc"

    def printString(self):
        print(self.string)
        self.string += "def"
        print(self.string)

if __name__ == "__main__":
    obj = strAppend()
    obj.printString()
``` 
In this code, we define a class `strAppend` with an `__init__` method that initializes the string variable. Inside the `printString` method, we print the initial value of the string and then append another string literal to it using the `+=` operator. Finally, in the main block, we create an object of the `strAppend` class and call the `printString` method. The contents of the variable will be printed after the append operation.
