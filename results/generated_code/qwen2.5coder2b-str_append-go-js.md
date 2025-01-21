In JavaScript, you can use the `concat` method to concatenate two or more strings. Here is how you could convert your Go code to JavaScript:

```javascript
const s = new String();
s.concat("foo", "bar");
console.log(s);
```

However, it's worth mentioning that JavaScript doesn't provide a built-in `StringBuilder` class like Go does. You can simulate this by concatenating strings in a loop or using the `push` method on an array. Here is how you could do it:


let s = '';
for (let i = 0; i < 2; i++) {
  s += 'foo' + 'bar';
}
console.log(s);

In both cases, the output will be `foobar`.
