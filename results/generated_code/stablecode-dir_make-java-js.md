The equivalent code in JavaScript using Node.js built-in fs module to perform the operation can be written as below:

```JavaScript
const fs = require('fs');
const path = 'C:/parent/test';

try {
    if (!fs.existsSync(path))) {
        fs.mkdirsSync(path, { recursive: true }));
        console.log("Path successfully created");
     } else {
         console.log("Path already exists");
     }
} catch (err) {
    console.error(err);
}
```
This JavaScript code will perform the same functionality as the Java code provided in the problem statement: creating a directory and any missing parent directories. This is achieved using Node.js built-in fs module, which provides methods for interacting with the file system.
