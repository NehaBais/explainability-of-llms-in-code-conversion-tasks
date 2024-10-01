 In Python, you can use the `format` method to do string interpolation similar to Golang's `fmt.Sprintf`. The code in Python would look something like this:

```python
str_ = "Mary had a {} lamb"
txt = "little"
out = str_.format(txt)
print(out)  # Prints "Mary had a little lamb"
```
This is equivalent to the Golang code. In both cases, the `%s` or `{}` is replaced by the value of variable `txt`.
