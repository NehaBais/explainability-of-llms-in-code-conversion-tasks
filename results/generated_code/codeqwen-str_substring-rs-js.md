Here is the JavaScript version of your Rust code:

```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.substring(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.substring(n));

// Print all characters except the last (abc文字化けde)
console.log(s.substring(0, s.length - 1));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
if (cpos !== -1) {
   console.log(s.substring(cpos, cpos + m));
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
   console.log(s.substring(spos, spos + m));
}
```

Please note that JavaScript does not have a direct equivalent to Rust's `chars()` method which returns an iterator over the characters in a string. Instead, it has several built-in methods for extracting substrings from a string:

1. The `substring(startIndex[, endIndex])` method returns a new substring of the given string starting at the specified index and ending at either the end of the string or the specified `endIndex`.

2. The `indexOf()` method returns the first index at which a given element can be found in the array, or -1 if it is not present.
   
These methods work on logical characters (code points), not 8-bit code units for UTF-8 or 16-bit code units for UTF-16 as Rust does, so they should work properly with any valid Unicode string.
