```javascript
const fs = require('fs');

// get file size from the current working directory
let file1Size = fs.statSync('./file.txt').size;
console.log(`Current Directory File Size: ${file1Size} bytes`);

// get file size from the root of the system
let file2Size = fs.statSync('/file.txt').size;
console.log(`System Root File Size: ${file2Size} bytes`);
```
