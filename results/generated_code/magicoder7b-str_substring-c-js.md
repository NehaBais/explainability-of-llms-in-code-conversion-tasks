 The JavaScript equivalent of the C code would be as follows:

Note that JavaScript does not have a direct string substring function that allows us to start from a specific position and get a certain length substring. However, we can implement this using regular expressions and slice method of string in JavaScript. Moreover, since JavaScript strings are UTF-16 encoded by default, we don't need any additional UTF handling as compared to C.

```javascript
function substring(s, n, m) {
  // check for null s
  if (s === null) return null;
  
  // negative m to mean 'up to the mth char from right'
  if (m < 0) m = s.length + m - n + 1;
    
  // n < 0 or m < 0 is invalid
  if (n < 0 || m < 0) return null;
  
  // make sure string does not end before n
  for ( ; n > 0; s++) {
    if (s.charAt(0) === '\u0000') { 
      // string ends before n: invalid
      return null;
    } else {
      n--;
    }
  }
  
  let result = '';
  for (let i=0; i<m; i++) {
    if ((s.charAt(i)) === '\u0000') break;
    else result += s.charAt(i);
  }
  return result;
}

function str_wholeless1(s) {
  return substring(s, 0, s.length - 1);
}

function str_fromch(s, ch, m) {
  let pos = s.indexOf(String.fromCharCode(ch));
  if (pos === -1) return null;
  else return substring(s, pos, m);
}

function str_fromstr(s, in, m) {
  let pos = s.indexOf(in);
  if (pos === -1) return null;
  else return substring(s, pos , m);
}

// Define TEST function which uses the above functions and prints result or error message
function TEST(A) {
  const r = A();
  if (r === null) console.log("--error--");
  else console.log(r);
  // free(r); // JavaScript doesn't need this, we can't manually free the memory in Javascript unlike C.
}

// Test function calls
const s = "hello world shortest program";
TEST(() => substring(s, 12, 5));   // get "short"
TEST(() => substring(s, 6, -1));    // get "world shortest program"
TEST(() => str_wholeless1(s));       // "... progra"
TEST(() => str_fromch(s, 'w', 5));   // "world"
TEST(() => str_fromstr(s, "ro", 3)); // "rog"
```
