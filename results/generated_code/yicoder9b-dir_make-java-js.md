In JavaScript, you can use the `fs` module to perform file operations such as creating directories. Here is an equivalent function in JavaScript which creates a directory and any missing parent directories:

```javascript
const fs = require('fs');
const path = './parent/test';  // Change this with your desired path string

function mkdirSync(path) { 
    var dirs = path.split('/');
    var dir = '';

    for (var i = 0 ; i < dirs.length ; i++) {
        dir += dirs[i] + '/';
        if (!fs.existsSync(dir)){  
            fs.mkdirSync(dir);   
        }       
     }  
 }
 mkdirSync(path) 
 console.log('Path successfully created');
```
The function `existsSync` checks if a directory exists or not. If the directory doesn't exist, it is created using `mkdirSync`. The loop goes through each level of the directory path and creates directories as needed.
Please note that this operation will throw an error when run in browsers. For browser compatibility you may want to check whether fs module is available before using it:

if (typeof window === 'undefined') { 
    // your node.js code here 
} else {
    console.log("This code cannot be executed in the browser!");
}
