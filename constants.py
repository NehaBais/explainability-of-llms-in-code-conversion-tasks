LANGS = {
    "C": "C",
    "CPP": "C++",
    "GO": "Golang",
    "JAVA": "Java",
    "JS": "JavaScript",
    "PY": "Python",
    "RS": "Rust",
}

TASKS = {
    "bit_ops": "Bitwise Operations",
    "int_arith": "Integer Arithmetic",
    "int_factors": "Factors of an Integer",
    "int_cmp": "Integer Comparison",
    "logic_ops": "Logical Operations",
    "str_append": "String Append",
    "str_len_cmp": "Compare length of 2 Strings",
    "str_cmp": "Compare 2 Strings lexicographically",
    "str_concat": "Concatenate 2 Strings",
    "str_interp": "String Interpolation",
    "str_match": "String Matching",
    "str_prepend": "Prepend String",
    "str_substring": "Extract Substring",
    "dir_make": "Create a directory",
    "file_exists": "Check if a file exists",
    "file_create": "Create a file",
    "file_size": "Get the size of file",
    "file_rename": "Rename a file",
}

TASK_DESCRIPTION = {x: "" for x in TASKS.keys()}

TASK_DESCRIPTION[
    "bit_ops"
] = """Write a routine to perform a bitwise AND, OR, and XOR on two integers, a bitwise NOT on the first integer, a left shift, right shift, right arithmetic shift, left rotate, and right rotate.
All shifts and rotates should be done on the first integer with a shift/rotate amount of the second integer."""

TASK_DESCRIPTION[
    "int_arith"
] = """Get two integers from the user, and then (for those two integers), display their:
- sum
- difference
- product
- integer quotient
- remainder
- exponentiation (if the operator exists)
Don't include error handling.
For quotient, indicate how it rounds (e.g. towards zero, towards negative infinity, etc.).
For remainder, indicate whether its sign matches the sign of the first operand or of the second operand, if they are different."""

TASK_DESCRIPTION[
    "int_factors"
] = """Compute the factors of a positive integer.
These factors are the positive integers by which the number being factored can be divided to yield a positive integer result.
Note that every prime number has two factors: 1 and itself."""

TASK_DESCRIPTION[
    "int_cmp"
] = """Get two integers from the user.
Then, display a message if the first integer is:
- less than,
- equal to, or
- greater than the second integer.
Test the condition for each case separately, so that all three comparison operators are used in the code."""

TASK_DESCRIPTION["logic_ops"] = (
    """Write a function that takes two logical (boolean) values, and outputs the result of "and" and "or" on both arguments as well as "not" on the first arguments."""
)

TASK_DESCRIPTION[
    "str_append"
] = """Create a string variable equal to any text value.
Append the string variable with another string literal in the most idiomatic way.
Show the contents of the variable after the append operation."""

TASK_DESCRIPTION["str_len_cmp"] = (
    """Given two strings of different length, determine which string is longer or shorter. Print both strings and their length, one on each line. Print the longer one first."""
)

TASK_DESCRIPTION[
    "str_cmp"
] = """Demonstrate how to compare two strings from within the language and how to achieve a lexical comparison.
The task should demonstrate:
- Comparing two strings for exact equality
- Comparing two strings for inequality (i.e., the inverse of exact equality)
- Comparing two strings to see if one is lexically ordered before than the other
- Comparing two strings to see if one is lexically ordered after than the other
- How to achieve both case sensitive comparisons and case insensitive comparisons within the language
- How the language handles comparison of numeric strings if these are not treated lexically
Demonstrate any other kinds of string comparisons that the language provides, particularly as it relates to your type system."""

TASK_DESCRIPTION[
    "str_concat"
] = """Create a string variable equal to any text value.
Create another string variable whose value is the original variable concatenated with another string literal.
To illustrate the operation, show the content of the variables."""

TASK_DESCRIPTION[
    "str_interp"
] = """Given a string and defined variables or values, string interpolation is the replacement of defined character sequences in the string by values or variable values.
For example, given an original string of "Mary had a X lamb.", a value of "big", and if the language replaces X in its interpolation routine, then the result of its interpolation would be the string "Mary had a big lamb"."""

TASK_DESCRIPTION[
    "str_match"
] = """Given two strings, demonstrate the following three types of string matching:
1. Determining if the first string starts with second string
2. Determining if the first string contains the second string at any location
3. Determining if the first string ends with the second string

Optional requirements:
1. Print the location of the match for part 2
2. Handle multiple occurrences of a string for part 2."""

