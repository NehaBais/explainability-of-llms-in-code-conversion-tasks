Here's the converted code from C++ to JavaScript:
```javascript
function generateFactors(n) {
 const factors = [1, n];
 for (let i = 2; i * i <= n; i++) {
 if (n % i === 0) {
 factors.push(i);
 if (i * i !== n) {
 factors.push(n / i);
 }
 }
 }
 return factors.sort((a, b) => a - b);
}
const sampleNumbers = [3135, 45, 60, 81];
for (let i = 0; i < sampleNumbers.length; i++) {
 const factors = generateFactors(sampleNumbers[i]);
 console.log(`Factors of ${sampleNumbers[i]} are: ${factors.join(' ')}`);
}
```
This code defines a function `generateFactors` that takes an integer `n` as input and returns an array of its factors. The main function then uses this function to compute the factors of some sample numbers and logs the results to the console. Note that this implementation is not exactly the same as the original C++ code, since JavaScript does not have a built-in way to sort vectors or copy elements from one vector to another.

