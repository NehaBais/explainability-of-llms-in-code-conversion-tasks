```javascript
// Current working directory
const inputFile = `${process.cwd()}/docs/input.txt`;
const inputExists = fs.existsSync(inputFile);

// Filesystem root
const rootInputFile = `/docs/input.txt`;
const rootInputExists = fs.existsSync(rootInputFile);

console.log(`Input file exists in current directory: ${inputExists}`);
console.log(`Input file exists in root directory: ${rootInputExists}`);
```

**Explanation:**

* We use the `process.cwd()` method to get the current working directory.
* We construct the file paths for both the current working directory and the filesystem root.
* We use the `fs.existsSync()` method to check if the files exist.
* We log the results to the console.

**Note:**

* The `fs` module is required for this code to work. You can install it using `npm install fs`.
* The file paths are relative to the current working directory and the root directory, respectively.
* The directory structure should be created beforehand.