TASK_DESCRIPTION[
    "str_prepend"
] = """Create a string variable equal to any text value.
Prepend the string variable with another string literal."""

TASK_DESCRIPTION[
    "str_substring"
] = """Display a substring:
- starting from n characters in and of m length;
- starting from n characters in, up to the end of the string;
- whole string minus the last character;
- starting from a known character within the string and of m length;
- starting from a known substring within the string and of m length.

If the program uses UTF-8 or UTF-16, it must work on any valid Unicode code point, whether in the Basic Multilingual Plane or above it.
The program must reference logical characters (code points), not 8-bit code units for UTF-8 or 16-bit code units for UTF-16.
Programs for other encodings (such as 8-bit ASCII, or EUC-JP) are not required to handle all Unicode characters."""

TASK_DESCRIPTION[
    "dir_make"
] = """Create a directory and any missing parents.
This task is named after the posix mkdir -p command, and several libraries which implement the same behavior.
Please implement a function of a single path string (for example ./path/to/dir) which has the above side-effect. If the directory already exists, return successfully. Ideally implementations will work equally well cross-platform"""

TASK_DESCRIPTION[
    "file_exists"
] = """Verify that a file called input.txt and a directory called docs exist.
This should be done twice:
- once for the current working directory,   and
- once for a file and a directory in the filesystem root."""

TASK_DESCRIPTION["file_create"] = (
    """In this task, the job is to create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This should be done twice: once "here", i.e. in the current working directory and once in the filesystem root."""
)

TASK_DESCRIPTION["file_size"] = (
    """Verify the size of a file called input.txt for a file in the current working directory, and another one in the file system root."""
)

TASK_DESCRIPTION[
    "file_rename"
] = """Rename:
- a file called input.txt into output.txt and
- a directory called docs into mydocs.

This should be done twice: once "here", i.e. in the current working directory and once in the filesystem root.
It can be assumed that the user has the rights to do so."""

REFERENCE_CODE = {x: {y: "" for y in TASKS.keys()} for x in LANGS.keys()}

REFERENCE_CODE["C"][
    "bit_ops"
] = """
void bitwise(int a, int b)
{
  printf("a and b: %d\n", a & b);
  printf("a or b: %d\n", a | b);
  printf("a xor b: %d\n", a ^ b);
  printf("not a: %d\n", ~a);
  printf("a << n: %d\n", a << b); /* left shift */
  printf("a >> n: %d\n", a >> b); /* on most platforms: arithmetic right shift */
  /* convert the signed integer into unsigned, so it will perform logical shift */
  unsigned int c = a;
  printf("c >> b: %d\n", c >> b); /* logical right shift */
  /* there are no rotation operators in C */
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "bit_ops"
] = """
#include <iostream>

void bitwise(int a, int b)
{
  std::cout << "a and b: " << (a & b)  << '\n'; // Note: parentheses are needed because & has lower precedence than <<
  std::cout << "a or b:  " << (a | b)  << '\n';
  std::cout << "a xor b: " << (a ^ b)  << '\n';
  std::cout << "not a:   " << ~a       << '\n';

  // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater or equal to the number of bits in the integer being shifted.
  std::cout << "a shl b: " << (a << b) << '\n'; // Note: "<<" is used both for output and for left shift
  std::cout << "a shr b: " << (a >> b) << '\n'; // typically arithmetic right shift, but not guaranteed
  unsigned int ua = a;
  std::cout << "a lsr b: " << (ua >> b) << '\n'; // logical right shift (guaranteed)

  // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
  // The rotate function works for all rotation amounts, but the integer being rotated must always be an
  // unsigned integer.
  std::cout << "a rol b: " << std::rotl(ua, b) << '\n';
  std::cout << "a ror b: " << std::rotr(ua, b) << '\n';
}
"""

REFERENCE_CODE["GO"][
    "bit_ops"
] = """
package main

import "fmt"

