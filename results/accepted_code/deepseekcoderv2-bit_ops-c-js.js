function bitwise(int a, int b) {
    console.log("a and b:", a & b);
    console.log("a or b:", a | b);
    console.log("a xor b:", a ^ b);
    console.log("not a:", ~a);
    console.log("a << n (left shift):", a << b); // Left shift is straightforward in JavaScript
    console.log("a >> n (right arithmetic shift, assuming signed integer):", a >> b);
    console.log("c >> n (logical right shift, treating signed int as unsigned):", 
                 ((a & 0xFFFFFFFF) >>> b)); // Logical shift right for a signed integer

    // For left rotate and right rotate, JavaScript doesn't have built-in operators, so we simulate them:
    function leftRotate(value, shiftBits) {
        const bits = value.toString(2).padStart(32, '0').split('');
        while (shiftBits-- > 0) {
            const msb = bits.pop();
            bits.unshift(msb);
        }
        return parseInt(bits.join(''), 2);
    }

    function rightRotate(value, shiftBits) {
        const bits = value.toString(2).padStart(32, '0').split('');
        while (shiftBits-- > 0) {
            const lsb = bits.shift();
            bits.push(lsb);
        }
        return parseInt(bits.join(''), 2);
    }

    console.log("a << b (left rotate):", leftRotate(a, b));
    console.log("a >> b (right rotate):", rightRotate(a, b));
}

// Example usage:
bitwise(5, 3); // Assuming a and b are integers