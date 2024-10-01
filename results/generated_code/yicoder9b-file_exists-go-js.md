Here is the equivalent JavaScript code:

```javascript
const fs = require('fs').promises;

async function printStat(p) {
  try {
    const stats = await fs.stat(p);
    if (stats.isDirectory()){
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (error) {
    console.log(error);
  }
}

printStat('input.txt');
printStat('/input.txt');
printStat('docs');
printStat('/docs');
```
This JavaScript code uses the `fs` module's `stat` method to check if a file or directory exists and whether it is a file or a directory. If an error occurs, it logs the error; otherwise, it logs that the path is either a file or a directory. It works exactly like your Go program.
