Sure, here's the JavaScript equivalent of your C++ code:

```javascript
let original = 'Mary had a X lamb.', toBeReplaced = 'X', replacement = 'little';
let newString = original.replace(original.indexOf(toBeReplaced), toBeReplaced.length, replacement);
console.log('String after replacement:', newString);
```

Please note that JavaScript does not have a built-in replace function as in C++. You need to use the `indexof` and `substring` methods to achieve this.
