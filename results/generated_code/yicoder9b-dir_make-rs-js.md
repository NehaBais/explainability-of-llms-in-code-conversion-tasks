In JavaScript, we can use the `mkdirp` npm package which is similar to the posix mkdir -p command. You can install it using npm with the following command: 

npm i mkdirp

Here's how you might write this functionality in a single function in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');
const mkdirp = require('mkdirp');

function createDirAll(dirPath) {
    return new Promise((resolve, reject) => {
        // Normalize the path to resolve any '..' and make it absolute if necessary
        let normalizedPath = path.normalize(path.isAbsolute(dirPath) ? dirPath : path.join(process.cwd(), dirPath));

        mkdirp(normalizedPath, err => {
            if (err) reject(new Error(`Failed to create directory: ${err}`));
            else resolve();
        });
    })
}

createDirAll('path/to/dir').then(()=>{
  console.log('Directory created successfully!');
}).catch((error)=>{
 console.log(error);
});
```
This JavaScript function will also create a directory and any missing parents recursively, just like the Rust version does. If an error occurs during this process (such as permission issues), it will be caught and thrown in the Promise's `catch` block.
