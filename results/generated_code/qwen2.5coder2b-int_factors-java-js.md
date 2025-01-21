In JavaScript, the `TreeSet` class does not exist by default as it is part of Java. However, you can use a map to store unique values and get all keys in sorted order. Here is how you can write this function:

```javascript
function factors(n) {
    const factors = new Map();

    for(let i = 1; i <= Math.sqrt(n); i++) {
        if(n % i === 0) {
            factors.set(i, n / i);
            factors.set(n / i, i); // This line is redundant as the factor pair would be added twice but it doesn't affect the result.
        }
    }

    return Array.from(factors.keys()).sort((a, b) => a - b);
}
```

This function works by iterating over all numbers from 1 to `Math.sqrt(n)`. If `n` is divisible by `i`, then both `i` and `n / i` are factors. We store them in a map, but because `Map` does not support duplicate keys, we only store each factor once. Finally, we return the values of the map as an array sorted in ascending order using `Array.from()`.
