To convert this code from Java to JavaScript, you can use the following conversion:
```js
var string = 'def';
string = 'abc' + string;
```
In JavaScript, strings are immutable by default, so you cannot simply assign a new value to an existing variable. Instead, you need to create a new variable with the updated value. In this case, we have created a new variable called `string` and assigned it the concatenation of the two string literals `'abc'` and `'def'`.

It is worth noting that in JavaScript, the `+` operator can be used for both string concatenation and number addition. If you want to ensure that the `string` variable contains a string value, you can use the `toString()` method to convert it to a string before concatenating with another string:

var string = 'def';
string = 'abc' + string.toString();

