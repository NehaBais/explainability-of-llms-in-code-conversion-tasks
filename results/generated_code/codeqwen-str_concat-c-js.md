Here is the JavaScript equivalent of your C code:

```javascript
let s = 'hello';
let s2 = `${s} literal`;
console.log(s, 'literal');
console.log(s2);
```

In this script, we're doing a similar operation as in the C code. We define two string variables: 's' and 's2'. The value of 's' is set to "hello". Then we concatenate the value of 's' with the literal string " literal" using template literals (denoted by backticks). This results in the value of 's2' being "hello literal".

Next, two console.log statements are used to print out the values of both 's' and 's2'. 

Note that there is no explicit free() statement as it is not needed in JavaScript; JavaScript automatically releases memory when necessary.
