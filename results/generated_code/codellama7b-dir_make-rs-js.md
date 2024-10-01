In JavaScript, you can use the `mkdir` function provided by Node.js to create a directory and any missing parents. Here is an example of how you might implement this functionality:
```
const fs = require('fs');

function createDirectory(path) {
    if (fs.existsSync(path)) {
        return;
    }

    fs.mkdirSync(path, { recursive: true });
}

createDirectory("./path/to/dir");
```
This code checks if the directory already exists using `fs.existsSync`, and if it does not exist, it creates the directory and any missing parents using `fs.mkdirSync` with the `recursive` option set to `true`. If the directory already exists, the function returns without doing anything.
