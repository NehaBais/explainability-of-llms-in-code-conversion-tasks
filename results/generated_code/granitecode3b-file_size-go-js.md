Sure, here's the equivalent JavaScript code for the given Golang code:
```javascript
const fs = require('fs');
function printFileSize(f) {
 try {
 const stat = fs.statSync(f);
 console.log(stat.size);
 } catch (err) {
 console.error(err);
 }
}
printFileSize(__dirname + '/input.txt');
printFileSize('/input.txt');
```
In this code, we use the `fs` module to read the file size. We first check if the file exists using `statSync()` method and then print the size of the file. If an error occurs during the process, it is caught in a try-catch block and logged to the console.

