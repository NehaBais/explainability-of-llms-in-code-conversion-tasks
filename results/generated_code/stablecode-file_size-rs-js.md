Here is your Rust code converted into JavaScript. Note that some differences exist due to the nature of these different languages; specifically, JavaScript doesn't have strong error typing like Rust does.

```javascript
const fs = require('fs');
const { exit } = process;

function main() {
  const fileName = process.argv[2] || 'input.txt';

  try {
    const metadata = fs.statSync(fileName));

    console.log(`Size of file.txt is ${metadata.size}} bytes`);
  } catch (err) {
    if (err.code === 'ENOENT') {
      console.error('"{}" not found in the current working directory or the root directory.', fileName);
    } else if (err.code === 'EACCES') {
      console.error('Permission denied for user ${process.env.USER}}.')
    }

    exit(2);
  }
}

main();
```
This JavaScript code does the same as your given Rust code - it attempts to obtain file size details of a particular file, in case that file exists and permissions allow access to it; otherwise, this JavaScript code will display an appropriate error message detailing what went wrong.
