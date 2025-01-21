 Sure, here is the equivalent JavaScript code for the provided Golang code:

```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(f) {
    try {
        const stats = fs.statSync(f);
        console.log(stats.size);
    } catch (err) {
        console.error(err);
    }
}

// Current working directory
printFileSize('input.txt');

// Root of the file system
printFileSize('/input.txt');
```

This JavaScript code uses Node.js's `fs` module to get the file size and handles errors similarly to the Golang version.
