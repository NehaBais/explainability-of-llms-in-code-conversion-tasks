The following is a JavaScript implementation of the above Golang function. This task can be achieved using the `fs-extra` library in node.js which provides the equivalent to Go's os package. The `mkdirp` function is used, which creates all the intermediate folders needed for the target directory to be created successfully.

```javascript
const fs = require('fs-extra');

async function mkdirAll(path) {
    try {
        await fs.ensureDir(path); // Creates directory and any subdirectories if they don't exist
    } catch (err) {
        console.error(err);
    }
}

mkdirAll('./tmp/some/path/to/dir') // This will create the directory if it doesn't already exist
```

Make sure to have `fs-extra` installed in your project by running `npm install --save fs-extra` or `yarn add fs-extra` if you are using Yarn.
