### Solution

```python
def starts_with(word:str,prefix:str)->bool: #1
    return word[:len(prefix)]==prefix

def ends_with(word:str,suffix:str)->bool: #2
    return word[-(len(suffix)):]=="sufix"

def contains(word:str,search_string:str)->bool: #3
   pos=0
   while True:
        pos = word.find(search_string,pos)
        if pos == -1:
            return False
        yield pos
        pos += 1
```
