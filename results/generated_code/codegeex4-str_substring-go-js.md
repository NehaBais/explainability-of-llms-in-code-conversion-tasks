Here is your Go code converted to JavaScript:

```javascript
function displaySubstrings() {
  let s = 'ABCDEFGH';
  let n = 2;
  let m = 3;

  // for reference
  console.log('Index: ', '01234567');
  console.log('String:', s);
  
  // starting from n characters in and of m length
  console.log(`Start ${n}, length ${m}:    ${s.substring(n, n+m)}`);
  
  // starting from n characters in, up to the end of the string
  console.log(`Start ${n}, to end:      ${s.substring(n)}`);
  
  // whole string minus last character
  console.log('All but last:         ' + s.slice(0,-1));
  
  // starting from a known character within the string and of m length
  let dx = s.indexOf('D');
  if(dx >= 0) {
    console.log(`Start 'D', length ${m}:  ${s.substring(dx, dx+m)}`);
  } else {
    console.log("'D' not found in the string");
  }
  
  // starting from a known substring within the string and of m length
  let sx = s.indexOf('DE');
  if(sx >= 0) {
    console.log(`Start "DE", length ${m}: ${s.substring(sx, sx+m)}`);
  } else {
    console.log('"DE" not found in the string');
  }
}

displaySubstrings();
```
This JavaScript code does essentially the same thing as your Go code. It prints out different substrings of a given string based on specified starting positions and lengths. 

Please note that JavaScript handles string indexes similarly to Go, but its handling of multi-byte characters (like those in UTF-8) is different from Go. If your strings contain characters outside the Basic Multilingual Plane (such as emoji), you might need to use additional libraries or methods to accurately work with those characters.
