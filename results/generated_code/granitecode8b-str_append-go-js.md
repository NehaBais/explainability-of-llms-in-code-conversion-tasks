Here's the converted code in JavaScript:
```javascript
const builder = new String();
builder.concat('foo', 'bar');
console.log(builder);
```
In this JavaScript code, we first create an empty string variable called `builder` using the `String()` constructor. Then, we append two string literals to it using the `concat()` method. Finally, we print out the contents of the `builder` variable using the `console.log()` function. The output of this code will be:

foobar

Note that in JavaScript, the `String()` constructor is used to create a new string object, while in Golang, the `strings.Builder` type is used to efficiently build strings by avoiding unnecessary memory allocations.

