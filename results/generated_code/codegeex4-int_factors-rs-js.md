Here is your code converted from Rust to JavaScript:

```javascript
function assertEqual(actual, expected) {
  if (JSON.stringify(actual.sort((a,b)=> a - b)) !== JSON.stringify(expected.sort((a,b)=> a - b))) {
      throw new Error(`Expected ${expected} but got ${actual}.`);
  }
}

assertEqual(factor(100), [1,2,4,5,10,10,20,25,50,100]);
assertEqual(factor(101), [1,101]);

function factor(num) {
    let factors = [];
    
    for (let i=1; i<=Math.floor(Math.sqrt(num)); i++) { 
        if (num % i === 0){
            factors.push(i);
            factors.push(num/i);
        }
    }
    return [...new Set(factors)].sort((a,b)=> a - b); // remove duplicates and sort the factors into numerical order for viewing purposes
}
```

The above JavaScript function also verifies whether two expressions are equal by using an `assertEqual` function. The `factor` function is used to compute the factor of the given number.

Please note that JavaScript doesn't have explicit type checking or compile time checks, so be sure to test your code thoroughly to make sure it behaves as expected.
