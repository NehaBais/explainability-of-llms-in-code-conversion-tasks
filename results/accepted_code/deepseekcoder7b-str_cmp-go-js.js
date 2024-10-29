let c = "cat";
let d = "dog";

if (c === d) {
    console.log(`${c} is bytewise identical to ${d}`);
}

if (c !== d) {
    console.log(`${c} is bytewise different from ${d}`);
}

// JavaScript doesn't provide built-in string comparison operators for 
// lexical ordering, as it has a different set of characters and their order than Unicode characters do. 
// Lexically ordered strings in Javascript are done by default if you use '>', '<'.
if (c > d) {
    console.log(`${c} is lexically bytewise greater than ${d}`);
}

if (c < d) {<｜begin▁of▁sentence｜>
    console.log(`${c} is lexically bytewise less than ${d}`);
}

// JavaScript also doesn't provide an operator for "greater than or equal to" 
// and "less than or equal to". You would have to write the conditions yourself:
if (c >= d) {
    console.log(`${c} is lexically bytewise greater than or equal to ${d}`);
}

if (c <= d) {
    console.log(`${c} is lexically bytewise less than or equal to ${d}`);
}

let a = 'aaa';
let b = 'bbb';
if (a.localeCompare(b) < 0){
    console.log(`${a} is before ${b} in lexico-graphical order.`);
} else if (a.localeCompare(b) > 0) {
    console.log(`${a} is after ${b} in lexico-graphical order.`);
} else {
    console.log('Both strings are equal');
}

if (c.toLowerCase() === d.toLowerCase()) {
    console.log(`${c} equal to ${d}, ignoring case.`);
} else {
    console.log(`${c} not equal to ${d}, ignoring case.`);
}