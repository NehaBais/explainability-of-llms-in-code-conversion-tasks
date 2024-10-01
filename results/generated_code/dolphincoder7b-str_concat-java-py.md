In Python, the equivalent code would be:
```python
class Str:
   def __init__(self):
       self.s = "hello"

   def concat_string(self):
       print(self.s + " literal")
       self.s2 = self.s + " literal"
       return self.s2

if __name__ == '__main__':
    mystr = Str()
    print(mystr.concat_string())
```
In this code, we create a class named `Str`. The `__init__` method initializes the string variable `self.s` with the value "hello". We also define a method called `concat_string`, which concatenates `" literal"` to the string stored in `self.s` and prints the result along with storing it in another string variable `self.s2`.
In the main function, we create an instance of `Str` using `mystr = Str()`, then call the `concat_string` method on it which returns the concatenated value. The returned value is then printed out.
