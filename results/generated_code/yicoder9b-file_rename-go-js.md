In JavaScript we can use the `fs` module to perform file and directory renaming operations. Here is how you could convert the Golang code to JavaScript:

```javascript
const fs = require('fs').promises; 
async function renameFiles() {
  await fs.rename('input.txt', 'output.txt');
  await fs.rename('docs', 'mydocs');
  await fs.rename('/input.txt', '/output.txt');
  await fs.rename('/docs', '/mydocs');
}
renameFiles().catch(console.error);
```

Please note that the `fs` module of Node.js provides asynchronous file system operations. Therefore, we use async/await with promises to avoid callback hell in case you want to perform multiple renaming operations sequentially.
Also, the fs.promises version is available only from node v10.

One last point is that if you run this script using a non-administrative account on Windows, you may not have permission to rename files or directories located at the root level of your hard drive. Make sure you have sufficient privileges when running these operations in production environments.
