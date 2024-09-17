```javascript
function factors(n) {
    let factors = new Set();
    factors.add(n);
    factors.add(1);

    for(let test = n - 1; test >= Math.sqrt(n); test--) {
        if(n % test == 0) {
            factors.add(test);
            factors.add(n / test);
        }
    }

    return Array.from(factors);
}
```

In JavaScript, the `Set` object lets you store unique values of any type. This is useful when you want to avoid duplicates in an array. It doesn't have a built-in way to sort its elements like Java's `TreeSet`, so we convert it back to an array before returning it.

Please note that this solution does not guarantee the order of factors, unlike the original Java code which maintained sorted order. If maintaining sorted order is important for your use case, you might want to use a different approach or library for handling sets in JavaScript.
