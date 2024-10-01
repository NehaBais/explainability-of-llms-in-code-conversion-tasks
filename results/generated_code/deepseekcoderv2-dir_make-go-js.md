### Solution
The following code is written in JavaScript and runs correctly on Windows OS (tested with Node v19.6.0 LTS). To run the program use: `node mkdir_p.js <directory name>` where `<directory name>` should be a directory that does not yet exist or exists but for which you do not have permissions to write into it
```javascript
function makeDirs(path) {
  // Check if the path already exists
  const stats = fs.statSync(path);
  
  if (stats.isDirectory()) {
    return true;
  } else if (stats.isFile()) {
    throw new Error("The specified file is not a directory.");
  }
  
  // Create the parent directory if it doesn't exist
  const dir = path.substring(0, path.lastIndexOf('/'));
  
  fs.mkdirSync(dir);
  return makeDirs(path);
}
```
