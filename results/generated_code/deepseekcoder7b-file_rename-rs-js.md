Here is the equivalent JavaScript code using Node's `fs` module and its promise-based methods:

```javascript
const fs = require('fs').promises;

async function main() {
    const errMsg = "File move error";
    
    try{
        await fs.rename("input.txt",  "output.txt");
        await fs.rename("docs", "mydocs");
        // For the root directory, use "/" as path prefix instead of "", or just specify it directly as "/output.txt" and "/mydocs".
        await fs.rename("/input.txt",  "/output.txt");
        await fs.rename("/docs",  "/mydocs");
    }catch(err){
        console.error(errMsg);
    }
}
main();
```
This script attempts to move `input.txt` to `output.txt`, and `docs` to `mydocs` in both the current directory (where this script is run) and at the filesystem root. If any of these renames fail for some reason - like if either file/directory does not exist or there are insufficient permissions - an error message will be logged to the console instead of the program crashing.

