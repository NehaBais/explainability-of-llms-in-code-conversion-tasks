In Python, you can use the following code:
```
def factor(num):
    factors = []
    for i in range(1, int((num ** 0.5) + 1)):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    factors.sort()
    return factors
```
Explanation:

* The `factor` function takes an integer `num` as input and returns a list of its factors.
* We use a for loop to iterate from 1 to the square root of `num`, which is approximately equal to `num ** 0.5`.
* Inside the loop, we check if `num` is divisible by `i`. If it is, we append both `i` and `num / i` to the `factors` list.
* After the loop, we sort the `factors` list in numerical order for viewing purposes.
* Finally, we return the `factors` list.

Note that in Python, you don't need to specify the type of variables when they are defined, as the type can be inferred from the right-hand side of the assignment. Additionally, Python uses the `/` operator for integer division, which is different from Rust's `//` operator.
