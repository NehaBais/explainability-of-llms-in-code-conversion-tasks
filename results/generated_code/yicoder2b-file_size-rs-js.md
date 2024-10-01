The provided Rust code is for verifying the size of a file located in your current working directory. It uses the standard library functions `fs` and `env` to perform these operations. 

This converted JavaScript code does the same thing: it takes as input a filename, checks if it exists and gets its size in bytes. If there is an error during this process, it exits with a specified error message and status code.

```js
const { env } = require('process');
const fs = require('fs').promises;

async function main() {
    const fileName = env.HOME || '';
    try {
        let stats = await fs.lstat(fileName);
        console.log(`Size of ${fileName} is ${stats.size} bytes`);
    } catch (error) {
        if (error.code === 'ENOENT') console.error(`Error: ${fileName} does not exist`);
        else console.error('Error occurred', error);
        process.exit(2);
    }
}
main().catch((error) => console.error(`Error:`, error));
```
This JavaScript code uses the promises API provided by `fs.promises` to ensure asynchronous operations are properly handled. If the file does not exist or if there is an error in any operation, it will print an error message and exit with a specified status code. It also checks if the user has specified their home directory using `env.HOME` and prints that size if found.
