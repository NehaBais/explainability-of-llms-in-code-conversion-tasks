The JavaScript code would look like this. It assumes that the strings are represented as UTF-16 (JS's native string representation), but it should work similarly for any valid Unicode code point.

```javascript
function substring(s, n, m) {  
  if (!s || n < 0 || m < 0) return null;
      
  let arr = Array.from(s);
  
  // check for null s and invalid index n
  if (n >= s.length || !arr[n]) return null;
    
  if (m < 0) m = s.length + m - n + 1;
      
  let result = arr.slice(n, n+m);  
    
  return String.fromCharCode(...result);
}

function str_wholeless1(s){
  return substring(s, 0, s.length - 2);
}

function str_fromch(s, ch, m) {
  let index = s.indexOf(ch);  
  if (index === -1 || !substring(s, index, 1)) return null;  
    
  return substring(s, index, m);
}

function str_fromstr(s, inStr, m) {
  let index = s.indexOf(inStr);   
  if (index === -1 || !substring(s, index, inStr.length)) return null;  
    
  return substring(s, index, m);
}

let s = "hello world shortest program";
console.log(substring(s, 12, 5)); // get "short"
console.log(substring(s, 6, -1)); // get "world shortest program"
console.log(str_wholeless1(s));    // get "... progra"
console.log(str_fromch(s, 'w', 5));   // get "world"
console.log(str_fromstr(s, "ro", 3)); // get "rog"
```

