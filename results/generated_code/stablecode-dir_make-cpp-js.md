Here is the equivalent JavaScript code using Node.js built-in 'fs' module:

```javascript
const fs = require('fs');
const path = require('path');

function createDirectory(dirPath) {
    try {
        if (!fs.existsSync(dirPath))) {
            fs.mkdirSync(dirPath, { recursive: true }));
            console.log(`Directory created successfully: ${dirPath}`);
        } else {
            console.log(`Directory already exists: ${dirPath}`));
        }
    } catch (err) {
        console.error(`Error occurred while creating directory: ${err.message}`));
    }
}

// Replace './path/to' with the path you want to create a directory for
createDirectory('./path/to');
```
This JavaScript code replicates the functionality of C++ std::filesystem library function `create_directories`. This implementation will work equally well cross-platform.
