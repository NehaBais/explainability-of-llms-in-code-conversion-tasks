Here is the JavaScript equivalent of your Java code:

```javascript
function factors(n){
    var factors = new Set([n]);
    factors.add(1);
    for (var test = n - 1; test >= Math.sqrt(n); test--) {
        if (n % test === 0) {
            factors.add(test);
            factors.add(n / test);
        }
    }
    return factors;
}
```

Note: JavaScript `Set` is similar to Java `TreeSet` but it does not maintain the insertion order and its methods are different as well (like add, has etc.) so please be aware of these differences. If you need to keep the factor in some specific order you might want to convert Set back to Array or use something like an array for JavaScript.