func bitwise(a, b int16) {
	fmt.Printf("a:   %016b\n", uint16(a))
	fmt.Printf("b:   %016b\n", uint16(b))

	// Bitwise logical operations
	fmt.Printf("and: %016b\n", uint16(a&b))
	fmt.Printf("or:  %016b\n", uint16(a|b))
	fmt.Printf("xor: %016b\n", uint16(a^b))
	fmt.Printf("not: %016b\n", uint16(^a))

	if b < 0 {
		fmt.Println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).")
		return
	}
	ua := uint16(a)
	ub := uint32(b)

	// Logical shifts (unsigned left operand)
	fmt.Printf("shl: %016b\n", uint16(ua<<ub))
	fmt.Printf("shr: %016b\n", uint16(ua>>ub))

	// Arithmetic shifts (signed left operand)
	fmt.Printf("las: %016b\n", uint16(a<<ub))
	fmt.Printf("ras: %016b\n", uint16(a>>ub))

	// Rotations
	fmt.Printf("rol: %016b\n", uint16(a<<ub|int16(uint16(a)>>(16-ub))))
	fmt.Printf("ror: %016b\n", uint16(int16(uint16(a)>>ub)|a<<(16-ub)))
}

func main() {
	var a, b int16 = -460, 6
	bitwise(a, b)
}
"""

REFERENCE_CODE["JAVA"][
    "bit_ops"
] = """
public static void bitwise(int a, int b){
  System.out.println("a AND b: " + (a & b));
  System.out.println("a OR b: "+ (a | b));
  System.out.println("a XOR b: "+ (a ^ b));
  System.out.println("NOT a: " + ~a);
  System.out.println("a << b: " + (a << b)); // left shift
  System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
  System.out.println("a >>> b: " + (a >>> b)); // logical right shift
  System.out.println("a rol b: " + Integer.rotateLeft(a, b)); //rotate left, Java 1.5+
  System.out.println("a ror b: " + Integer.rotateRight(a, b)); //rotate right, Java 1.5+
}
"""

REFERENCE_CODE["JS"][
    "bit_ops"
] = """
function bitwise(a, b){
   alert("a AND b: " + (a & b));
   alert("a OR b: "+ (a | b));
   alert("a XOR b: "+ (a ^ b));
   alert("NOT a: " + ~a);
   alert("a << b: " + (a << b)); // left shift
   alert("a >> b: " + (a >> b)); // arithmetic right shift
   alert("a >>> b: " + (a >>> b)); // logical right shift
}
"""

REFERENCE_CODE["PY"][
    "bit_ops"
] = '''
def bitwise_built_ins(width, a, b):
    mask = (1 << width) - 1
    print(f"""\
    AND:     0b{a :0{width}b} 
           & 0b{b :0{width}b} 
           = 0b{(a & b) & mask :0{width}b}
           
    OR:      0b{a :0{width}b} 
           | 0b{b :0{width}b} 
           = 0b{(a | b) & mask :0{width}b}
           
    XOR:     0b{a :0{width}b} 
           ^ 0b{b :0{width}b} 
           = 0b{(a ^ b) & mask :0{width}b}
           
    NOT:   ~ 0b{a :0{width}b} 
           = 0b{(~a) & mask :0{width}b}
           
    SHIFTS
    
      RIGHT:   0b{a :0{width}b} >> 1
             = 0b{(a >> 1) & mask :0{width}b}      
    
      LEFT:    0b{a :0{width}b} << 1
             = 0b{(a << 1) & mask :0{width}b}      
