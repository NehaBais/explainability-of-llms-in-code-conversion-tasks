The equivalent JavaScript code would be:
```javascript
var strings = require('strings');

var s = new strings.StringBuilder();
s.append("foo");
s.append("bar");
console.log(s.toString());
```
Note that in JavaScript, `strings` is typically a library or module that provides the functionality to manipulate and process strings, whereas `strings.Builder` is an object within this library, specifically designed for string concatenation. The `new` keyword creates an instance of the specified class. Here, we're creating an instance of `StringBuilder`, which is then used to append the two strings. Finally, `console.log(s.toString())` logs the entire contents of the `StringBuilder` object as a single string.
The key difference between JavaScript and Golang is that in Golang, you cannot directly manipulate a `strings.Builder`. Instead, it needs to be used with a method like `Write()`, which modifies an underlying buffer and returns its new length. The result must then be converted back into a string using the `String()` method of the builder object.
Note that JavaScript doesn't have a concept of packages, so `strings` is being imported from a library called `strings`. It's also worth mentioning that Golang uses the dot notation to access properties and methods, while JavaScript uses square bracket notation for this purpose.
