The equivalent code in JavaScript would be:

```javascript
const os = require('os');

console.log(os.existsSync('/input.txt')); // For root directory
console.log(os.existsSync(`${__dirname}\\input.txt`));  // For current working directory

console.log(os.existsSync('/docs')); // For root directory
console.log(os.existsSync(`${__dirname}/docs`));  // For current working directory
``` 
Please note that the `os.existsSync()` method checks whether a path exists or not, and it will return true if the file or directory exists. The function is located in node's built-in 'fs' module.
