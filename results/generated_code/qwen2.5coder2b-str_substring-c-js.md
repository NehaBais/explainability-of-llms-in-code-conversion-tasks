```javascript
function substring(str, start, length) {
  if (!str || start < 0 || start >= str.length || !length) return null;

  if (start + length > str.length) {
    // If the requested substring extends beyond the string's length,
    // it's not possible.
    return null;
  }

  return str.substring(start, start + length);
}

function str_wholeless1(str) {
  return substring(str, 0, str.length - 1);
}

function str_fromch(str, charCode) {
  const index = str.indexOf(String.fromCharCode(charCode));
  if (index === -1) return null;

  return substring(str, index, Infinity);
}

function str_fromstr(str, subStr) {
  const index = str.indexOf(subStr);
  if (index === -1) return null;

  return substring(str, index, subStr.length);
}

function main() {
  const s = "hello world shortest program";

  console.log(substring(s, 12, 5)); // "short"
  console.log(substring(s, 6, -1)); // "world shortest program"
  console.log(str_wholeless1(s)); // "... progra"
  console.log(str_fromch(s, 'w')); // "world"
  console.log(str_fromstr(s, "ro")); // "rog"
}

main();
```
