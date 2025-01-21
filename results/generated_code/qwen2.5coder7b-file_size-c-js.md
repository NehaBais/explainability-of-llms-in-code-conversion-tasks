Sure, here is the equivalent code in JavaScript. Note that in JavaScript you don't have direct access to file system operations like C does using `stat`. However, we can use Node.js's `fs` module to achieve similar functionality.

```javascript
const fs = require('fs');

// Get size of input.txt in the current working directory
fs.stat('input.txt', (err, stats) => {
  if (err) {
    return console.error(err);
  }
  console.log(`Size of 'input.txt' in CWD: ${stats.size} bytes`);
});

// Get size of /input.txt
fs.stat('/input.txt', (err, stats) => {
  if (err) {
    return console.error(err);
  }
  console.log(`Size of '/input.txt': ${stats.size} bytes`);
});
```

To run this JavaScript code, save it to a file and then execute the file using Node.js. Make sure you have Node.js installed on your machine. You can install Node.js from [nodejs.org](https://nodejs.org/).

### How to Run
1. Save the above code to a file, for example `sizeCheck.js`.
2. Open a terminal.
3. Navigate to the directory where you saved `sizeCheck.js`.
4. Run the following command:
   ```sh
   node sizeCheck.js
   ```

This will output the sizes of the files in bytes. If either file does not exist, it will print an error message.
