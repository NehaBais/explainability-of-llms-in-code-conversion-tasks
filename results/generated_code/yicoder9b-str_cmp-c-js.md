Here is the equivalent JavaScript code:

```javascript
// Demonstration of string comparison in JavaScript.

function STREQ (A, B) { return A === B }
function STRNE (A, B) { return !STREQ(A,B) }
function STRLT (A, B) { return A <  B }
function STRLE (A, B) { return A <= B }
function STRGT (A, B) { return A >  B }
function STRGE (A, B) { return A >= B }

// JavaScript handles comparison of numeric strings as lexically. 
// So '12' > '2' is true. If you want to perform a numerical comparison instead, you need parseInt or Number function:
function STRLTNUM (A,B) { return Number(A) <  Number(B) }
function STRGTNUM (A,B) { return Number(A) >  Number(B) } 

console.log('	eq , ne , gt , lt , ge , le, gtnumprefix, ltnumprefix');
var testCases = ['ball', 'bell', 'ball', 'ball', 'YUP', 'YEP'];  // You can add more test cases.
while (testCases.length > 1) {
    let a = testCases.shift();
    let b = testCases.shift();
    console.log(`${a} ${STREQ(a,b)} ${STRNE(a,b)} ${STRGT(a,b)} ${STRLT(a,b)} ${STRGE(a,b)} ${STRLE(a,b)}  ${STRGTNUM(a,b)} ${STRLTNUM(a,b)} vs ${b}`);
}
``` 

The comparison methods `STREQ` and `STRNE` are used to compare the exact equality (===) or inequality (!==) of two strings. The `STRLT` and `STRGT` functions check if one string is lexically less than or greater than another, while `STRLE` and `STRGE` check for less-than-or-equal-to and greater-than-or-equal-to conditions respectively. 

`STRLTNUM` and `STRGTNUM` are used to compare numerical value of strings.

Please replace the testCases array with your own test cases. The program will compare every two elements from this list.
