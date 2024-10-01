Sure, here's the JavaScript code that does what you need:
```javascript
const fs = require('fs');
console.log(fs.existsSync('./input.txt')); // true
console.log(fs.existsSync('/input.txt')); // false (file doesn't exist in root)
console.log(fs.statSync('./docs', (err, stats) => {
 if (err) throw err;
 console.log(stats.isDirectory()); // true
}));
console.log(fs.statSync('/docs', (err, stats) => {
 if (err) throw err;
 console.log(stats.isDirectory()); // false (directory doesn't exist in root)
}));
```
This code uses the `fs` module to check for the existence of the files and directories you specified. The `existsSync()` method checks whether a file or directory exists in the current working directory, while the `statSync()` method gets information about a file or directory such as its type (directory or file). The second argument to `statSync()` is a callback function that is executed when the operation completes. If there is an error, it is passed to the callback and the program exits.

