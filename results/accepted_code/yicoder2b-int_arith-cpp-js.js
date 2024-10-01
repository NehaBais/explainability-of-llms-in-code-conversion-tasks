let a, b;
a = require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter first integer: ');
b = require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter second integer: ');
console.log(`a+b = ${parseInt(a)+parseInt(b)}`);
console.log(`a-b = ${parseInt(a)-parseInt(b)}`);
console.log(`a*b = ${parseInt(a)*parseInt(b)}`);
console.log(`a/b = ${(parseFloat(a)/parseFloat(b) | 0}, remainder ${parseInt((parseFloat(a)%parseFloat(b)))}`);