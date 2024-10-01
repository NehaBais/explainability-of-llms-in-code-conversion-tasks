Here is the equivalent JavaScript code for your Python code:

```JavaScript
let s1 = "hello";
console.log(s1 + " world");

let s2 = s1 + " world";
console.log(s2);

s1 = "hello";
console.log(s1.concat(" world", " mom"));

s2 = s1.concat(" world", " mom");
console.log(s2);
```
In JavaScript, the `concat()` method is used to join two or more strings together and returns a new string. The original strings are not changed. Also there's no need for joining an array of strings with a specific separator as it can be done directly in JavaScript by using the "+" operator to concatenate the strings.
