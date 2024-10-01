In JavaScript, we can use the `mkdir` function to create a directory. Here's how you can implement the same in JavaScript:

```javascript
const path = require('path');
const fs = require('fs');

function mkdirs(p) {
    p = path.resolve(p);
    if (!fs.existsSync(p)) {
        try {
            fs.mkdirSync(p, { recursive: true });
        } catch (err) {
            console.error(`Failed to create directory ${p}:`, err);
        }
    }
}

const p = "./path/to/dir";
mkdirs(p); // Creates the directory and any missing parents
console.log(`Directory ${p} has been created.`);
```

In this code, we first use the `path` module to resolve the given path. Then, we check if that directory exists using the `existsSync` function from the `fs` module. If it doesn't exist, we create it by calling the `mkdirSync` method with the `{ recursive: true }` option.
If the creation process fails for any reason, an error will be caught and logged to the console.

This script will create a directory named "path" in the current working directory, which is usually where you run your program from. If the directory already exists, it will not throw an error and will simply print a message saying that the directory has been created.
