function bitwise_built_ins(width, a, b) 
{
    const mask = ((1 << width) - 1);

    console.log(`\n  AND:     0b${a : 0 { width } b}} 
                                  & 
0b${b : 0 { width } b}} 
                                  = 
0b${(a & b) & mask : 0 { width } b}}`
);
}

function rotr(width, a, n) 
{
    if (n === 0) 
    {
        return a;
    }

    const mask = ((1 << width) - 1));
    const topBitMask = 1 << (width - 1));

    let aa = a | topBitMask;

    console.log(`\n  ROTATIONS
  
    RIGHT:   rotr(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotr(width, a, n), "0"}${width}b}}      
        LEFT:    rotl(${width}), 0b${aa :0{width}b}}, ${n})
        =       0b${rotl(width, aa, n), "0"}${width}b}}    
`);
}