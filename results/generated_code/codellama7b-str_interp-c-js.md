 Here is the code in JavaScript:
```
const extra = 'big';
console.log(`Mary had a ${extra} lamb.`);
return 0;
```
This uses template literals, which are enclosed in backticks (\`) instead of quotes (''). Inside the template literal, you can use expressions to insert values into the string. The expression is evaluated and its result is inserted into the string at the location where the expression appears. In this case, the value of `extra` variable is used as the interpolation value for the `%s` placeholder in the original string.
