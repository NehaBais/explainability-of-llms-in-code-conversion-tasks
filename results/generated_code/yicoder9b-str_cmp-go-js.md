Here's how you can achieve string comparison in JavaScript: 

```javascript
let c = "cat";
let d = "dog";

if (c === d) {
  console.log(c, 'is strictly equal to', d);
} else {
  console.log(c, 'is not strictly equal to', d);
}

if (c !== d) {
  console.log(c, 'is not strictly different from', d);
} else {
  console.log(c, 'is strictly equal to', d);
}

if (c > d) {
  console.log(c, "is lexically greater than", d);
} 
else {
  console.log(c, "is not lexically greater than", d);
} 

if (c < d) {
  console.log(c, "is lexically less than", d);
} 
else {
  console.log(c, "is not lexically less than", d);
}

let e = "Elephant";
let f = "elephant";
// Case insensitive comparison
if (e.toLowerCase() === f.toLowerCase()){
    console.log(`${e} is case-insensitively equal to ${f}`) ;
} else {
  console.log(e, 'is not case-insensitively equal to', d);
} 

// Numeric strings are compared as strings, they are not converted to numbers for comparison
let g = "3";
let h = "2";
if (g > h) {
  console.log(g, 'is lexically greater than', h);
} else {
  console.log(g, 'is lexically less than or equal to', h);
}
```
