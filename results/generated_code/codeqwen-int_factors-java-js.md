Here is the equivalent JavaScript code for your Java function:

```JavaScript
function factors(n) {
    var factors = new Set();
    factors.add(n);
    factors.add(1);
    for (var test = n - 1; test >= Math.sqrt(n); test--) {
        if (n % test == 0) {
            factors.add(test);
            factors.add(n / test);
        }
    }
    return factors;
}
```

JavaScript doesn't have a built-in `TreeSet` data structure like Java, but we can mimic this behavior using JavaScript's `Set`. This code does the same thing: it finds all factors of a number and adds them to a set (which automatically removes duplicates). The function returns the final set of unique factor values.
