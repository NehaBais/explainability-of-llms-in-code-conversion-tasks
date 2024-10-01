Here's the JavaScript code that fulfills the requirements:
```
var s1 = "hello";
console.log(s1 + " world");
var s2 = s1 + " world";
console.log(s2);
var s3 = ["hello", "world", "mom"].join(", ");
console.log(s3);
var s4 = ["hello", "world", "mom"].join(", ");
console.log(s4);
```
In this code, we create a string variable `s1` and assign it the value `"hello"`. We then concatenate this with the string literal `" world"` using the `+` operator and print the result to the console. 
Next, we create another string variable `s2` and assign it the value of `s1`, concatenated with `" world"`. We then print the value of `s2` to the console. 
Finally, we use the `join()` method on an array containing `"hello"`, `"world"`, and `"mom"` to create a new string with the values separated by commas. We assign this to the variable `s3` and print its value to the console. We then repeat this process using the same array and assign the result to `s4`, before printing its value to the console.

