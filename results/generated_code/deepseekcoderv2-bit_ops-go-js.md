```
function bitwise(a, b) {
	// Bitwise logical operations
	console.log("AND:", (a & b).toString(2));
	console.log("OR: ", (a | b).toString(2));
	console.log("XOR:", (a ^ b).toString(2));
	console.log("NOT:", (~a).toString(2));

	if (b < 0) {
		console.log("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
		return;
	}
	var ua = a & 0xFFFF; // Convert to unsigned int16
	var ub = b & 0xFFFF; // Convert to unsigned int32

	// Logical shifts (unsigned left operand)
	console.log("SHL:", (ua << ub).toString(2));
	console.log("SHR:", (ua >> ub).toString(2));

	// Arithmetic shifts (signed left operand)
	console.log("LAS:", (a << ub).toString(2));
	console.log("RAS:", (a >> ub).toString(2));

	// Rotations
	console.log("ROL:", ((ua << ub) | (int16(uint16(a)) >> (16 - ub))).toString(2));
	console.log("ROR:", ((int16(uint16(a) >> ub)) | a << (16 - ub)).toString(2));
}

function main() {
	var a = -460;
	var b = 6;
	bitwise(a, b);
}
```