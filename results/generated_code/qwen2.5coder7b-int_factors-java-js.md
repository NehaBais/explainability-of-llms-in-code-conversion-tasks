Here is the equivalent JavaScript code:

```javascript
function factors(n) {
    let factors = new Set();
    factors.add(n);
    factors.add(1);

    for(let test = n - 1; test >= Math.sqrt(n); test--)
        if(n % test === 0) {
            factors.add(test);
            factors.add(n / test);
        }
    return factors;
}
```

This JavaScript function `factors` does exactly the same thing as your Java function. It initializes a Set with two values: `n` and `1`. Then it iterates over all numbers from `n-1` down to `Math.sqrt(n)`, checking if each number is a factor of `n`. If it is, it adds both the factor and its complement (the result of dividing `n` by the factor) to the Set. Finally, it returns the Set of factors.
