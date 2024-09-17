Here is the JavaScript code that performs the same task as the C code provided:
```javascript
function factorize(num) {
  const factors = [];
  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i);
      if (i !== num / i) {
        factors.push(num / i);
      }
    }
  }
  return factors;
}

const nums2factor = [2059, 223092870, 3135, 45];
for (let i = 0; i < 4; i++) {
  console.log(`Factors of ${nums2factor[i]}: ${factorize(nums2factor[i]).join(', ')}`);
}
```
The `factorize` function takes a positive integer as input and returns an array of its factors. The function iterates through all possible divisors of the number up to its square root, checking if each divisor evenly divides the number. If it does, it adds both divisors to the `factors` array.
The code provided in the original question uses a linked list to store the factors of a number. The `Factors` struct is defined as an object with two properties: `list`, which is an array that stores the factors, and `count`, which keeps track of the number of elements in the array. The `xferFactors` function is used to resize the array when needed, and the `factor` function uses this function to compute the factors of a number.
In the code provided here, we define a function called `factorize` that takes an integer as input and returns an array of its factors. We then use this function in a for loop to compute the factors of each number in the `nums2factor` array. Finally, we print out the factors for each number using the `join` method.

