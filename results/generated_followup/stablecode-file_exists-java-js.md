The error is located on the 5th line and it's caused by the incorrect usage of backticks (`) for template literals inside `console.log()`. 

To fix this issue, you need to replace the backticks (``) with regular single or double quotes (" ") or backticks (``).

Here is the corrected code in a single code block:

```js
const fs = require('fs');
const path1 = './docs/input.txt';
const path2 = '/docs/input.txt';

console.log(`Exists in root dir: ${fs.existsSync(path2)}`));
console.log(`Exists in current working directory: ${fs.existsSync(path1)}`));
```
This corrected code will correctly check if `input.txt` exists in the current working directory and in the filesystem root directory, using Node's built-in 'fs' module.