""")

def rotr(width, a, n):
    "Rotate a, n times to the right"
    if n < 0:
        return rotl(width, a, -n)
    elif n == 0:
        return a
    else:
        mask = (1 << width) - 1
        a, n = a & mask, n % width
        return ((a >> n)    # top moved down
                | ((a & ((1 << n) - 1))   # Bottom masked...
                   << (width - n)))  # ... then moved up    

def rotl(width, a, n):
    "Rotate a, n times to the left"
    if n < 0:
        return rotr(width, a, -n)
    elif n == 0:
        return a
    else:
        mask = (1 << width) - 1
        a, n = a & mask, n % width
        return (((a << n) & mask)      # bottom shifted up and masked
                | (a >> (width - n)))  # Top moved down  
    
def asr(width, a, n):
    "Arithmetic shift a, n times to the right. (sign preserving)."
    mask, top_bit_mask = ((1 << width) - 1), 1 << (width - 1)
    if n < 0:
        return  (a << -n) & mask
    elif n == 0:
        return a
    elif n >= width:
        return mask if a & top_bit_mask else 0
    else:
        a = a & mask
        if a & top_bit_mask:    # Sign bit set?
            signs = (1 << n) - 1
            return a >> n | (signs << width - n)
        else:
            return a >> n
    
      
def helper_funcs(width, a):
    mask, top_bit_mask = ((1 << width) - 1), 1 << (width - 1)
    aa = a | top_bit_mask  # a with top bit set
    print(f"""\
    ROTATIONS
    
      RIGHT:   rotr({width}, 0b{a :0{width}b}, 1)
               =       0b{rotr(width, a, 1) :0{width}b}      
               rotr({width}, 0b{a :0{width}b}, 2)
               =       0b{rotr(width, a, 2) :0{width}b}      
               rotr({width}, 0b{a :0{width}b}, 4)
               =       0b{rotr(width, a, 4) :0{width}b}      
    
      LEFT:    rotl({width}, 0b{a :0{width}b}, 1)
               =       0b{rotl(width, a, 1) :0{width}b}      
               rotl({width}, 0b{a :0{width}b}, 2)
               =       0b{rotl(width, a, 2) :0{width}b}      
               rotl({width}, 0b{a :0{width}b}, 4)
               =       0b{rotl(width, a, 4) :0{width}b}    
    
    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
    
               asr({width}, 0b{a :0{width}b}, 1)
               =      0b{asr(width, a, 1) :0{width}b}      
               asr({width}, 0b{aa :0{width}b}, 1)
               =      0b{asr(width, aa, 1) :0{width}b}      
               asr({width}, 0b{a :0{width}b}, 2)
               =      0b{asr(width, a, 2) :0{width}b}      
               asr({width}, 0b{aa :0{width}b}, 2)
               =      0b{asr(width, aa, 2) :0{width}b}      
               asr({width}, 0b{a :0{width}b}, 4)
               =      0b{asr(width, a, 4) :0{width}b} 
               asr({width}, 0b{aa :0{width}b}, 4)
               =      0b{asr(width, aa, 4) :0{width}b} 
""")

if __name__ == '__main__':
    bitwise_built_ins(8, 27, 125)
    helper_funcs(8, 27)
'''

REFERENCE_CODE["RS"][
    "bit_ops"
] = """
fn main() {
    let a: u8 = 105;
    let b: u8 = 91;
    println!("a      = {:0>8b}", a);
    println!("b      = {:0>8b}", b);
    println!("a | b  = {:0>8b}", a | b);
    println!("a & b  = {:0>8b}", a & b);
    println!("a ^ b  = {:0>8b}", a ^ b);
    println!("!a     = {:0>8b}", !a);
    println!("a << 3 = {:0>8b}", a << 3);
    println!("a >> 3 = {:0>8b}", a >> 3);
}
"""

REFERENCE_CODE["C"][
    "int_arith"
] = """
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  if (argc < 3) exit(1);
  b = atoi(argv[--argc]);
  if (b == 0) exit(2);
  a = atoi(argv[--argc]);
  printf("a+b = %d\n", a+b);
  printf("a-b = %d\n", a-b);
  printf("a*b = %d\n", a*b);
  printf("a/b = %d\n", a/b); /* truncates towards 0 (in C99) */
  printf("a%%b = %d\n", a%b); /* same sign as first operand (in C99) */
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "int_arith"
] = """
#include <iostream>

int main()
{
  int a, b;
  std::cin >> a >> b;
  std::cout << "a+b = " << a+b << "\n";
  std::cout << "a-b = " << a-b << "\n";
  std::cout << "a*b = " << a*b << "\n";
  std::cout << "a/b = " << a/b << ", remainder " << a%b << "\n";
  return 0;
}
"""

REFERENCE_CODE["GO"][
    "int_arith"
] = """
package main

import "fmt"

func main() {
    var a, b int
    fmt.Print("enter two integers: ")
    fmt.Scanln(&a, &b)
    fmt.Printf("%d + %d = %d\n", a, b, a+b)
    fmt.Printf("%d - %d = %d\n", a, b, a-b)
    fmt.Printf("%d * %d = %d\n", a, b, a*b)
    fmt.Printf("%d / %d = %d\n", a, b, a/b)  // truncates towards 0
    fmt.Printf("%d %% %d = %d\n", a, b, a%b) // same sign as first operand
    // no exponentiation operator
}
"""

