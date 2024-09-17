```
const bitwise = (a,b)=>{
    let aAndB = a & b;
    let aOrB = a | b;
    let aXorB = a ^ b;
    let notA = ~a;
    let shlA = a << b;
    let shrA = a >> b;
    let lsaUa = ua >> b;
    return {
        "a and b":aAndB,
        "a or b":aOrB,
        "a xor b":aXorB,
        "not a":notA,
        "a shl b":shlA,
        "a shr b":shrA,
        "a lsaUa b":lsaUa
    };
}
```

