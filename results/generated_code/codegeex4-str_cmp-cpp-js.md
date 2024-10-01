```javascript
function demoCompare(a, b, semantically){
    console.log(`${a} and ${b} are ${a === b ? "" : "not"} exactly ${semantically} equal.`);
    
    console.log(`${a} and ${b} are ${a !== b ? "" : "not"} ${semantically} inequal.`);

    console.log(`${a} is ${a < b ? "" : "not "} ${semantically} ordered before ${b}.`);
    
    console.log(`${a} is ${a > b ? "" : "not "} ${semantically} ordered after ${b}.`);
}

function main() {
    // Case-sensitive comparisons.
    let a = process.argv[2] || "1.2.Foo";
    let b = process.argv[3] || "1.3.Bar";
    demoCompare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically");

    // Numeric comparisons; here 'numA' and 'numB' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    let numA, numB;
    numA = parseFloat(a);
    numB = parseFloat(b);
    demoCompare(numA, numB, "numerically");
}

main();
```
