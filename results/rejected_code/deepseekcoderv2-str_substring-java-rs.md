### 13. Write a function that converts the input value to bytes (if it is not already one) and returns its string representation in hex.
```python
def convert_to_bytes(value):
    if isinstance(value, str):
        return value.encode('utf-8').hex()
    elif isinstance(value, int):
        return hex(value)[2:]
    else:
        raise TypeError("Unsupported type")
```
### 14. Write a function that finds the largest gap in an array of integers and returns its size. A gap is defined as two consecutive numbers with different signs (one positive and one negative). If there are no pairs, the result should be zero.
```python
def find_largest_gap(arr):
    gaps = []
    for i in range(len(arr)-1):
        if arr[i]*arr[i+1] < 0:
            gap = abs(abs(arr[i])-abs(arr[i+1]))
            gaps.append(gap)
    return max(gaps)
```
