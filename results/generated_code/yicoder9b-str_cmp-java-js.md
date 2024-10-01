Here's how you can convert the Java code to JavaScript. This covers all of your requirements and demonstrates string comparisons in a language that also supports these kinds of operations:

```javascript
function compare (A, B) {
    if(A === B){
        console.log(`'${A}' and '${B}' are lexically equal`);
    } else {
        console.log(`'${A}' and '${B}' are not lexically equal`);
    }

    if (A.toLowerCase() == B.toLowerCase()){
        console.log(`'${A}' and '${B}' are case-insensitive lexically equal`)
    } else {
        console.log(`'${A}' and '${B}' are not case-insensitive lexically equal`);
    }

    if (A < B) {
       console.log(`'${A}' is lexically before '${B}'`);
   } 
   else if(A > B){
       console.log(`'${A}' is lexically after '${B}'`);
   }
   if (A >= B) {
       console.log(`'${A}' is not lexically before '${B}'`)
   } 
   else if(A <= B){
       console.log(`'${A}' is not lexically after '${B}'`);
   }
    var comparisonResult = A.localeCompare(B)
    console.log(`The lexical relationship is: ${comparisonResult}`);
    A = A.toLowerCase();
    B = B.toLowerCase();
    var caseInsensitiveComparisonResult = A.localeCompare(B)
    console.log(`The case-insensitive lexical relationship is: ${caseInsensitiveComparisonResult}`);
}
compare('Hello', 'Hello');
compare('5', '5.0'); 
compare('java', 'Java'); 
compare('ĴÃVÁ', 'ĴÃVÁ'); 
compare('ĴÃVÁ', 'ĵãvá');
```
Please note that JavaScript handles string comparison quite differently than Java. `localeCompare()` is a good way to handle lexical comparisons in JavaScript as it takes into account various languages and cultures when ordering strings.
