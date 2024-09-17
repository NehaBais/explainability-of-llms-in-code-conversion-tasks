In JavaScript, you can use the following code to compute the factors of a positive integer:
```
function getFactors(n) {
  let factors = new Set();
  factors.add(n);
  factors.add(1);
  for (let test = n - 1; test >= Math.sqrt(n); test--) {
    if (n % test === 0) {
      factors.add(test);
      factors.add(n / test);
    }
  }
  return Array.from(factors).sort((a, b) => a - b);
}
```
This code uses the same logic as the Java code to compute the factors of a positive integer. It creates a new `Set` object to store the factors and adds the number itself and the factor `1` to it. Then, it iterates over all numbers between `n` and the square root of `n`, and checks if they are divisors of `n`. If so, it adds them to the set of factors along with their reciprocals (if they are not already included). Finally, it converts the set of factors to an array and sorts it in ascending order using the `sort()` method.

Note that in JavaScript, you can use the `Math.sqrt()` function to compute the square root of a number, which is equivalent to the `Math.sqrt()` method in Java. Additionally, you can use the `Array.from()` method to convert a set to an array and the `sort()` method to sort an array in ascending order.
