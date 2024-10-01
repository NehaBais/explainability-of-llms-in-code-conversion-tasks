Sure, here's the equivalent JavaScript code that accomplishes the same task:
```javascript
const fs = require('fs');
 
function createFile() {
 try {
 fs.writeFileSync('output.txt', '');
 } catch (err) {
 console.error(err);
 }
}
 
createFile();
try {
 fs.mkdirSync('/docs');
} catch (err) {
 console.error(err);
}
```
Note that in JavaScript, we use the `writeFileSync` method to write to a file and create an empty file named "output.txt" in the current working directory. We also use the `mkdirSync` method to create an empty directory named "docs" in the filesystem root.

