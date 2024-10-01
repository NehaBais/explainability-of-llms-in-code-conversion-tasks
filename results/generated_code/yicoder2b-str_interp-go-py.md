The equivalent code in Python would be:

```python
def main():
    str = "Mary had a {} lamb"
    txt = "little"
    out = str.format(txt)
    print(out)

if __name__ == "__main__":
    main()
```
This code does the same thing as your original Golang code: it interpolates the string "Mary had a %s lamb" with the variable `txt` (which is set to "little" in this case) and prints out the result.
