JavaScript does not have direct support for file operations like Java, instead it works with the file system through Node.js modules such as 'fs' (file system). Here is how you can do this:

```javascript
// For current working directory
const fs = require('fs'); 
try {
  if(fs.existsSync("docs/input.txt")){
    console.log("File exists in the current directory");
  } else {
    console.log("File does not exist in the current directory")
  }
} catch (err) {
  console.error(err)
}

// For filesystem root 
try {
  if(fs.existsSync("/docs/input.txt")){
    console.log("File exists at filesystem root");
  } else {
    console.log("File does not exist at filesystem root")
  }
} catch (err) {
  console.error(err)
}
```
Remember that Node.js is a runtime environment for executing JavaScript code outside of the web browser. This means you must have Node.js installed on your system and run this script using it. Also, be aware that file operations in the filesystem root may require elevated permissions (such as root access) depending upon operating system policies.
