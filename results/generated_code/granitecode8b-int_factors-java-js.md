Here's the converted JavaScript code for computing the factors of a positive integer:
```javascript
function factors(n) {
 const factors = new Set();
 factors.add(n);
 factors.add(1);
 for (let test = n - 1; test >= Math.sqrt(n); test--) {
 if (n % test === 0) {
 factors.add(test);
 factors.add(Math.floor(n / test));
 }
 }
 return Array.from(factors).sort((a, b) => a - b);
}
```
This code uses a `Set` to store the factors and adds the number itself and 1 as initial factors. It then iterates through all numbers from `Math.sqrt(n)` to `n-1`, checking if each number divides `n` evenly. If it does, it adds that factor and its corresponding quotient (the result of dividing `n` by the divisor) to the set. Finally, it converts the set back into an array and sorts it numerically before returning it.

