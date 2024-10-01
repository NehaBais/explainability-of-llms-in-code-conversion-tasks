Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');

// Create a full path to our files by joining 
// the current working directory and the filename

 let fileA_path = __dirname + '/input.txt';
 
 // We use fs.stat to get stats about the file
 // If it exists, we get its size (in bytes)
 if(fs.existsSync(fileA_path)) {
    let stats = fs.statSync(fileA_path);
    console.log(`File A: ${stats.size} bytes`);
 }
 
 let fileB_path = '/root/input.txt';
 
 // Again, we check if the file exists
 // If it does, we get its size (in bytes)
 if(fs.existsSync(fileB_path))) {
    let stats = fs.statSync(fileB_path));
    console.log(`File B: ${stats.size} bytes`);
 }
```
This JavaScript code is doing the exact same thing as your provided Java code. It's reading the specified files and logging their size in bytes to the console.
