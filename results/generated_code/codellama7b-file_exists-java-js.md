
Here's the converted code:
```
console.log('Verifying existence of input.txt...');
if (fs.existsSync('./input.txt')) {
    console.log('File exists!');
} else {
    console.log('File does not exist.')
}

console.log('Verifying existence of /docs/input.txt...');
if (fs.existsSync('/docs/input.txt')) {
    console.log('File exists!');
} else {
    console.log('File does not exist.')
}
```
