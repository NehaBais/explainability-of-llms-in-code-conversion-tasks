In JavaScript, you can use the `substring()` method to get a portion of a string. Here are the five functions from the Rust code translated to JavaScript:

1. Print 3 characters starting at index n (c文字)
```
console.log(s.substring(n, m));
```
2. Print all characters starting at index n (c文字化けdef)
```
console.log(s.substring(n));
```
3. Print all characters except the last (abc文字化けde)
```
console.log(s.substring(0, s.length - 1));
```
4. Print 3 characters starting with 'b' (bc文)
```
let cpos = s.indexOf('b');
if (cpos !== -1) {
  console.log(s.substring(cpos, cpos + m));
}
```
5. Print 3 characters starting with "けd" (けde)
```
let spos = s.indexOf("けd");
if (spos !== -1) {
  console.log(s.substring(spos, spos + m));
}
```
Note that in JavaScript, the `indexOf()` method returns the index of the first occurrence of a substring within a string, or -1 if it is not found. In Rust, the `find()` method returns an option containing the index of the first occurrence of a character within a string, or `None` if it is not found. Therefore, we need to use the `if (cpos !== -1)` and `if (spos !== -1)` checks in JavaScript to ensure that the substring exists before attempting to print it.
