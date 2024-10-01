The given C code cannot be directly converted to JavaScript as it depends on low-level system functions which are not present in JavaScript. 

However, a similar functionality can be achieved using Node.js built-in `fs` module and its methods such as `existsSync`, `mkdirSync`.

Here is the equivalent JavaScript function:

```javascript
const fs = require('fs');

function createDirectory(path) {
    try {
        if (!fs.existsSync(path))) {
            fs.mkdirSync(path, { recursive: true }));
        } else {
            console.log(`Directory ${path} already exists.`);
        }
    } catch (error) {
        console.error(`Error occurred while creating directory: ${error.message}`);
    }
}
```

You can call the `createDirectory` function by passing a single path string as its argument.

This JavaScript implementation works equally well on both Windows and Unix/Linux platforms.
