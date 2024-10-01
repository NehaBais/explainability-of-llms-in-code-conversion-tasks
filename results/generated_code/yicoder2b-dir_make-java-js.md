Sure, here is the equivalent JavaScript code for your Java code - 

```javascript
let fs = require('fs');
try{
  if (!fs.existsSync("C:/parent/test")) {
    // create directories leading to "test" and 'C' parent
    fs.mkdirSync("C:/parent", {recursive: true}); 
    fs.mkdirSync('C:/parent/test');
  } else {
    console.log('Directory already exists!')
  }
} catch (err) {
  console.error(`Error in creating directories: ${err}`);
}
```
Here, 'fs' is a built-in Node.js module that provides access to the functionality of the operating system’s filesystem.
The function fs.existsSync("C:/parent/test") checks whether "C:/parent/test" directory exists or not and if it doesn't then it creates directories leading to 'test' and 'C' parent directory using `fs.mkdirSync` method which makes all the intermediate-level directories necessary for the final path also. If an error occurs during this process, it is logged using console.error.
