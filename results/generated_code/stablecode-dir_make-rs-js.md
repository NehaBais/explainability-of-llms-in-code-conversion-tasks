The equivalent code in JavaScript using Node.js' built-in 'fs' module can be implemented as follows:

```javascript
const fs = require('fs');
const path = './path/to/dir';

try {
    if (!fs.existsSync(path))) {
        fs.mkdirSync(path, { recursive: true }));
    } else {
        console.log("Directory already exists!");
    }
} catch (err) {
    console.error(err);
}
```
This JavaScript code is equivalent to the provided Rust code. It creates a directory and any missing parents in a single path string. If the directory already exists, it logs "Directory already exists!" to the console. If an error occurs during the process, it catches the error and logs the error message to the console.
