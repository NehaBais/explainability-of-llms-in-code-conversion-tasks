 In JavaScript, you can use the File System API to accomplish similar tasks, though it's important to note that the root directory ("/") in Node.js isn't the same as your actual system's root. Here is a JavaScript version of your code:

```javascript
const fs = require('fs');
const path = require('path');

console.log(fs.existsSync(path.join(__dirname, 'input.txt'))); // For the current working directory
console.log(fs.existsSync('/input.txt'));  // For a file and a directory in the filesystem root
console.log(fs.existsSync(path.join(__dirname, 'docs')));  // For the current working directory
console.log(fs.existsSync('/docs'));  // For a file and a directory in the filesystem root
```

In JavaScript, you cannot simply check for the existence of files/directories by name. You need to pass a full path to `fs.existsSync()`. The `__dirname` variable is used to get the current script's directory path, which can be different from where your script runs. It's usually set to the directory in which the script was run.

Also note that this JavaScript code assumes Node.js environment and might not work in a browser environment as it doesn't have direct filesystem access unlike browsers.