REFERENCE_CODE["JAVA"][
    "int_arith"
] = """
import java.util.Scanner;

public class IntegerArithmetic {
    public static void main(String[] args) {
        // Get the 2 numbers from command line arguments
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
        int difference = a - b; // The result of subtracting 'b' from 'a'
        int product = a * b;    // The result of multiplying 'a' and 'b'
        int division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
        int remainder = a % b;  // The remainder of dividing 'a' by 'b'

        System.out.println("a + b = " + sum);
        System.out.println("a - b = " + difference);
        System.out.println("a * b = " + product);
        System.out.println("quotient of a / b = " + division);   // truncates towards 0
        System.out.println("remainder of a / b = " + remainder);   // same sign as first operand
    }
}
"""

REFERENCE_CODE["JS"][
    "int_arith"
] = """
// Invoked as node script_name.js <a> <b>. Positions 0 and 1 in the argv array contain 'node' and 'script_name.js' respectively
var a = parseInt(process.argv[2], 10);
var b = parseInt(process.argv[3], 10);

var sum = a + b;
var difference = a - b;
var product = a * b;
var division = a / b;
var remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

console.log('a + b = %d', sum);  // The %d syntax is a placeholder that is replaced by the sum
console.log('a - b = %d', difference);
console.log('a * b = %d', product);
console.log('a / b = %d', division);
console.log('a % b = %d', remainder);
"""

REFERENCE_CODE["PY"][
    "int_arith"
] = """
input1 = 18
# input1 = input()
input2 = 7
# input2 = input()

qq = input1 + input2
print("Sum: 		  " + str(qq))
ww = input1 - input2
print("Difference: 	  " + str(ww))
ee = input1 * input2
print("Product: 	  " + str(ee))
rr = input1 / input2
print("Integer quotient: " + str(int(rr)))
print("Float quotient:   " + str(float(rr)))
tt = float(input1 / input2)
uu = (int(tt) - float(tt))*-10
#print(tt)
print("Whole Remainder:  " + str(int(uu)))
print("Actual Remainder: " + str(uu))
yy = input1 ** input2
print("Exponentiation:   " + str(yy))
"""

REFERENCE_CODE["RS"][
    "int_arith"
] = """
use std::env;

fn main() {
    let args: Vec<_> = env::args().collect();
    let a = args[1].parse::<i32>().unwrap();
    let b = args[2].parse::<i32>().unwrap();

    println!("sum:              {}", a + b);
    println!("difference:       {}", a - b);
    println!("product:          {}", a * b);
    println!("integer quotient: {}", a / b); // truncates towards zero
    println!("remainder:        {}", a % b); // same sign as first operand
}
"""

REFERENCE_CODE["C"][
    "int_factors"
] = """
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *list;
    short count; 
} Factors;

void xferFactors( Factors *fctrs, int *flist, int flix ) 
{
    int ix, ij;
    int newSize = fctrs->count + flix;
    if (newSize > flix)  {
        fctrs->list = realloc( fctrs->list, newSize * sizeof(int));
    }
    else {
        fctrs->list = malloc(  newSize * sizeof(int));
    }
    for (ij=0,ix=fctrs->count; ix<newSize; ij++,ix++) {
        fctrs->list[ix] = flist[ij];
    }
    fctrs->count = newSize;
}

Factors *factor( int num, Factors *fctrs)
{
    int flist[301], flix;
    int dvsr;
    flix = 0;
    fctrs->count = 0;
    free(fctrs->list);
    fctrs->list = NULL;
    for (dvsr=1; dvsr*dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        if ( flix == 300) {
            xferFactors( fctrs, flist, flix );
            flix = 0;
        }
        flist[flix++] = dvsr;
        flist[flix++] = num/dvsr;
    }
    if (dvsr*dvsr == num) 
        flist[flix++] = dvsr;
    if (flix > 0)
        xferFactors( fctrs, flist, flix );

    return fctrs;
}
        
int main(int argc, char*argv[])
{
    int nums2factor[] = { 2059, 223092870, 3135, 45 };
    Factors ftors = { NULL, 0};
    char sep;
    int i,j;

    for (i=0; i<4; i++) {
        factor( nums2factor[i], &ftors );
        printf("\nfactors of %d are:\n  ", nums2factor[i]);
        sep = ' ';
        for (j=0; j<ftors.count; j++) {
            printf("%c %d", sep, ftors.list[j]);
            sep = ',';
        }
        printf("\n");
    }
    return 0;
}
"""

