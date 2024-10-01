```javascript
// package main
import {statSync, mkdirSync, existsSync} from 'fs';
import {resolve} from 'path';

const printStat = (p) => {
  try {
    const i = statSync(p);
    if (i.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (err) {
    console.log(err);
  }
};

const main = () => {
  printStat('input.txt');
  printStat('/input.txt');
  mkdirSync('docs');
  existsSync('docs') ? printStat('docs') : console.log('Directory docs does not exist.');

  // Delete directory 'docs' before running the next code snippet
  rmdirSync('docs', {recursive: true});
};
```

1. The `printStat` function takes a parameter, which is the file/directory path. It calls the `statSync` function to get information about the file/directory at the specified path and checks whether it's a directory or a file. If it's a directory, prints "is a directory". Otherwise, if it's a file, prints "is a file". In case of any error, it catches the error and prints it.
2. The `main` function calls `printStat` for several file/directory paths. It also uses `mkdirSync` to create a directory named 'docs'. Then, it checks whether the directory exists using `existsSync`. If it does exist, it calls `printStat` again for that path, and if not, it prints an error message "Directory docs does not exist." Finally, it deletes the directory 'docs' before running the next code snippet.
3. The 'fs' and 'path' modules are imported from Node's 'fs' module and 'path' module respectively. The 'existsSync' method is used to check if a directory exists using the path name or absolute path name.
