Sure! Here's the JavaScript code that does the same thing as the C++ code:
```javascript
function generateFactors(n) {
 const factors = [1, n];
 for (let i = 2; i * i <= n; ++i) {
  if (n % i === 0) {
   factors.push(i);
   if (i * i !== n) {
    factors.push(Math.floor(n / i));
   }
  }
 }

 factors.sort((a, b) => a - b);
 return factors;
}

const sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i) {
 const factors = generateFactors(sampleNumbers[i]);
 console.log(`Factors of ${sampleNumbers[i]} are: ${factors}`);
}
```
The main difference between the two is that in C++, we use a vector to store the factors, and we sort the vector after generating it using the `sort` function. In JavaScript, we use an array to store the factors, and we sort the array after generating it using the `sort` method. Additionally, in JavaScript, we use the `Math.floor` function to get the floor division of n/i, which is the same as the integer division operator (/) in C++.

