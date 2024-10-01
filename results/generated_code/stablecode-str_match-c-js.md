Here is the equivalent JavaScript code for the provided C code. Note that `strncmp` and `strstr` functions in C are replaced by their JavaScript counterparts, i.e., `substr_index` and `indexOf`.

```javascript
function startsWith(container, target) {
    var clen = container.length;
    var tlen = target.length;

    if (clen < tlen) return false;

    return substr_index(container, target) === 0;
}

function endsWith(container, target) {
    var clen = container.length;
    var tlen = target.length;

    if (clen < tlen) return false;

    return substr_index(container + clen - tlen, target) === 0;
}

function doesContain(container, target) {
    return indexOf(container, target)) !== -1;
}

// Additional JavaScript functions for handling the optional requirements:

```javascript
function substr_index(s, searchString) {
  var pos = s.indexOf(searchString);

  if (pos === -1) return 0; // if no match is found

  return pos + 1; // return position of match plus one for JavaScript's zero-based index
}
```
This JavaScript function replaces the `strncmp` and `strstr` functions in the original C code. The function takes two arguments: a string `s` and a search string `searchString`. The function returns the position of the first occurrence of the search string within the string `s`, or `0` if no match is found.
