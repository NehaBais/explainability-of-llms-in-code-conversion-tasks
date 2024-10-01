Sure! Here's the JavaScript code that performs the same operations as the Python code:
```javascript
var s1 = "hello";
console.log(s1 + " world");
var s2 = s1 + " world";
console.log(s2);
var arr = ["hello", "world", "mom"];
var s3 = arr.join(", ");
console.log(s3);
```
In this JavaScript code, we first create a string variable `s1` and assign it the value of "hello". We then use the `+` operator to concatenate `s1` with the string literal " world" and print the result using the `console.log()` function.
Next, we create another string variable `s2` by concatenating `s1` with " world" and assign it the value of "hello world". We then print the value of `s2` to the console.
Finally, we create an array variable `arr` and assign it the values ["hello", "world", "mom"]. We use the `.join()` method on the array to concatenate all the values into a string with ", " as the separator. We then assign this resulting string to `s3` and print it to the console.