REFERENCE_CODE["CPP"][
    "int_factors"
] = """
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> GenerateFactors(int n) {
    std::vector<int> factors = { 1, n };
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i * i != n)
                factors.push_back(n / i);
        }
    }

    std::sort(factors.begin(), factors.end());
    return factors;
}

int main() {
    const int SampleNumbers[] = { 3135, 45, 60, 81 };

    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        std::vector<int> factors = GenerateFactors(SampleNumbers[i]);
        std::cout << "Factors of ";
        std::cout.width(4);
        std::cout << SampleNumbers[i] << " are: ";
        std::copy(factors.begin(), factors.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
"""

REFERENCE_CODE["GO"][
    "int_factors"
] = """
package main

import "fmt"

func main() {
    printFactors(-1)
    printFactors(0)
    printFactors(1)
    printFactors(2)
    printFactors(3)
    printFactors(53)
    printFactors(45)
    printFactors(64)
    printFactors(600851475143)
    printFactors(999999999999999989)
}

func printFactors(nr int64) {
    if nr < 1 {
        fmt.Println("\nFactors of", nr, "not computed")
        return
    }
    fmt.Printf("\nFactors of %d: ", nr)
    fs := make([]int64, 1)
    fs[0] = 1
    apf := func(p int64, e int) {
        n := len(fs)
        for i, pp := 0, p; i < e; i, pp = i+1, pp*p {
            for j := 0; j < n; j++ {
                fs = append(fs, fs[j]*pp)
            }
        }
    }
    e := 0
    for ; nr & 1 == 0; e++ {
        nr >>= 1
    }
    apf(2, e)
    for d := int64(3); nr > 1; d += 2 {
        if d*d > nr {
            d = nr
        }
        for e = 0; nr%d == 0; e++ {
            nr /= d
        }
        if e > 0 {
            apf(d, e)
        }
    }
    fmt.Println(fs)
    fmt.Println("Number of factors =", len(fs))
}
"""

REFERENCE_CODE["JAVA"][
    "int_factors"
] = """
public static TreeSet<Long> factors(long n)
{
 TreeSet<Long> factors = new TreeSet<Long>();
 factors.add(n);
 factors.add(1L);
 for(long test = n - 1; test >= Math.sqrt(n); test--)
  if(n % test == 0)
  {
   factors.add(test);
   factors.add(n / test);
  }
 return factors;
}
"""

REFERENCE_CODE["JS"][
    "int_factors"
] = """
function factors(num)
{
 var
  n_factors = [],
  i;

 for (i = 1; i <= Math.floor(Math.sqrt(num)); i += 1)
  if (num % i === 0)
  {
   n_factors.push(i);
   if (num / i !== i)
    n_factors.push(num / i);
  }
 n_factors.sort(function(a, b){return a - b;});  // numeric sort
 return n_factors;
}

factors(45);  // [1,3,5,9,15,45] 
factors(53);  // [1,53] 
factors(64);  // [1,2,4,8,16,32,64]
"""

REFERENCE_CODE["PY"][
    "int_factors"
] = """
from math import isqrt
def factor(n):
    factors1, factors2 = [], []
    for x in range(1, isqrt(n)):
        if n % x == 0:
            factors1.append(x)
            factors2.append(n // x)
    x += 1
    if x * x == n:
        factors1.append(x)
    factors1.extend(reversed(factors2))
    return factors1

for i in 45, 53, 64:
    print("%i: factors: %s" % (i, factor(i)))
"""

REFERENCE_CODE["RS"][
    "int_factors"
] = """
fn main() {
    assert_eq!(vec![1, 2, 4, 5, 10, 10, 20, 25, 50, 100], factor(100)); // asserts that two expressions are equal to each other
    assert_eq!(vec![1, 101], factor(101));
}

fn factor(num: i32) -> Vec<i32> {
    let mut factors: Vec<i32> = Vec::new(); // creates a new vector for the factors of the number

    for i in 1..((num as f32).sqrt() as i32 + 1) { 
        if num % i == 0 {
            factors.push(i); // pushes smallest factor to factors
            factors.push(num/i); // pushes largest factor to factors
        }
    }
    factors.sort(); // sorts the factors into numerical order for viewing purposes
    factors // returns the factors
}
"""

REFERENCE_CODE["C"][
    "int_cmp"
] = """
#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  if (a < b)
    printf("%d is less than %d\n", a, b);

  if (a == b)
    printf("%d is equal to %d\n", a, b);

  if (a > b)
    printf("%d is greater than %d\n", a, b);

  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "int_cmp"
] = """
#include <iostream>

