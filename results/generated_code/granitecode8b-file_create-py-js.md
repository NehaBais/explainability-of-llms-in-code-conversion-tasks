Here's the equivalent code in JavaScript:
```javascript
const fs = require('fs');
function createDirectory(directory) {
 try {
 fs.closeSync(fs.openSync(directory + '/output.txt', 'w'));
 } catch (err) {
 if (err.code !== 'EEXIST') throw err;
 }
 try {
 fs.mkdirSync(directory + '/docs');
 } catch (err) {
 if (err.code !== 'EEXIST') throw err;
 }
}
createDirectory('.'); // current directory
createDirectory('/'); // root directory
```
This code uses the `fs` module in Node.js to create an empty file called "output.txt" and an empty directory called "docs". It first attempts to create the file using `openSync()` and `closeSync()`, and then checks for any errors that may occur. If an error occurs, it checks if it's due to a file already existing (indicating that the file was successfully created), or if it's another error. The same process is repeated for creating the directory.

