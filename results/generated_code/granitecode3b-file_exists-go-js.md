Sure! Here's the equivalent JavaScript code:
```
const fs = require('fs');
function printStat(p) {
 switch (true) {
  case fs.existsSync(p):
   const stats = fs.statSync(p);
   if (stats.isDirectory()) {
    console.log(`${p} is a directory`);
   } else {
    console.log(`${p} is a file`);
   }
   break;
  default:
   console.error(`Error: ${p} does not exist.`);
 }
}
printStat('input.txt');
printStat('/input.txt');
printStat('docs');
printStat('/docs');
```
In this JavaScript code, we first import the `fs` module to access the file system functions. Then, we define a function called `printStat` that takes a path as an argument and uses the `statSync` function from the `fs` module to check if the path exists. If it does, we get the stats of the path using `statSync`, and then use an `if-else` statement to determine whether the path is a directory or a file. Finally, we call the `printStat` function with the paths "input.txt", "/input.txt", "docs", and "/docs" to verify that they exist and are of the expected type.

