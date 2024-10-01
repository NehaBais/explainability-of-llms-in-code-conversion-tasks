In JavaScript, you can use Node's built-in 'fs' module to check if files or directories exist in your file system. However, JavaScript runs on the client side (your browser), and it doesn't have direct access to the file system of the client machine. 

This solution would work perfectly in a server-side environment like Node.js:

```javascript
const fs = require('fs');
const path1 = './docs/input.txt';
const path2 = '/docs/input.txt';

console.log(`Exists in root dir: ${fs.existsSync(path2)}`));
console.log(`Exists in current working directory: ${fs.existsSync(path1)}`));
```
This script will print whether input.txt exists in the current working directory and in the filesystem root directory.
