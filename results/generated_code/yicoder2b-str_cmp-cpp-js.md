Here is the equivalent JavaScript code for your C++ code. Please note that this is a simple demonstration and does not cover all the possible corner cases in your original C++ code:

```javascript
// Include necessary libraries if any

function demoCompare(a, b, semantically) {
    if (a === b) {
        console.log(a + " and " + b + " are exactly " + semantically + " equal.");
    } else {
        console.log(a + " and " + b + " are not exactly " + semantically + " equal.");
    }

    if (a !== b) {
        console.log(a + " is " + semantically + " ordered before " + b + '.');
        console.log(b + " is " + semantically + " ordered after " + a + '.');
    } else {
        console.log(a + " and " + b + " are exactly " + semantically + " equal.");
    }
}

// Main function
function main() {
    let a = (arguments[0] ? arguments[0] : '1.2.Foo');
    let b = (arguments[1] ? arguments[1] : '1.3.Bar');
    demoCompare(a, b, "lexically");
  
    // Case-insensitive comparisons by converting strings to lowercase
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically");
    
    // Numeric comparison; Here 'double' could be any type for which the >> operator is defined, eg int, long etc.
    let numA, numB;
    numA = Number(a.replace('.', ''));
    numB = Number(b.replace('.', ''));
    demoCompare(numA, numB, "numerically");
  
    return (a == b);
}
```

You can run the main function with command line arguments to demonstrate each of the comparisons made in your original C++ code. Be sure to replace `arguments[0]` and `arguments[1]` with actual string values if you are calling the function from elsewhere in your program.
