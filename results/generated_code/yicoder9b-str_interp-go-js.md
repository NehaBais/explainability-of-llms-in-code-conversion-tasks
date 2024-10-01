Here is the equivalent JavaScript code for your GoLang program: 

```javascript
let str = 'Mary had a %s lamb';
let txt = 'little';
str = str.replace('%s', txt);
console.log(str);
```
In this code, we are using the replace() method of JavaScript String objects to replace "%s" with the value stored in `txt`. This gives us a similar output as GoLang's Sprintf function but is more suitable for JavaScript strings and variables.
