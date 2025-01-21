The equivalent code in JavaScript is as follows:

```javascript
function generateFactors(n) {
  let factors = [1, n];
  
  for(let i = 2; i * i <= n; i++) {
    if(n % i === 0){
      factors.push(i);
      if(i * i !== n)
        factors.push(n / i);
    }
  }
  
  return factors.sort((a,b) => a - b);
}

const sampleNumbers = [3135, 45, 60, 81];

sampleNumbers.forEach(num => {
  const factors = generateFactors(num);
  console.log(`Factors of ${num} are: ${factors.join(" ")}`);
});
```

In JavaScript, we have a function `generateFactors` which generates the factors of a number and returns them as an array. In the main block, we use `forEach` to process each number in our sample array and print its factors using `console.log`. The sorting is done in this case by converting the resulting array into a string with spaces between elements.
