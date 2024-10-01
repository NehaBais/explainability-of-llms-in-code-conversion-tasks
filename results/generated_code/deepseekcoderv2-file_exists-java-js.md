```js
// Solution 1
const fs = require('fs')
const path = require('path');

const currentFileExists = (currentPath, fileName) => {
    const fileToCheck = `${currentPath}/${fileName}`;
    
    if(fileToCheck.indexOf("/") === -1){
        return false;
    } 
    
    try{
        fs.accessSync(`${path.resolve()}/${fileToCheck}`);
        return true;
    } catch (error) {
        console.log("File does not exist!");
        return false;
    }
}

const rootFileExists = (fileName, currentPath) => {
    const fileToCheck = `${currentPath}/${fileName}`;
    
    try{
        fs.accessSync(`${fileToCheck}`);
        return true;
    } catch (error) {
        console.log("File does not exist!");
        return false;
    }
}

const fileExists = currentFileExists('input.txt', 'docs');
console.log(fileExists);
const rootExists = rootFileExists('input.txt', '/docs')
console.log(rootExists)
```
