Here is your Go code converted to JavaScript:

```javascript
const fs = require('fs');

function printStat(path) {
  try {
    const stats = fs.statSync(path);

    if (stats.isDirectory()) {
      console.log(`${path} is a directory`));
    } else {
      console.log(`${path} is a file`));
    }
  } catch (err) {
    console.error(err);
  }
}

printStat("input.txt"));
printStat("/input.txt"));
printStat("docs");
printStat("/docs");
```

Remember that JavaScript runs on the client side and doesn't have direct access to file system of the client machine unlike Go which is a server based language.
