In Python you can use the format() function or f-strings to accomplish this task:

Here is the equivalent code in Python that accomplishes the same thing as your JavaScript example.

```python
original = "Mary had a X lamb"
little = "little" 
replaced = original.replace("X", little) #does not change the original string
print(replaced)
```
