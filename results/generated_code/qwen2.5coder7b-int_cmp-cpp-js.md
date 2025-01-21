Here's how you can convert the given C++ code to JavaScript:

```javascript
let readline = require('readline');

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter two integers separated by a space: ", function(answer) {
    let nums = answer.split(' ').map(Number);

    if (isNaN(nums[0]) || isNaN(nums[1])) {
        console.log('Invalid numbers');
        return;
    }

    let a = nums[0];
    let b = nums[1];

    // test for less-than
    if (a < b)
      console.log(a + " is less than " + b);

    // test for equality
    if (a == b)
      console.log(a + " is equal to " + b);

    // test for greater-than
    if (a > b)
      console.log(a + " is greater than " + b);
});
```
This code reads input from the user, separates the two numbers using split function and map(Number) to convert string inputs into numbers. It then uses JavaScript's comparison operators (<, ==, >) to compare a and b as in C++.
