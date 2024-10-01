Here's the equivalent code in JavaScript:
```
console.log('Mary had a ${} lamb.', 'little');
// You can specify order
console.log('${1} had a ${0} lamb.', 'little', 'Mary');
// Or named arguments if you prefer
console.log('${name} had a ${adj} lamb.', {adj: 'little', name: 'Mary'});
```
In JavaScript, string interpolation is done using backticks (`) and the `${}` syntax. The values to be interpolated are placed inside the `${}` syntax. In the first example, the value `'little'` is inserted into the string at the location of the `${}`. In the second example, the values are specified in the order they appear in the function call. Finally, in the third example, named arguments are used with the `${name}` and `${adj}` placeholders.

