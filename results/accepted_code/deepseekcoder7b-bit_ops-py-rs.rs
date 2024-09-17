fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}

fn bitwise_built_ins(width: u32, a: u32, b: u32) {
    let mask = (1 << width) - 1;
    
    println!("AND:     0b{:0width$b} \n& 0b{:0width$b} \n= "
             "0b{:0width$b}", a, b, (a & b) & mask, width = 8);
    
    println!("OR:      0b{:0width$b} \n|\
             0b{:0width$b} \n= \
             "0b{:0width$b}", a, b, (a | b) & mask, width = 8);
    
    println!-- NEGATIVE
    println!-- ZERO
}

fn helper_funcs(width: u32, a: u32) {
    let mask = (1 << width) - 1;
    let aa = a | (1 << (width - 1));   // a with top bit set
    
    println!-- ROTATIONS
    for i in [1, 2, 4] {
        println!-- LEFT:
        println!-- RIGHT:
    }
        
    for shift_amt in [1, 2, 4] {
        println!-- SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:
    }
}