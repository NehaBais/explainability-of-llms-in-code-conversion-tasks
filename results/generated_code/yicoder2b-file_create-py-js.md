The equivalent JavaScript code for the given Python code would be:

1. Current working directory (.): 
```javascript
let fs = require('fs');
function create1() {
    try{
        fs.openSync("output.txt", "w");
        fs.mkdirSync("docs");
    }catch(error){
       console.log(`Error in creating file or directory : ${error}`);
    }
}
create1();

function create2() {
    try{
        fs.openSync('/output.txt', 'w');
        fs.mkdirSync('/docs');
    }catch(error){
       console.log(`Error in creating file or directory : ${error}`);
    }
}
create2();
```
Please note that `fs` is the built-in NodeJS file system module, which enables you to read and write on files and directories. If you're running this code in a server environment where filesystem access is restricted/restricted, or in your local machine where permission issues might arise.
