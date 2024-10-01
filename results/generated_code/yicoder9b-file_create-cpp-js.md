JavaScript does not have built-in support for filesystem operations like C++. However, you can use the 'fs' module in NodeJS to accomplish similar tasks. The equivalent code would look something as follows:

```javascript
const fs = require('fs');

try { 
    // Creating empty file "output.txt" in current directory and size of 0 bytes.
    fs.closeSync(fs.openSync("output.txt", 'w'));  
    
    // This operation will not work on the root directory due to security restrictions.
    try {
        fs.closeSync(fs.openSync("/output.txt", 'w')); 
    } catch (err) {
      console.error(`Error: ${err}`);
    };
  
    // Creating an empty directory "docs" in the current working directory and root.
    fs.mkdirSync('docs'); // Here

    try{
        fs.mkdirSync('/docs'); // Root
    } catch(err){
        console.error(`Error: ${err}`); 
    }
  
} catch (err) {
    console.error(`Error: ${err}`);
};
```
Please note that this will only work in a NodeJS environment and requires appropriate permissions for creating files/directories. Also, writing directly to the root directory (`/docs`) is usually restricted due to security reasons.
