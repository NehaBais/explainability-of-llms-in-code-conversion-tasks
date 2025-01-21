The error is located on line 35, where we are trying to join a directory path with `'input.txt'`. The issue is that we forgot to include a slash before the file path in the root directory. 

To fix this issue, we need to add a slash before `'input.txt'` when checking for its existence in the root directory. Here's how we can fix it:
```js
const filePathRoot = '/input.txt';
// ...
console.log(`/${filePathRoot} is a regular file? ${await check_reg('/' + filePathRoot)}}`));
```
This will correctly join the directory path with `'input.txt'`, and also add a slash before the file path in the root directory, ensuring that we are checking for the existence of the correct file path in the root directory.
