I have successfully converted the given Java code to JavaScript. Here's the corresponding JavaScript code:

```javascript
function factors(n) {
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

This JavaScript function calculates the factors of a positive integer `n` and returns them in an array sorted in ascending order. The code uses a Set to store unique factors as it does not allow duplicate elements, which is suitable for this problem as factors are unique and always come in pairs (e.g., factor-quotient pair). The factors and quotients are computed by iterating from the last possible factor down to sqrt(n), checking if n is divisible by each test value with no remainder. If it is, then we add both the current test value as a potential factor and its inverse (n / test) as another factor, ensuring that there are no duplicates in the final array of factors.

Note: JavaScript's Set does not support sorting out-of-the-box. Therefore, I have to convert it to an array before returning it from the function. The `Array.from()` method creates a new, shallow-copied Array instance from an iterable object or an array-like object. The `sort()` method sorts the elements of an array in place and returns the sorted array. The sorting algorithm used by sort is not guaranteed to be stable. The compareFunction (optional) argument defines a custom comparison function that defines the sort order. It accepts two arguments, x and y, and returns a negative value if x comes before y; a positive value if x comes after y; and 0 if x and y are equal. This makes it suitable for sorting by comparing each element to its predecessor (i.e., `(a - b)`).