int main()
{
  int a, b;

  if (!(std::cin >> a >> b)) {
    std::cerr << "could not read the numbers\n";
    return 1;
  }

  // test for less-than
  if (a < b)
    std::cout << a << " is less than " << b << "\n";

  // test for equality
  if (a == b)
    std::cout << a << " is equal to " << b << "\n";

  // test for greater-than
  if (a > b)
    std::cout << a << " is greater than " << b << "\n";
}
"""

REFERENCE_CODE["GO"][
    "int_cmp"
] = """
package main

import (
	"fmt"
	"log"
)

func main() {
	var n1, n2 int
	fmt.Print("enter number: ")
	if _, err := fmt.Scan(&n1); err != nil {
		log.Fatal(err)
	}
	fmt.Print("enter number: ")
	if _, err := fmt.Scan(&n2); err != nil {
		log.Fatal(err)
	}
	switch {
	case n1 < n2:
		fmt.Println(n1, "less than", n2)
	case n1 == n2:
		fmt.Println(n1, "equal to", n2)
	case n1 > n2:
		fmt.Println(n1, "greater than", n2)
	}
}
"""

REFERENCE_CODE["JAVA"][
    "int_cmp"
] = """
import java.io.*;

public class compInt {
   public static void main(String[] args) {
       try {
           BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

           int nbr1 = Integer.parseInt(in.readLine());
           int nbr2 = Integer.parseInt(in.readLine());

           if(nbr1<nbr2)
               System.out.println(nbr1 + " is less than " + nbr2);

           if(nbr1>nbr2)
                System.out.println(nbr1 + " is greater than " + nbr2);

           if(nbr1==nbr2)
                System.out.println(nbr1 + " is equal to " + nbr2);
       } catch(IOException e) { }
   }
}
"""

REFERENCE_CODE["JS"][
    "int_cmp"
] = """
// Using type coercion
function compare(a, b) {
  if (a==b) print(a + " equals " + b);
  if (a < b) print(a + " is less than " + b);
  if (a > b) print(a + " is greater than " + b);
}

// Without using type coercion and using standards
// Written for browsers
// assumption of a and b are both integers if typeof test passes
function compare (a, b) {
  if (typeof a === typeof b) {
    if (a === b) {
      document.writeln(a + " equals " + b);
    }
    if (a < b) {
      document.writeln(a + " is less than " + b);
    }
    if (a > b) {
      document.writeln(a + " is greater than " + b);
    }
  } else {
    // "1" and 1 are an example of this as the first is type string and the second is type number
    print(a + "{" + (typeof a) + "} and " + b + "{" + (typeof b) + "} are not of the same type and cannot be compared.");
  }
}
"""

REFERENCE_CODE["PY"][
    "int_cmp"
] = """
#!/usr/bin/env python
a = input('Enter value of a: ')
b = input('Enter value of b: ')

if a < b:
    print 'a is less than b'
elif a > b:
    print 'a is greater than b'
elif a == b:
    print 'a is equal to b'
"""

REFERENCE_CODE["RS"][
    "int_cmp"
] = """
use std::io::{self, BufRead};

fn main() {
    let mut reader = io::stdin();
    let mut buffer = String::new();
    let mut lines = reader.lock().lines().take(2);
    let nums: Vec<i32>= lines.map(|string|
        string.unwrap().trim().parse().unwrap()
        ).collect();
    let a: i32 = nums[0];
    let b: i32 = nums[1];
    if a < b {
        println!("{} is less than {}" , a , b)
    } else if a == b {
        println!("{} equals {}" , a , b)
    } else if a > b {
        println!("{} is greater than {}" , a , b)
    };
}
"""

REFERENCE_CODE["C"][
    "logic_ops"
] = """
void print_logic(int a, int b)
{
  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}
"""

REFERENCE_CODE["CPP"][
    "logic_ops"
] = """
void print_logic(bool a, bool b)
{
  std::cout << std::boolalpha; // so that bools are written as "true" and "false"
  std::cout << "a and b is " << (a && b) << "\n";
  std::cout << "a or b is " << (a || b) << "\n";
  std::cout << "not a is " << (!a) << "\n";
}
"""

REFERENCE_CODE["GO"][
    "logic_ops"
] = """
func printLogic(a, b bool) {
    fmt.Println("a and b is", a && b)
    fmt.Println("a or b is", a || b)
    fmt.Println("not a is", !a)
}
"""
