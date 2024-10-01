In JavaScript, you can use Node.js's `fs` (file system) module to check if a file exists and if a directory exists. You will need to handle errors because these operations might not succeed.

Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');

// Check for files and directories in the current working directory
fs.access('input.txt', fs.constants.F_OK, (err) => {
  console.log(err ? 'File does not exist' : 'File exists');
});

fs.access('/input.txt', fs.constants.F_OK, (err) => {
  console.log(err ? 'File does not exist' : 'File exists');
});

fs.access('docs', fs.constants.F_OK | fs.constants.DIR, (err) => {
  console.log(err ? 'Directory does not exist or is not a directory' : 'Directory exists and is a directory');
});

fs.access('/docs', fs.constants.F_OK | fs.constants.DIR, (err) => {
  console.log(err ? 'Directory does not exist or is not a directory' : 'Directory exists and is a directory');
});
```

The `fs.access` function checks if the file/directory specified by its path is accessible. The second argument is a set of constants that define what kind of access is being checked (e.g., F_OK for existence, R_OK for readability, W_OK for writability). This function returns immediately after checking the access rights.

If `fs.access` throws an error, it means the file/directory does not exist or another problem occurred. If there are no errors, that means the file/directory exists and is accessible with the requested permissions.
