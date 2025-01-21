The error occurs because the `print` statement in the `find_match` function is missing a colon after the `else` statement. The fix is to add the missing colon.

```python
def find_match(text, substring):
    match text.find(substring):
        -1: print("Did not find any matches")
        else: print(f"Found match at pos {match}")
```
