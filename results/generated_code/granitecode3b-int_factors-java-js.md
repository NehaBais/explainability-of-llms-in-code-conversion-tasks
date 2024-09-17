Sure, here's the equivalent JavaScript code:
```javascript
function factors(n) {
 const factors = new Set([n, 1]);
 for (let test = n - 1; test >= Math.sqrt(n); test--) {
 if (n % test === 0) {
 factors.add(test);
 factors.add(Math.floor(n / test));
 }
 }
 return factors;
}
```
This code should compute the factors of a positive integer, including every prime number with two factors: 1 and itself. The `Set` data structure is used to store the unique factors in ascending order.

