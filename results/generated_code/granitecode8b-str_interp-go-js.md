Here's the JavaScript code that achieves the same functionality as the Golang code you provided:
```javascript
const str = 'Mary had a %s lamb';
const txt = 'little';
const out = str.replace('%s', txt);
console.log(out);
```
In this code, we define a string `str` that contains the original string with a placeholder `%s`. We also define a value `txt` that will be used to replace the placeholder in the string. 
We then use the `replace()` method on the `str` variable to replace the `%s` placeholder with the `txt` value, and store the result in the `out` variable. Finally, we log the `out` variable to the console. 
This code will output the same result as the Golang code you provided: "Mary had a little lamb".

