Here is the equivalent JavaScript code for your Java program:

```JavaScript
let str1 = 'abcd';
let str2 = 'ab';

console.log(str1.startsWith(str2));  //returns true
console.log(str1.endsWith(str2));   //returns false
console.log(str1.indexOf(str2) > -1); //returns true
let loc = str1.indexOf(str2);       //loc = 0
console.log(loc);                    //prints 0
loc = str1.indexOf(str2,loc+1);     //loc = 2
console.log(loc);                   //prints 2

let str = 'abab';
let substr = 'ab';
let positions = [];
for(let pos=str.indexOf(substr); pos!=-1; pos=str.indexOf(substr, pos+1)) {
  positions.push(pos); 
}
console.log(positions); //prints [0,2]
```

In JavaScript strings, you can use `startsWith()` to check if a string starts with another string, `endsWith()` to check if it ends with another one, and for containing substring anywhere inside the original string you could use `indexOf() > -1`. And then find the index of the occurrence using `indexOf()` method also as shown above.
