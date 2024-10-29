You can use the `fs` library in Node.js that provides several file system operations including creating directories recursively. Here is how to convert it into JavaScript:

Firstly, you need to install fs module by running this command in your terminal: 
npm i fs

JavaScript code:
```javascript
const fs = require('fs');
const mkdirp = (path) => {
    if (!fs.existsSync(path)) {
        fs.mkdirSync(path, { recursive: true });
    }
};
```
In this JavaScript function `mkdirp`, we use the Node.js's built-in function `fs.existsSync()` to check if a directory already exists or not at provided path. If it doesn't exist then we use `fs.mkdirSync()` with option `{ recursive: true }` to create all required parent directories in case they don't already exist.

