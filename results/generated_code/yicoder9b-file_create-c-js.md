In JavaScript you can use the "fs" module to perform file operations such as creating a new empty file and directory. Here's how you would convert the C code to JavaScript:

```javascript
const fs = require('fs');

// Create an empty file named 'output.txt' in current working directory
fs.writeFileSync('output.txt', ''); 

// Create an empty directory named 'docs' with permission 0750 (rwxr-x---) in the same directory
fs.mkdirSync('docs', { mode: 0o750 });

// For creating files and directories at root level, you will need appropriate permissions or running as super user
try {
  // Create an empty file named 'output.txt' at filesystem root level
  fs.writeFileSync('/output.txt', ''); 
  
  // Create an empty directory named 'docs' with permission 0750 (rwxr-x---) in the filesystem root
  fs.mkdirSync('/docs', { mode: 0o750 });
} catch(e) {
  console.error(`Operation failed ${e}`); // Log any error if operation fails due to lack of permissions or other issues
}
```
