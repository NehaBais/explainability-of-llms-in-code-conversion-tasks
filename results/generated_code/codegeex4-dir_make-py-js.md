In JavaScript, you can use Node.js's built-in 'fs' and 'path' modules to achieve similar behavior. Here is a way to create a directory and any missing parents:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dir) {
    if (!fs.existsSync(dir)){
        fs.mkdirSync(path.dirname(dir), { recursive: true });
        fs.mkdirSync(dir);
    }
}
```
In this code, `fs.existsSync` checks if the directory exists. If it doesn't exist, then it creates all necessary parent directories with `fs.mkdirSync(path.dirname(dir), { recursive: true })`, and finally creates the target directory.

Please note that you might need to handle errors depending on your use case. The above function will throw an exception if any of the operations fail.

Also, this implementation assumes that your JavaScript environment supports synchronous file system operations. If you're using a more modern Node.js version (version 10 or higher), asynchronous methods would be more recommended.
