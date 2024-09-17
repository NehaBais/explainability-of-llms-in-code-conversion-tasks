```scss
function bitwise(a, b) {
	console.log(`a AND b: ${a & b}`);
	console.log(`a OR b: ${a | b}`);
	console.log(`a XOR b: ${a ^ b}`);
	console.log(`NOT a: ${~a}`);
	console.log(`a << b: ${a << b} // left shift`);
	console.log(`a >> b: ${a >>> b} // arithmetic right shift`);
	console.log(`a >>> b: ${a >>> b} // logical right shift`);
	console.log(`a rol b: ${Integer.rotateLeft(a, b)} //rotate left, Java 1.5+`);
	console.log(`a ror b: ${Integer.rotateRight(a, b)} //rotate right, Java 1.5+`);
}
```
Note that in JavaScript, the bitwise operators are different from those in Java. For example, in Java, the bitwise AND operator is &, while in JavaScript it is &amp;. Similarly, the bitwise OR operator is |, and the bitwise XOR operator is ^. The bitwise NOT operator is ~, and the left shift operator is <<, while the right shift operator is >>.
Also note that the rotateLeft() and rotateRight() methods are only available in Java 1.5+, so they are not available in JavaScript.
