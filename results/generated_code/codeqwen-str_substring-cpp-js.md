Here is the JavaScript version of your C++ code:

```javascript
let s = "0123456789";

const n = 3;
const m = 4;
const c = '2';
const sub = "456";

console.log(s.substring(n, n + m));
console.log(s.substring(n));
console.log(s.slice(0, -1));
console.log(s.substring(s.indexOf(c), n + m));
console.log(s.substring(s.indexOf(sub), n + m));
```

In JavaScript, `substr()` function is used to extract a part of a string and it takes two parameters, the start index and the length. However, it uses 0-based indexing, so if you want to start at the third character you need to pass 2 as the first parameter. So in our case we pass 3 for `n` which is equivalent to `n + 1` in JavaScript. Similarly, for `substr(s.find(c), m)`, instead of directly passing `n`, we add `m` to it. For `substr(s.find(sub), m)`, we pass `n + m` because the index is 0-based and hence adding length will give us the end of the desired substring.

On the other hand, `slice()` function in JavaScript works similarly to `substr()`, but it accepts negative indexes which means that it starts counting from the end of string. So, `s.slice(0, -1)` will give us everything but the last character.
