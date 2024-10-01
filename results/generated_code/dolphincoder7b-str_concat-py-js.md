JavaScript does not support the `+` operator for string concatenation. Here's how you can do it in JavaScript:
```javascript
let s1 = "hello";
console.log(s1 + " world");

let s2 = s1 + " world"; // You have to use concatenation instead of addition
console.log(s2);

let arr = [s1, "world", "mom"];
console.log(arr.join(", "));

let s3 = ", ".join([s1, "world", "mom"]);  // You have to use concatenation instead of addition
console.log(s3);
```
For the variable `s2`, we used the concatenation operator (`+`) because we want the output to be a single string. If you want to split the strings, you should use JavaScript's built-in array methods: `.join()`, `.split()`. Here's how to do it:

let s1 = "hello";
console.log(s1 + " world");

let arr = [s1, "world", "mom"];
arr = arr.join(", ");  // Join the array elements into a single string
console.log(arr);

arr = arr.split(", ");  // Split the string into an array of strings
console.log(arr);
