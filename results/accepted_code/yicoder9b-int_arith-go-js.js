let a = parseInt(prompt("enter two integers: "));
let b = parseInt(prompt());
alert(`${a} + ${b} = ${a + b}`);
alert(`${a} - ${b} = ${a - b}`);
alert(`${a} * ${b} = ${a * b}`);
alert(`${a} / ${b} = ${Math.trunc(a / b)}`); // truncates towards 0
alert(`${a} % ${b} = ${a % b}`); // same sign as first operand
