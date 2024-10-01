Sure, here is the equivalent JavaScript code for the given Python program:

```javascript
var s1 = "hello";  // This line is equivalent to s1 = "hello" in Python
console.log(s1 + " world");  // This logs "helloworld" as expected

var s2 = s1 + " world";  // s2 is now the concatenation of s1 with another string literal
console.log(s2);  // This logs "helloworld world"

s1 = "hello";  // Reassigning to s1 again
console.log(s1 + ", world, mom");  // This logs "hello, world, mom"

var s2 = ", ".join([s1, "world", "mom"]);  // Equivalent of s2 = ", ".join([s1, "world", "mom"]) in Python 
console.log(s2);  // This logs "hello, world, mom"
```
