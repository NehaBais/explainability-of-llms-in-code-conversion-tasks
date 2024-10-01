The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');
const path = require('path');

function createDir(directoryPath) {
    try {
        if (!fs.existsSync(path.dirname(directoryPath))) {
            fs.mkdirSync(path.dirname(directoryPath), { recursive: true });
        }
        if (!fs.existsSync(directoryPath)) {
            fs.mkdirSync(directoryPath);
        }
    } catch (err) {
        console.error('An error occurred:', err);
    }
}

createDir('./path/to/dir');
```

This code will create the directory if it doesn't exist and its parents, if they don't exist too. If an error occurs during execution, it will be logged to the console.
