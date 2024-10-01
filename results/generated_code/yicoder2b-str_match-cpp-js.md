Sure, here is the equivalent JavaScript code for the given C++ code. Note that JavaScript does not have a native way to check if the string ends with another string. Therefore, we need to create our own function to achieve this.

```javascript
let s1 = "abcd"; 
let s2 = "abab"; 
let s3 = "ab";
//Beginning
console.log(s1.startsWith(s3));
//End
const endChecker = (str, suffix) => {
    return str.slice(-suffix.length) === suffix;
}
console.log(endChecker(s1, s3)) 
//Anywhere
let loc = s2.indexOf(s3); 
if(loc != -1){  
    while((loc + s3.length ) <= s2.length) {
        loc = s2.indexOf(s3,loc+1);
        console.log("Location: " + loc);
    } 
} else {
    console.log("No matches found!");  
}
```
This JavaScript code will do the following in place of the C++ code:
- Check if `s1` starts with `s3` using `startsWith()` function.
- Use our own function to check if `s1` ends with `s3`, it checks last `s3` characters of `s1` and `s2`.
- Iterate over the string `s2` till it finds first occurrence of `s3` starting from current index plus length of `s3` in string `s2` and prints the location. If no match found, print "No matches found!".
