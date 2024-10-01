Here's the JavaScript code that fulfills the requirements you've outlined:
```
const s = "abc文字化けdef";
const n = 2;
const m = 3;
// Print 3 characters starting at index 2 (c文字)
console.log(Array.from(s).slice(n, n + m).join(''));
// Print all characters starting at index 2 (clettersizationkedef)
console.log(Array.from(s).slice(n).join(''));
// Print all characters except the last (abclettersizationkede)
console.log(Array.from(s).reverse().slice(1).join(''));
// Print 3 characters starting with 'b' (bcwords)
const bIndex = s.indexOf('b');
if (bIndex !== -1) {
 console.log(Array.from(s).slice(bIndex, bIndex + m).join(''));
}
// Print 3 characters starting with "ce" (cewords)
const ceIndex = s.indexOf('ce');
if (ceIndex !== -1) {
 console.log(Array.from(s).slice(ceIndex, ceIndex + m).join(''));
}
```
Note that in JavaScript, strings are Unicode-aware and can represent any valid Unicode code point, whether in the Basic Multilingual Plane or above it. The `Array.from()` method is used to convert the string into an array of characters, which allows us to easily slice and take substrings using the `slice()` method.

