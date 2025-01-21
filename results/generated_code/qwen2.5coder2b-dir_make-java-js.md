The equivalent code in JavaScript is as follows:

```javascript
import {mkdirSync, existsSync } from 'fs';

function createDirectoryIfNotExists(path) {
    if (!existsSync(path)) {
        mkdirSync(path);
        console.log('path successfully created');
    }
}

createDirectoryIfNotExists('./parent/test');
```

This code uses the `mkdirSync` function of the fs module in Node.js, which creates a directory at a given path. If the directory already exists, it does nothing. The `existsSync` function checks whether the directory exists before attempting to create it.
