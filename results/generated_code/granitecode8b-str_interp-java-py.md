Here's how you can do it in Python:
```python
adjective = "big"
lyric = "Mary had a {} lamb".format(adjective)
print(lyric)
```
In this example, we first define the `adjective` variable to have the value `"big"`. Then, we use string interpolation by formatting the string `"Mary had a {} lamb"` with the value of `adjective`. The curly braces `{}` are placeholders for variables or values that will be inserted into the string. When we run this code, it will output the following:

Mary had a big lamb

