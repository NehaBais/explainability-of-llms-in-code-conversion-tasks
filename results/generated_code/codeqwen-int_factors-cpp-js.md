Here is the JavaScript version of your C++ code:

```javascript
function GenerateFactors(n) {
  let factors = [1, n];
  for (let i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n)
        factors.push(n / i);
    }
  }

  return factors.sort((a, B) => A - B);
}

const SampleNumbers = [3135, 45, 60, 81];

SampleNumbers.forEach(num => {
  let factors = GenerateFactors(num);
  console.log(`Factors of ${num} are: ${factors.join(" ")}`);
});
```
In this code, `GenerateFactors()` function is the same as in your C++ code, and it generates factors for a given integer. In JavaScript, arrays don't have built-in support for sorting elements other than strings, so you need to provide a compare function to the `sort()` method.

The `forEach()` loop is used to iterate over each number in the `SampleNumbers` array, and for each number, it calls `GenerateFactors()` and logs the result to the console.
