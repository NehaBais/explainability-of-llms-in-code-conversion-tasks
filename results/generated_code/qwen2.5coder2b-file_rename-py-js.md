In JavaScript, the `fs` module is used to perform file and directory operations. Here's how you can modify your code:

```javascript
const fs = require('fs');

// Rename in the current working directory
fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');

// Rename in the filesystem root
fs.renameSync('/', 'output.txt');
fs.renameSync('/', 'mydocs');
```

Make sure you have Node.js installed on your system before running this code. If not, install it by running `npm install` in your project directory.
