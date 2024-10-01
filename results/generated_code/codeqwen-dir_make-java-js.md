In JavaScript, you can use the `fs` module's `mkdirSync` function to create a directory and its parent directories if they do not exist:

```javascript
const fs = require('fs');

function createDirectory(path) {
    try {
        if (!fs.existsSync(path)){
            fs.mkdirSync(path, { recursive: true });
            console.log(`path ${path} successfully created`);
        } else {
            console.log(`${path} already exists`);
        }
    } catch (err) {
        console.error(`Error creating directory ${path}:`, err);
    }
}

createDirectory('./parent/test');
```

Note that this implementation uses `existsSync` to check if the path exists before attempting to create it, which could be a slight performance hit but keeps things straightforward and avoids possible race conditions where multiple instances of your code attempt to create the same directory at once. The `{ recursive: true }` option tells Node to create the parent directories as well if they don't already exist. If there was an error creating the directory, it will be logged to the console.
