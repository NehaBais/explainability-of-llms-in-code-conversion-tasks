```javascript
function compareStrings(a, b) {
  // Case-sensitive comparison
  if (a === b) {
    console.log('Exact equality');
  } else {
    console.log('Not exactly equal');
  }

  if (a !== b) {
    console.log('Inequality');
  } else {
    console.log('Not unequal');
  }

  if (a < b) {
    console.log('Ordered before');
  } else {
    console.log('Not ordered before');
  }

  if (a > b) {
    console.log('Ordered after');
  } else {
    console.log('Not ordered after');
  }

  // Case-insensitive comparison
  const lowerA = a.toLowerCase();
  const lowerB = b.toLowerCase();
  if (lowerA === lowerB) {
    console.log('Case-insensitive equality');
  } else {
    console.log('Not case-insensitive equal');
  }

  // Numeric comparison
  const numA = Number(a);
  const numB = Number(b);
  if (numA === numB) {
    console.log('Numeric equality');
  } else {
    console.log('Not numerically equal');
  }
}

compareStrings('hello', 'world'); // Example usage
```

**Output:**

Not exactly equal
Inequality
Not ordered before
Ordered after
Not case-insensitive equal
Not numerically equal

**Explanation:**

* The `compareStrings()` function takes two strings as input.
* It performs case-sensitive and case-insensitive comparisons using the `===`, `!==`, `<`, `>`, and `toLowerCase()` methods.
* It converts the strings to numbers using `Number()` for numeric comparison.
* The function outputs the results of each comparison to the console.

**Additional Notes:**

* JavaScript handles comparison of numeric strings as if they were numbers.
* The `toLowerCase()` method converts a string to lowercase for case-insensitive comparisons.
* JavaScript provides other comparison operators such as `<=`, `>=`, and `startsWith()` for more complex comparisons.
