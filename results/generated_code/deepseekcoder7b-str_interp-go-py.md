The Python version of the provided Golang code would be something like this:

```python
str_ = "Mary had a {} lamb"
txt  = "big"
out  = str_.format(txt)
print(out)
``` 

In python, you can use the format method to replace placeholders in strings with values. The curly braces are placeholders that get replaced by variables or expressions inside the format() function. In this case, it is equivalent to `%s` in Go's sprintf.

