The equivalent JavaScript code for the given Java code is:

```JavaScript
function factors(n) {
    var factors = [];
    factors.push(1, n);
    for (var test = n - 1; test >= Math.sqrt(n); test--)
        if (n % test == 0) {
            factors.push(test);
            factors.push(n / test);
        }
    return factors.sort((a, b) => a-b); // sort the array in ascending order
}
```
This JavaScript function `factors` takes an integer as input and returns an array of its unique factors in ascending order. It starts by adding 1 and the number itself to the result list (`factors`), then iterates over each test number from n - 1 down to sqrt(n). If any factor is found (i.e., n % test equals zero), the numbers are added to the results array. The function finally returns this sorted array.
