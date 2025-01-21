The equivalent code in JavaScript would look like this:

```javascript

function strcmp(a,b) {
  if (typeof a !== 'string' || typeof b !== 'string') throw new Error('Arguments must be strings');
  return a.localeCompare(b);
}

function compare(a, b) {
  console.log(`${a} ${strcmp(a,b) === 0 ? 'eq' : 'ne'} ${strcmp(a,b) > 0 ? 'gt' : 'lt'} ${strcmp(a,b) >= 0 ? 'ge' : 'le'} ${b}`);
}

function comparecase(a, b) {
  console.log(`${a} ${strcmp(a.toLowerCase(), b.toLowerCase()) === 0 ? 'eq' : 'ne'} ${strcmp(a.toLowerCase(), b.toLowerCase()) > 0 ? 'gt' : 'lt'} ${strcmp(a.toLowerCase(), b.toLowerCase()) >= 0 ? 'ge' : 'le'} ${b}`);
}

let args = process.argv.slice(2);
for(let i=0;i<args.length-1;++i) {
  compare(args[i], args[i+1]);
}
comparecase(args[0], args[1]);
```

You can run the script in Node.js to compare two strings. The `process.argv` is used to get command line arguments, which are passed to the script as an array of strings. The `compare` function compares two strings using the localeCompare method and prints out the result in a format similar to the C code. The `comparecase` function performs a case-insensitive comparison by converting both strings to lowercase before comparing them.
