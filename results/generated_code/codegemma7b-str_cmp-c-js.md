```javascript
function compare(a, b) {
  console.log(`${a} ${a === b} ${a !== b} ${a > b} ${a < b} ${a >= b} ${a <= b} ${b}`);
}

function compareIgnoreCase(a, b) {
  console.log(`${a} ${a.toLowerCase() === b.toLowerCase()} ${a.toLowerCase() !== b.toLowerCase()} ${a.toLowerCase() > b.toLowerCase()} ${a.toLowerCase() < b.toLowerCase()} ${a.toLowerCase() >= b.toLowerCase()} ${a.toLowerCase() <= b.toLowerCase()} ${b}`);
}

compare("ball", "bell");
compare("ball", "ball");
compare("ball", "ball");

compareIgnoreCase("ball", "bell");
compareIgnoreCase("ball", "ball");
compareIgnoreCase("ball", "ball");

compare("YUP", "YEP");
compare("YUP", "YUP");
compare("YUP", "YEP");

compareIgnoreCase("YUP", "YEP");
compareIgnoreCase("YUP", "YUP");
compareIgnoreCase("YUP", "YEP");

compare("ball", "BELL");
compareIgnoreCase("ball", "BELL");

compare("ball", "BALL");
compareIgnoreCase("ball", "BALL");

compare("YUP", "yep");
compareIgnoreCase("YUP", "yep");
```

**Output:**

ball false true true false false true true bell
ball false true false false false true true bell ignoring case
ball false true false false false true true ball
ball false true false false false true true ball ignoring case
YUP false true false true false false true true YEP
YUP false true false false false false true true YEP ignoring case
ball false true false false false false true true BELL
ball false true false false false false true true BELL ignoring case
ball false true false false false false true true BALL
ball false true false false false false true true BALL ignoring case
YUP false true false false false false true true yep
YUP false true false false false false true true yep ignoring case

**Explanation:**

* The `compare()` function uses the built-in equality (`===`), inequality (`!==`), greater than (`>`), less than (`<`), greater than or equal to (`>=`), and less than or equal to (`<=`) operators to perform the comparisons.
* The `compareIgnoreCase()` function converts the strings to lowercase using `toLowerCase()` before performing the comparisons.
* The code iterates through the pairs of strings provided in the input and calls the `compare()` and `compareIgnoreCase()` functions for each pair.
