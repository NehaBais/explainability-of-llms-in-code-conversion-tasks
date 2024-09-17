 Here is the JavaScript version of your Java code:

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
  return Array.from(factors);
}
```

This function works in the same way as your Java code, but it uses a JavaScript `Set` instead of a Java `TreeSet`. A Set is an object that stores unique values of any type (primitives or objects), without the ability to store multiple occurrences of the same value. The `Array.from(factors)` is used at the end to convert the Set into an array which is more common in JavaScript.
