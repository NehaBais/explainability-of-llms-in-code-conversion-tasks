Here is the equivalent JavaScript code:

```javascript
function factors(n) {
    let factors = new Set();
    factors.add(n);
    factors.add(1);

    for (let test = n - 1; test >= Math.sqrt(n); test--) {
        if (n % test === 0) {
            factors.add(test);
            factors.add(Math.floor(n / test)));
        }
    }
    return factors;
}
```
This JavaScript function `factors` takes a positive integer `n` as input and returns a Set containing the factors of `n`. The function iterates through all numbers from `n-1` down to the square root of `n`, checking each number to see if it divides evenly into `n`. If so, the divisor (`test`) and the quotient (`n / test`) are both added to the set of factors.
Please note that JavaScript does not support long integers by default but you can use libraries like BigInteger in JavaScript to handle large numbers if needed.
