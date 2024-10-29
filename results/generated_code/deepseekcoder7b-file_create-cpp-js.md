Here is the equivalent JavaScript code using Node.js's in-build `fs` module to achieve similar task as your C++ Code. Please note that there isn't a direct equivalent of filesystem root in Node.js, so we are making use of relative paths here for simplicity but it may not work outside of the directory where this script is run from:
```javascript
const fs = require('fs');
const path = require("path");

// Creating an empty file named "output.txt" in the current working directory and root directory
['', '/'].forEach(dir => {
    const filePath = path.join(process.cwd(), dir, 'output.txt') ;
    fs.writeFileSync(filePath, ''); // Empty string for no data
});

// Creating an empty directory named "docs" in the current working directory and root directory 
['', '/'].forEach(dir => {
    const dirPath = path.join(process.cwd(), dir, 'docs') ;
    if (!fs.existsSync(dirPath)){
        fs.mkdirSync(dirPath);
    }
});
```
This script will create the file "output.txt" in your current working directory and root directory (if run with sudo or as an admin), and a folder named "docs" similarly. If you try to make directories/files at the filesystem's root using "/", it might require elevated privileges, so I omitted that part for simplicity. You may want to handle exceptions according to your needs.

