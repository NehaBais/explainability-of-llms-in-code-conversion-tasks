 The equivalent JavaScript code would be:

```javascript
try {
    fs.writeFileSync('output.txt', '');
    fs.writeFileSync('/output.txt', '');
    fs.mkdirSync('docs');
    fs.mkdirSync('/docs');
} catch (e) {
    console.error(e.message);
}
```
In this JavaScript code, we're using the `fs` module from NodeJS to create a new file and directory as in the Java example. The `writeFileSync()` method is used to create an empty file, and the `mkdirSync()` method is used to create a directory. Each of these methods throws an error if they fail for some reason (like a permission problem or if the file/directory already exists), which we catch and log with `console.error()`.
