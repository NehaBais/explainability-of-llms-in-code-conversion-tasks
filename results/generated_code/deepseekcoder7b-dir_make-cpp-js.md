The JavaScript equivalent of the given C++ code using NodeJS file system modules would be as follows:

Here, we'll need to install 'mkdirp' npm package which provides similar functionality. You can add it by running `npm install mkdirp` in your console/terminal.
```javascript
const mkdirp = require('mkdirp');  // require the module
const path = require('path');    // Required for handling file paths

function createDir(targetPath) {
   return new Promise((resolve, reject) => {
       mkdirp(targetPath, err => {
           if (err) reject(err);
           else resolve();
       });
   });
}

// Usage: Replace ./path/to/dir with your desired path.
const dir = './path/to/dir'; 
createDir(dir).then(()=>{ console.log("Directory Created Successfully"); } ).catch((err)=> {console.error('Failed to create directory', err);});    // Print success message or error on failure
```
This program creates a directory, similar to the -p option of mkdir in bash, meaning that it will create any missing parent directories along with the target directory itself if they don't already exist. It does this using promises which are more manageable compared to callbacks for asynchronous operations and provides a cleaner syntax when dealing with asynchronicity.

