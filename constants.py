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

MODELS = {
    "deepseekcoder": "DeepSeek Coder [1.3B]",
    "codegemma2b": "CodeGemma [2B]",
    "yicoder2b": "Yi-Coder [1.5B]",
    "deepseekcoderv2": "DeepSeek Coder V2 [2.4B]",
    "stablecode": "Stable Code [3B]",
    "granitecode3b": "Granite Code [3B]",
    "deepseekcoder7b": "DeepSeek Coder [6.7B]",
    "magicoder7b": "Magicoder [6.7B]",
    "codellama7b": "Code Llama [7B]",
    "codegemma7b": "CodeGemma [7B]",
    "codeqwen": "CodeQwen1.5 [7B]",
    "dolphincoder7b": "DolphinCoder [7B]",
    "granitecode8b": "Granite Code [8B]",
    "codegeex4": "CodeGeeX4 [9B]",
    "yicoder9b": "Yi-Coder [9B]",
    "codellama13b": "Code Llama [13B]",
    "codeup": "CodeUp [13B]",
    "dolphincoder15b": "DolphinCoder [15B]",
    "granitecode20b": "Granite Code [20B]",
    "codestral": "Codestral [22B]",
    "deepseekcoder33b": "DeepSeek Coder [33B]",
    "codellama34b": "Code Llama [34B]",
    "codebooga": "CodeBooga [34B]",
    "granitecode34b": "Granite Code [34B]",
    "phindcodellama": "Phind CodeLlama [34B]",
}

OLLAMA_TAGS = {
    "deepseekcoder": "deepseek-coder:1.3b-instruct",
    "codegemma2b": "codegemma:2b",
    "yicoder2b": "yi-coder:1.5b-chat",
    "deepseekcoderv2": "deepseek-coder-v2:16b-lite-base-q4_0",
    "stablecode": "stable-code:instruct",
    "granitecode3b": "granite-code:3b-instruct",
    "deepseekcoder7b": "deepseek-coder:6.7b-instruct",
    "magicoder7b": "magicoder:7b",
    "codellama7b": "codellama:7b-instruct",
    "codegemma7b": "codegemma:7b-instruct",
    "codeqwen": "codeqwen:chat",
    "dolphincoder7b": "dolphincoder:7b",
    "granitecode8b": "granite-code:8b-instruct",
    "codegeex4": "codegeex4:9b",
    "yicoder9b": "yi-coder:9b-chat",
    "codellama13b": "codellama:13b-instruct",
    "codeup": "codeup:13b",
    "dolphincoder15b": "dolphincoder:15b",
    "granitecode20b": "granite-code:20b-instruct",
    "codestral": "codestral:22b",
    "deepseekcoder33b": "deepseek-coder:33b-instruct",
    "codellama34b": "codellama:34b-instruct",
    "codebooga": "codebooga:34b",
    "granitecode34b": "granite-code:34b-instruct",
    "phindcodellama": "phind-codellama:34b-v2",
}

HUGGINGFACE_TAGS = {
    "deepseekcoder": "deepseek-ai/deepseek-coder-1.3b-instruct",
    "codegemma2b": "google/codegemma-1.1-2b",
    "yicoder2b": "01-ai/Yi-Coder-1.5B-Chat",
    "deepseekcoderv2": "deepseek-ai/DeepSeek-Coder-V2-Lite-Instruct",
    "stablecode": "stabilityai/stable-code-instruct-3b",
    "granitecode3b": "ibm-granite/granite-3b-code-instruct-2k",
    "deepseekcoder7b": "deepseek-ai/deepseek-coder-6.7b-instruct",
    "magicoder7b": "ise-uiuc/Magicoder-S-CL-7B",
    "codellama7b": "meta-llama/CodeLlama-7b-Instruct-hf",
    "codegemma7b": "google/codegemma-1.1-7b-it",
    "codeqwen": "Qwen/CodeQwen1.5-7B-Chat",
    "dolphincoder7b": "cognitivecomputations/dolphincoder-starcoder2-7b",
    "granitecode8b": "ibm-granite/granite-8b-code-instruct-4k",
    "codegeex4": "THUDM/codegeex4-all-9b",
    "yicoder9b": "01-ai/Yi-Coder-9B-Chat",
    "codellama13b": "meta-llama/CodeLlama-13b-Instruct-hf",
    "codeup": "deepse/CodeUp-Llama-2-13b-chat-hf",
    "dolphincoder15b": "cognitivecomputations/dolphincoder-starcoder2-15b",
    "granitecode20b": "ibm-granite/granite-20b-code-instruct",
    "codestral": "mistralai/Codestral-22B-v0.1",
    "deepseekcoder33b": "deepseek-ai/deepseek-coder-33b-instruct",
    "codellama34b": "meta-llama/CodeLlama-34b-Instruct-hf",
    "codebooga": "oobabooga/CodeBooga-34B-v0.1",
    "granitecode34b": "ibm-granite/granite-34b-code-instruct",
    "phindcodellama": "Phind/Phind-CodeLlama-34B-v2",
}

OLLAMA_SYSTEM_PROMPT_SUPPORT = {
    "granitecode3b": True,
    "stablecode": True,
    "deepseekcoderv2": True,
    "yicoder2b": True,
    "granitecode8b": True,
    "codellama7b": True,
    "codegemma7b": True,
    "deepseekcoder7b": False,
    "codegeex4": True,
    "magicoder7b": False,
    "codeqwen": True,
    "dolphincoder7b": True,
    "yicoder9b": True,
}

HUGGINGFACE_SYSTEM_PROMPT_SUPPORT = {
    "granitecode3b": True,
    "stablecode": True,
    "deepseekcoderv2": True,
    "granitecode8b": True,
    "codellama7b": True,
    "yicoder9b": True,
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

REFERENCE_CODE["JAVA"][
    "logic_ops"
] = """
public static void logic(boolean a, boolean b){
  System.out.println("a AND b: " + (a && b));
  System.out.println("a OR b: " + (a || b));
  System.out.println("NOT a: " + (!a));
}
"""

REFERENCE_CODE["JS"][
    "logic_ops"
] = """
function logic(a,b) {
  print("a AND b: " + (a && b));
  print("a OR b: " + (a || b));
  print("NOT a: " + (!a));
}
"""

REFERENCE_CODE["PY"][
    "logic_ops"
] = """
def logic(a, b):
    print('a and b:', a and b)
    print('a or b:', a or b)
    print('not a:', not a)
"""

REFERENCE_CODE["RS"][
    "logic_ops"
] = """
fn boolean_ops(a: bool, b: bool) {
    println!("{} and {} -> {}", a, b, a && b);
    println!("{} or {} -> {}", a, b, a || b);
    println!("{} xor {} -> {}", a, b, a ^ b);
    println!("not {} -> {}\n", a, !a);
}

fn main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false)
}
"""

REFERENCE_CODE["C"][
    "str_append"
] = """
#include<stdio.h>
#include<string.h>

int main()
{
    char str[24]="Good Morning";
    char *cstr=" to all";
    char *cstr2=" !!!";
    int x=0;
    //failure when space allocated to str is insufficient.

    if(sizeof(str)>strlen(str)+strlen(cstr)+strlen(cstr2))
            {
                /* 1st method*/
                strcat(str,cstr);

                /*2nd method*/
                x=strlen(str);
                sprintf(&str[x],"%s",cstr2);

                printf("%s\n",str);

            }
    return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_append"
] = """
#include <iostream>
#include <string>

int main( ) {
   std::string greeting( "Hello" ) ;
   greeting.append( " , world!" ) ;
   std::cout << greeting << std::endl ;
   return 0 ;
}
"""

REFERENCE_CODE["GO"][
    "str_append"
] = """
package main

import (
  "fmt"
  "strings"
)

func main() {
  var s strings.Builder
  s.WriteString("foo")
  s.WriteString("bar")
  fmt.Print(s.String())
}
"""

REFERENCE_CODE["JAVA"][
    "str_append"
] = """
public class strAppend {
    public static void main(String[] args) {
        String string = "abc";
        System.out.println(string);
        string += "def";
        System.out.println(string);
    }
}
"""

REFERENCE_CODE["JS"][
    "str_append"
] = """
var s1 = "Hello";
s1 += ", World!";
print(s1);
"""

REFERENCE_CODE["PY"][
    "str_append"
] = """
#!/usr/bin/env python
# -*- coding: utf-8 -*- #

str = "12345678";
str += "9!";
print(str)
"""

REFERENCE_CODE["RS"][
    "str_append"
] = """
use std::ops::Add;

fn main(){
    let hello = String::from("Hello world");
    println!("{}", hello.add("!!!!"));
}


fn main(){
    let mut hello = String::from("Hello world");
    hello.push_str("!!!!");
    println!("{}", hello);
}
"""

REFERENCE_CODE["C"][
    "str_cmp"
] = """
/*
  compilation and test in bash
  $ a=./c && make $a && $a ball bell ball ball YUP YEP     ball BELL ball BALL YUP yep
  cc -Wall -c -o c.o c.c
  	eq , ne , gt , lt , ge , le
  ball 0 1 0 1 0 1 bell
  ball 0 1 0 1 0 1 bell ignoring case
  ball 1 0 0 0 1 1 ball
  ball 1 0 0 0 1 1 ball ignoring case
  YUP 0 1 1 0 1 0 YEP
  YUP 0 1 1 0 1 0 YEP ignoring case
  ball 0 1 1 0 1 0 BELL
  ball 0 1 0 1 0 1 BELL ignoring case
  ball 0 1 1 0 1 0 BALL
  ball 1 0 0 0 1 1 BALL ignoring case
  YUP 0 1 0 1 0 1 yep
  YUP 0 1 1 0 1 0 yep ignoring case
*/

#include<string.h>

#define STREQ(A,B) (0==strcmp((A),(B)))
#define STRNE(A,B) (!STREQ(A,B))
#define STRLT(A,B) (strcmp((A),(B))<0)
#define STRLE(A,B) (strcmp((A),(B))<=0)
#define STRGT(A,B) STRLT(B,A)
#define STRGE(A,B) STRLE(B,A)

#define STRCEQ(A,B) (0==strcasecmp((A),(B)))
#define STRCNE(A,B) (!STRCEQ(A,B))
#define STRCLT(A,B) (strcasecmp((A),(B))<0)
#define STRCLE(A,B) (strcasecmp((A),(B))<=0)
#define STRCGT(A,B) STRCLT(B,A)
#define STRCGE(A,B) STRCLE(B,A)

#include<stdio.h>

void compare(const char*a, const char*b) {
  printf("%s%2d%2d%2d%2d%2d%2d %s\n",
	 a,
	 STREQ(a,b), STRNE(a,b), STRGT(a,b), STRLT(a,b), STRGE(a,b), STRLE(a,b),
	 b
	 );
}
void comparecase(const char*a, const char*b) {
  printf("%s%2d%2d%2d%2d%2d%2d %s ignoring case\n",
	 a,
	 STRCEQ(a,b), STRCNE(a,b), STRCGT(a,b), STRCLT(a,b), STRCGE(a,b), STRCLE(a,b),
	 b
	 );
}
int main(int ac, char*av[]) {
  char*a,*b;
  puts("\teq , ne , gt , lt , ge , le");
  while (0 < (ac -= 2)) {
    a = *++av, b = *++av;
    compare(a, b);
    comparecase(a, b);
  }
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_cmp"
] = """
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

template <typename T>
void demo_compare(const T &a, const T &b, const std::string &semantically) {
    std::cout << a << " and " << b << " are " << ((a == b) ? "" : "not ")
              << "exactly " << semantically << " equal." << std::endl;

    std::cout << a << " and " << b << " are " << ((a != b) ? "" : "not ")
              << semantically << "inequal." << std::endl;

    std::cout << a << " is " << ((a < b) ? "" : "not ") << semantically
              << " ordered before " << b << '.' << std::endl;

    std::cout << a << " is " << ((a > b) ? "" : "not ") << semantically
              << " ordered after " << b << '.' << std::endl;
}

int main(int argc, char *argv[]) {
    // Case-sensitive comparisons.
    std::string a((argc > 1) ? argv[1] : "1.2.Foo");
    std::string b((argc > 2) ? argv[2] : "1.3.Bar");
    demo_compare<std::string>(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);
    demo_compare<std::string>(a, b, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA, numB;
    std::istringstream(a) >> numA;
    std::istringstream(b) >> numB;
    demo_compare<double>(numA, numB, "numerically");
    return (a == b);
}
"""

REFERENCE_CODE["GO"][
    "str_cmp"
] = """
package main

import (
    "fmt"
    "strings"
)

func main() {
    // Go language string comparison operators:
    c := "cat"
    d := "dog"
    if c == d {
        fmt.Println(c, "is bytewise identical to", d)
    }
    if c != d {
        fmt.Println(c, "is bytewise different from", d)
    }
    if c > d {
        fmt.Println(c, "is lexically bytewise greater than", d)
    }
    if c < d {
        fmt.Println(c, "is lexically bytewise less than", d)
    }
    if c >= d {
        fmt.Println(c, "is lexically bytewise greater than or equal to", d)
    }
    if c <= d {
        fmt.Println(c, "is lexically bytewise less than or equal to", d)
    }
    // Go is strongly typed and will not directly compare a value of string
    // type to a value of numeric type.

    // A case insensitive compare can be done with a function in the strings
    // package in the Go standard library:
    eqf := `when interpreted as UTF-8 and compared under Unicode
simple case folding rules.`
    if strings.EqualFold(c, d) {
        fmt.Println(c, "equal to", d, eqf)
    } else {
        fmt.Println(c, "not equal to", d, eqf)
    }

    // Seeing that the built in operators work bytewise and the library
    // case folding functions interpret UTF-8, you might then ask about
    // other equality and inequality tests that interpret UTF-8.
    // Functions for this are not in the Go standard library but are in
    // the Go "sub repository" at golang.org/x/text.  There is support
    // for Unicode normalization, collation tables, and locale sensitive
    // comparisons.
}
"""

REFERENCE_CODE["JAVA"][
    "str_cmp"
] = """
public class Compare
{
    public static void main (String[] args)
    {
        compare("Hello", "Hello");
        compare("5", "5.0");
        compare("java", "Java");
        compare("ĴÃVÁ", "ĴÃVÁ");
        compare("ĴÃVÁ", "ĵãvá");
    }
    public static void compare (String A, String B)
    {
        if (A.equals(B))
            System.out.printf("'%s' and '%s' are lexically equal.", A, B);
        else
            System.out.printf("'%s' and '%s' are not lexically equal.", A, B);
        System.out.println();

        if (A.equalsIgnoreCase(B))
            System.out.printf("'%s' and '%s' are case-insensitive lexically equal.", A, B);
        else
            System.out.printf("'%s' and '%s' are not case-insensitive lexically equal.", A, B);
        System.out.println();
    
        if (A.compareTo(B) < 0)
            System.out.printf("'%s' is lexically before '%s'.\n", A, B);
        else if (A.compareTo(B) > 0)
            System.out.printf("'%s' is lexically after '%s'.\n", A, B);

        if (A.compareTo(B) >= 0)
            System.out.printf("'%s' is not lexically before '%s'.\n", A, B);
        if (A.compareTo(B) <= 0)
            System.out.printf("'%s' is not lexically after '%s'.\n", A, B);

        System.out.printf("The lexical relationship is: %d\n", A.compareTo(B));
        System.out.printf("The case-insensitive lexical relationship is: %d\n\n", A.compareToIgnoreCase(B));
    }
}
"""

REFERENCE_CODE["JS"][
    "str_cmp"
] = """
/*
== equal value
=== equal value and equal type
!= not equal value
!== not equal value or not equal type
< lexically ordered before
> lexically ordered after
*/

console.log(
"abcd" == "abcd", // true
"abcd" === "abcd", // true
123 == "123", // true
123 === "123", // false
"ABCD" == "abcd", // false
"ABCD" != "abcd", // true
123 != "123", // false
123 !== "123", // true
"abcd" < "dcba", // true
"abcd" > "dcba", // false
"ABCD".toLowerCase() == "abcd".toLowerCase(), // true (case insensitive)
)
"""

REFERENCE_CODE["PY"][
    "str_cmp"
] = """
def compare(a, b):
    print("\n%r is of type %r and %r is of type %r"
          % (a, type(a), b, type(b)))
    if a <  b:      print('%r is strictly less than  %r' % (a, b))
    if a <= b:      print('%r is less than or equal to %r' % (a, b))
    if a >  b:      print('%r is strictly greater than  %r' % (a, b))
    if a >= b:      print('%r is greater than or equal to %r' % (a, b))
    if a == b:      print('%r is equal to %r' % (a, b))
    if a != b:      print('%r is not equal to %r' % (a, b))
    if a is b:      print('%r has object identity with %r' % (a, b))
    if a is not b:  print('%r has negated object identity with %r' % (a, b))

compare('YUP', 'YUP')
compare('BALL', 'BELL')
compare('24', '123')
compare(24, 123)
compare(5.0, 5)
"""

REFERENCE_CODE["RS"][
    "str_cmp"
] = """
use std::ascii::AsciiExt; // for case insensitives only

fn main() {
    // only same types can be compared
    // String and String or &str and &str
    // exception: strict equality and inequality also work on &str and String
    let a: &str = "abc";
    let b: String = "Bac".to_owned();

    // Strings are coerced to &str when borrowed and needed
    if a == b { println!("The strings are equal") }
    if a != b { println!("The strings are not equal") }
    if a  > &b { println!("The first string is lexically after the second") }
    if a  < &b { println!("The first string is lexically before the second") }
    if a >= &b { println!("The first string is not lexically before the second") }
    if a <= &b { println!("The first string is not lexically after the second") }

    // case-insensitives:

    // equality
    // this avoids new allocations
    if a.eq_ignore_ascii_case(&b) { println!("Both strings are equal when ignoring case") }

    // everything else, create owned Strings, then compare as above
    let a2 = a.to_ascii_uppercase();
    let b2 = b.to_ascii_uppercase();

    // repeat checks
}
"""

REFERENCE_CODE["C"][
    "str_concat"
] = """
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sconcat(const char *s1, const char *s2)
{
  char *s0 = malloc(strlen(s1)+strlen(s2)+1);
  strcpy(s0, s1);
  strcat(s0, s2);
  return s0;
}

int main()
{
   const char *s = "hello";
   char *s2;
   
   printf("%s literal\n", s);
   /* or */
   printf("%s%s\n", s, " literal");
   
   s2 = sconcat(s, " literal");
   puts(s2);
   free(s2);
}
"""

REFERENCE_CODE["CPP"][
    "str_concat"
] = """
#include <string>
#include <iostream>

int main() {
   std::string s = "hello";
   std::cout << s << " literal" << std::endl;
   std::string s2 = s + " literal";
   std::cout << s2 << std::endl;
   return 0;
}
"""

REFERENCE_CODE["GO"][
    "str_concat"
] = """
package main

import "fmt"

func main() {
    // text assigned to a string variable
    s := "hello"

    // output string variable
    fmt.Println(s)

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    fmt.Println(s + " literal")

    // concatenate variable and literal, assign result to another string variable
    s2 := s + " literal"

    // output second string variable
    fmt.Println(s2)
}
"""

REFERENCE_CODE["JAVA"][
    "str_concat"
] = """
public class Str{
   public static void main(String[] args){
      String s = "hello";
      System.out.println(s + " literal");
      String s2 = s + " literal";
      System.out.println(s2);
   }
}
"""

REFERENCE_CODE["JS"][
    "str_concat"
] = """
var s = "hello"
print(s + " there!")
"""

REFERENCE_CODE["PY"][
    "str_concat"
] = """
s1 = "hello"
print s1 + " world"

s2 = s1 + " world"
print s2

s1 = "hello"
print ", ".join([s1, "world", "mom"])

s2 = ", ".join([s1, "world", "mom"])
print s2
"""

REFERENCE_CODE["RS"][
    "str_concat"
] = """
fn main() {
    let s = "hello".to_owned();
    println!("{}", s);
    
    let s1 = s + " world";
    println!("{}", s1);
}
"""

REFERENCE_CODE["C"][
    "str_interp"
] = """
#include <stdio.h>

int main() {
  const char *extra = "little";
  printf("Mary had a %s lamb.\n", extra);
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_interp"
] = """
#include <string>
#include <iostream>

int main( ) {
   std::string original( "Mary had a X lamb." ) , toBeReplaced( "X" ) ,
      replacement ( "little" ) ;
   std::string newString = original.replace( original.find( "X" ) ,
	 toBeReplaced.length( ) , replacement ) ;
   std::cout << "String after replacement: " << newString << " \n" ;
   return 0 ;
}
"""

REFERENCE_CODE["GO"][
    "str_interp"
] = """
package main

import (
    "fmt"
)

func main() {
    str := "Mary had a %s lamb"
    txt := "little"
    out := fmt.Sprintf(str, txt)
    fmt.Println(out)
}
"""

REFERENCE_CODE["JAVA"][
    "str_interp"
] = """
String adjective = "little";
String lyric = String.format("Mary had a %s lamb", adjective);
"""

REFERENCE_CODE["JS"][
    "str_interp"
] = """
var original = "Mary had a X lamb";
var little = "little";
var replaced = original.replace("X", little); //does not change the original string
"""

REFERENCE_CODE["PY"][
    "str_interp"
] = """
extra = 'little'
new_str = f'Mary had a {extra} lamb.'
print(new_str)
"""

REFERENCE_CODE["RS"][
    "str_interp"
] = """
fn main() {
    println!("Mary had a {} lamb", "little");
    // You can specify order
    println!("{1} had a {0} lamb", "little", "Mary");
    // Or named arguments if you prefer
    println!("{name} had a {adj} lamb", adj="little", name="Mary");
}
"""

REFERENCE_CODE["C"][
    "str_match"
] = """
#include <string.h>
#include <stdio.h>

int startsWith(const char* container, const char* target)
{
  size_t clen = strlen(container), tlen = strlen(target);
  if (clen < tlen)
    return 0;
  return strncmp(container, target, tlen) == 0;
}

int endsWith(const char* container, const char* target)
{
  size_t clen = strlen(container), tlen = strlen(target);
  if (clen < tlen)
    return 0;
  return strncmp(container + clen - tlen, target, tlen) == 0;
}

int doesContain(const char* container, const char* target)
{
  return strstr(container, target) != 0;
}

int main(void)
{
  printf("Starts with Test ( Hello,Hell ) : %d\n", startsWith("Hello","Hell"));
  printf("Ends with Test ( Code,ode ) : %d\n", endsWith("Code","ode"));
  printf("Contains Test ( Google,msn ) : %d\n", doesContain("Google","msn"));

  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_match"
] = """
#include <string>
using namespace std;

string s1="abcd";
string s2="abab";
string s3="ab";
//Beginning
s1.compare(0,s3.size(),s3)==0;
//End
s1.compare(s1.size()-s3.size(),s3.size(),s3)==0;
//Anywhere
s1.find(s2)//returns string::npos
int loc=s2.find(s3)//returns 0
loc=s2.find(s3,loc+1)//returns 2
"""

REFERENCE_CODE["GO"][
    "str_match"
] = """
package main

import (
    "fmt"
    "strings"
)

func match(first, second string) {
    fmt.Printf("1. %s starts with %s: %t\n",
        first, second, strings.HasPrefix(first, second))
    i := strings.Index(first, second)
    fmt.Printf("2. %s contains %s: %t,\n", first, second, i >= 0)
    if i >= 0 {
        fmt.Printf("2.1. at location %d,\n", i)
        for start := i+1;; {
            if i = strings.Index(first[start:], second); i < 0 {
                break
            }
            fmt.Printf("2.2. at location %d,\n", start+i)
            start += i+1
        }
        fmt.Println("2.2. and that's all")
    }
    fmt.Printf("3. %s ends with %s: %t\n",
        first, second, strings.HasSuffix(first, second))
}

func main() {
    match("abracadabra", "abr")
}
"""

REFERENCE_CODE["JAVA"][
    "str_match"
] = """
"abcd".startsWith("ab") //returns true
"abcd".endsWith("zn") //returns false
"abab".contains("bb") //returns false
"abab".contains("ab") //returns true
int loc = "abab".indexOf("bb") //returns -1
loc = "abab".indexOf("ab") //returns 0
loc = "abab".indexOf("ab",loc+1) //returns 2
"""

REFERENCE_CODE["JS"][
    "str_match"
] = """
var stringA = "tacoloco"
  , stringB = "co"
  , q1, q2, q2multi, m
  , q2matches = []

// stringA starts with stringB
q1 = stringA.substring(0, stringB.length) == stringB

// stringA contains stringB
q2  = stringA.indexOf(stringB)

// multiple matches
q2multi = new RegExp(stringB,'g')

while(m = q2multi.exec(stringA)){
	q2matches.push(m.index)
}

// stringA ends with stringB
q3 = stringA.substr(-stringB.length) == stringB

console.log("1: Does '"+stringA+"' start with '"+stringB+"'? " + ( q1 ? "Yes." : "No."))
console.log("2: Is '"+stringB+"' contained in '"+stringA+"'? " + (~q2 ? "Yes, at index "+q2+"." : "No."))
if (~q2 && q2matches.length > 1){
	console.log("   In fact, it happens "+q2matches.length+" times within '"+stringA+"', at index"+(q2matches.length > 1 ? "es" : "")+" "+q2matches.join(', ')+".")
}
console.log("3: Does '"+stringA+"' end with '"+stringB+"'? "   + ( q3 ? "Yes." : "No."))
"""

REFERENCE_CODE["PY"][
    "str_match"
] = """
"abcd".startswith("ab") #returns True
"abcd".endswith("zn") #returns False
"bb" in "abab" #returns False
"ab" in "abab" #returns True
loc = "abab".find("bb") #returns -1
loc = "abab".find("ab") #returns 0
loc = "abab".find("ab",loc+1) #returns 2
"""

REFERENCE_CODE["RS"][
    "str_match"
] = """
fn print_match(possible_match: Option<usize>) {
    match possible_match {
        Some(match_pos) => println!("Found match at pos {}", match_pos),
        None => println!("Did not find any matches")
    }
}

fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    
    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));
    // Determining if the first string contains the second string at any location
    assert!(s1.contains(s3));
    // Print the location of the match 
    print_match(s1.find(s3)); // Found match at pos 0
    print_match(s1.find(s2)); // Did not find any matches
    // Determining if the first string ends with the second string
    assert!(s2.ends_with(s3));
}
"""

REFERENCE_CODE["C"][
    "str_prepend"
] = """
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100]="my String";
    char *cstr="Changed ";
    char *dup;
    sprintf(str,"%s%s",cstr,(dup=strdup(str)));
    free(dup);
    printf("%s\n",str);
    return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_prepend"
] = """
include <vector>
#include <algorithm>
#include <string>
#include <iostream>

int main( ) {
   std::vector<std::string> myStrings { "prepended to" , "my string" } ;
   std::string prepended = std::accumulate( myStrings.begin( ) , 
	 myStrings.end( ) , std::string( "" ) , []( std::string a , 
	    std::string b ) { return a + b ; } ) ;
   std::cout << prepended << std::endl ;
   return 0 ;
}
"""

REFERENCE_CODE["GO"][
    "str_prepend"
] = """
s := "world!"
s = "Hello, " + s
"""

REFERENCE_CODE["JAVA"][
    "str_prepend"
] = """
String string = "def";
string = "abc" + string;
"""

REFERENCE_CODE["JS"][
    "str_prepend"
] = """
// No built-in prepend
var s=", World"
s = "Hello" + s
print(s);
"""

REFERENCE_CODE["PY"][
    "str_prepend"
] = """
#!/usr/bin/env python
# -*- coding: utf-8 -*-

s = "12345678"
s = "0" + s  # by concatenation
print(s)
"""

REFERENCE_CODE["RS"][
    "str_prepend"
] = """
let mut s = "World".to_string();
s.insert_str(0, "Hello ");
println!("{}", s);
"""

REFERENCE_CODE["C"][
    "str_substring"
] = """
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(const char *s, size_t n, ptrdiff_t m)
{
  char *result;
  /* check for null s */
  if (NULL == s)
    return NULL;
  /* negative m to mean 'up to the mth char from right' */
  if (m < 0) 
    m = strlen(s) + m - n + 1;

  /* n < 0 or m < 0 is invalid */
  if (n < 0 || m < 0)
    return NULL;

  /* make sure string does not end before n 
   * and advance the "s" pointer to beginning of substring */
  for ( ; n > 0; s++, n--)
    if (*s == '\0')
      /* string ends before n: invalid */
      return NULL;

  result = malloc(m+1);
  if (NULL == result)
    /* memory allocation failed */
    return NULL;
  result[0]=0;
  strncat(result, s, m); /* strncat() will automatically add null terminator
                          * if string ends early or after reading m characters */
  return result;
}

char *str_wholeless1(const char *s)
{
  return substring(s, 0, strlen(s) - 1);
}

char *str_fromch(const char *s, int ch, ptrdiff_t m)
{
  return substring(s, strchr(s, ch) - s, m);
}

char *str_fromstr(const char *s, char *in, ptrdiff_t m)
{
  return substring(s, strstr(s, in) - s , m);
}


#define TEST(A) do {		\
    char *r = (A);		\
    if (NULL == r)		\
      puts("--error--");	\
    else {			\
      puts(r);			\
      free(r);			\
    }				\
  } while(0)

int main()
{
  const char *s = "hello world shortest program";

  TEST( substring(s, 12, 5) );		// get "short"
  TEST( substring(s, 6, -1) );		// get "world shortest program"
  TEST( str_wholeless1(s) );		// "... progra"
  TEST( str_fromch(s, 'w', 5) );	// "world"
  TEST( str_fromstr(s, "ro", 3) );	// "rog"

  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "str_substring"
] = """
#include <iostream>
#include <string>

int main()
{
  std::string s = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  std::string const sub = "456";

  std::cout << s.substr(n, m)<< "\n";
  std::cout << s.substr(n) << "\n";
  std::cout << s.substr(0, s.size()-1) << "\n";
  std::cout << s.substr(s.find(c), m) << "\n";
  std::cout << s.substr(s.find(sub), m) << "\n";
}
"""

REFERENCE_CODE["GO"][
    "str_substring"
] = """
package main

import (
    "fmt"
    "strings"
)

func main() {
    s := "ABCDEFGH"
    n, m := 2, 3
    // for reference
    fmt.Println("Index: ", "01234567")
    fmt.Println("String:", s)
    // starting from n characters in and of m length
    fmt.Printf("Start %d, length %d:    %s\n", n, m, s[n : n+m])
    // starting from n characters in, up to the end of the string
    fmt.Printf("Start %d, to end:      %s\n", n, s[n:])
    // whole string minus last character
    fmt.Printf("All but last:         %s\n", s[:len(s)-1])
    // starting from a known character within the string and of m length
    dx := strings.IndexByte(s, 'D')
    fmt.Printf("Start 'D', length %d:  %s\n", m, s[dx : dx+m])
    // starting from a known substring within the string and of m length
    sx := strings.Index(s, "DE")
    fmt.Printf(`Start "DE", length %d: %s`+"\n", m, s[sx : sx+m])
}
"""

REFERENCE_CODE["JAVA"][
    "str_substring"
] = """
public static String Substring(String str, int n, int m){
    return str.substring(n, n+m);
}
public static String Substring(String str, int n){
    return str.substring(n);
}
public static String Substring(String str){
    return str.substring(0, str.length()-1);
}
public static String Substring(String str, char c, int m){
    return str.substring(str.indexOf(c), str.indexOf(c)+m+1);
}
public static String Substring(String str, String sub, int m){
    return str.substring(str.indexOf(sub), str.indexOf(sub)+m+1);
}
"""

REFERENCE_CODE["JS"][
    "str_substring"
] = """
var str = "abcdefgh";

var n = 2;
var m = 3;

//  *  starting from n characters in and of m length;
str.substr(n, m);  // => "cde"

//  * starting from n characters in, up to the end of the string;
str.substr(n);  // => "cdefgh"
str.substring(n);  // => "cdefgh"

//  * whole string minus last character;
str.substring(0, str.length - 1);  // => "abcdefg"

//  * starting from a known character within the string and of m length;
str.substr(str.indexOf('b'), m);  // => "bcd"

//  * starting from a known substring within the string and of m length. 
str.substr(str.indexOf('bc'), m);  // => "bcd"
"""

REFERENCE_CODE["PY"][
    "str_substring"
] = """
s = 'abcdefgh'
n, m, char, chars = 2, 3, 'd', 'cd'
# starting from n=2 characters in and m=3 in length;
print(s[n-1:n+m-1])
# starting from n characters in, up to the end of the string;
print(s[n-1:])
# whole string minus last character;
print(s[:-1])
# starting from a known character char="d" within the string and of m length;
indx = s.index(char)
print(s[indx:indx+m])
# starting from a known substring chars="cd" within the string and of m length. 
indx = s.index(chars)
print(s[indx:indx+m])
"""

REFERENCE_CODE["RS"][
    "str_substring"
] = """
let s = "abc文字化けdef";
let n = 2;
let m = 3;

    // Print 3 characters starting at index 2 (c文字)
println!("{}", s.chars().skip(n).take(m).collect::<String>());

    // Print all characters starting at index 2 (c文字化けdef)
println!("{}", s.chars().skip(n).collect::<String>());

    // Print all characters except the last (abc文字化けde)
println!("{}", s.chars().rev().skip(1).collect::<String>());

    // Print 3 characters starting with 'b' (bc文)
let cpos = s.find('b').unwrap();
println!("{}", s[cpos..].chars().take(m).collect::<String>());

    // Print 3 characters starting with "けd" (けde)
let spos = s.find("けd").unwrap();
println!("{}", s[spos..].chars().take(m).collect::<String>());
"""

REFERENCE_CODE["C"][
    "file_exists"
] = """
#include <sys/types.h> 
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

/* Check for regular file. */
int check_reg(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
int check_dir(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
	printf("input.txt is a regular file? %s\n",
	    check_reg("input.txt") ? "yes" : "no");
	printf("docs is a directory? %s\n",
	    check_dir("docs") ? "yes" : "no");
	printf("/input.txt is a regular file? %s\n",
	    check_reg("/input.txt") ? "yes" : "no");
	printf("/docs is a directory? %s\n",
	    check_dir("/docs") ? "yes" : "no");
	return 0;
}
"""

REFERENCE_CODE["CPP"][
    "file_exists"
] = """
#include <iostream>
#include <filesystem>

void file_exists(const std::filesystem::path& path) {
    std::cout << path;
    if (  std::filesystem::exists(path) ) {
    	if ( std::filesystem::is_directory(path) ) {
    		std::cout << " is a directory" << std::endl;
    	} else {
    		std::cout << " exists with a file size of " << std::filesystem::file_size(path) << " bytes." << std::endl;
    	}
    } else {
        std::cout << " does not exist" << std::endl;
    }
}

int main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("docs/input.txt");
	file_exists("docs/zero_length.txt");
}
"""

REFERENCE_CODE["GO"][
    "file_exists"
] = """
package main

import (
    "fmt"
    "os"
)

func printStat(p string) {
    switch i, err := os.Stat(p); {
    case err != nil:
        fmt.Println(err)
    case i.IsDir():
        fmt.Println(p, "is a directory")
    default:
        fmt.Println(p, "is a file")
    }
}

func main() {
    printStat("input.txt")
    printStat("/input.txt")
    printStat("docs")
    printStat("/docs")
}
"""

REFERENCE_CODE["JAVA"][
    "file_exists"
] = """
new File("docs/input.txt").exists();
new File("/docs/input.txt").exists();
"""

REFERENCE_CODE["JS"][
    "file_exists"
] = """
var fso = new ActiveXObject("Scripting.FileSystemObject");

fso.FileExists('input.txt');
fso.FileExists('c:/input.txt');
fso.FolderExists('docs');
fso.FolderExists('c:/docs');
"""

REFERENCE_CODE["PY"][
    "file_exists"
] = """
import os

os.path.isfile("input.txt")
os.path.isfile("/input.txt")
os.path.isdir("docs")
os.path.isdir("/docs")
"""

REFERENCE_CODE["RS"][
    "file_exists"
] = """
use std::fs;

fn main() {
    for file in ["input.txt", "docs", "/input.txt", "/docs"].iter() {
        match fs::metadata(file) {
            Ok(attr) => {
                if attr.is_dir() {
                    println!("{} is a directory", file);
                }else {
                    println!("{} is a file", file);
                }
            },
            Err(_) => {
                println!("{} does not exist", file);
            }
        };
    }
}
"""

REFERENCE_CODE["C"][
    "file_create"
] = """
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() { /* permissions are before umask */
  int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, 0640); /* rights 0640 for rw-r----- */
  /* or equivalently:
     int fd = creat("output.txt", 0640); */ /* rights 0640 for rw-r----- */
  close(fd);

  mkdir("docs", 0750); /* rights 0750 for rwxr-x--- */

  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "file_create"
] = """
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main() {
    std::fstream f("output.txt", std::ios::out);
    f.close();
    f.open("/output.txt", std::ios::out);
    f.close();

    fs::create_directory("docs");
    fs::create_directory("/docs");
}
"""

REFERENCE_CODE["GO"][
    "file_create"
] = """
package main

import (
    "fmt"
    "os"
)

func createFile(fn string) {
    f, err := os.Create(fn)
    if err != nil {
        fmt.Println(err)
        return
    }
    fmt.Println("file", fn, "created!")
    f.Close()
}

func createDir(dn string) {
    err := os.Mkdir(dn, 0666)
    if err != nil {
        fmt.Println(err)
        return
    }
    fmt.Println("directory", dn, "created!")
}

func main() {
    createFile("input.txt")
    createFile("/input.txt")
    createDir("docs")
    createDir("/docs")
}
"""

REFERENCE_CODE["JAVA"][
    "file_create"
] = """
import java.io.File;
import java.io.IOException;

public class CreateFileTest {
	public static void main(String args[]) {
		try {
			new File("output.txt").createNewFile();
			new File(File.separator + "output.txt").createNewFile();
			new File("docs").mkdir();
			new File(File.separator + "docs").mkdir();
		} catch (IOException e) {
			System.err.println(e.getMessage());
		}
	}
}
"""

REFERENCE_CODE["JS"][
    "file_create"
] = """
const fs = require('fs');

function fct(err) {
  if (err) console.log(err);
}

fs.writeFile("output.txt", "", fct);
fs.writeFile("/output.txt", "", fct);

fs.mkdir("docs", fct);
fs.mkdir("/docs", fct);
"""

REFERENCE_CODE["PY"][
    "file_create"
] = """
from __future__ import with_statement
import os
def create(directory):
    with open(os.path.join(directory, "output.txt"), "w"):
        pass
    os.mkdir(os.path.join(directory, "docs"))
   
create(".") # current directory
create("/") # root directory
"""

REFERENCE_CODE["RS"][
    "file_create"
] = """
use std::io::{self, Write};
use std::fs::{DirBuilder, File};
use std::path::Path;
use std::{process,fmt};

const FILE_NAME: &'static str = "output.txt";
const DIR_NAME : &'static str = "docs";

fn main() {
    create(".").and(create("/"))
               .unwrap_or_else(|e| error_handler(e,1));
}


fn create<P>(root: P) -> io::Result<File>
    where P: AsRef<Path>
{
    let f_path = root.as_ref().join(FILE_NAME);
    let d_path = root.as_ref().join(DIR_NAME);
    DirBuilder::new().create(d_path).and(File::create(f_path))
}

fn error_handler<E: fmt::Display>(error: E, code: i32) -> ! {
    let _ = writeln!(&mut io::stderr(), "Error: {}", error);
    process::exit(code)
}
"""

REFERENCE_CODE["C"][
    "file_size"
] = """
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

int main(void)
{
  struct stat foo;
  stat("input.txt", &foo);
  printf("%ld\n", foo.st_size);
  stat("/input.txt", &foo);
  printf("%ld\n", foo.st_size);
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "file_size"
] = """
#include <filesystem>
#include <iostream>

void print_file_size(const char* filename) {
    try {
        auto size = std::filesystem::file_size(filename);
        std::cout << "Size of file " << filename << " is " << size << " bytes.\n";
    } catch (const std::exception& ex) {
        std::cerr << ex.what() << '\n';
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
"""

REFERENCE_CODE["GO"][
    "file_size"
] = """
package main

import "fmt"
import "os"

func printFileSize(f string) {
    if stat, err := os.Stat(f); err != nil {
        fmt.Println(err)
    } else {
        fmt.Println(stat.Size())
    }
}

func main() {
    printFileSize("input.txt")
    printFileSize("/input.txt")
}
"""

REFERENCE_CODE["JAVA"][
    "file_size"
] = """
import java.io.File;

public static void main(String[] args) {
    File fileA = new File("file.txt");
    System.out.printf("%,d B%n", fileA.length());
    File fileB = new File("/file.txt");
    System.out.printf("%,d B%n", fileB.length());
}
"""

REFERENCE_CODE["JS"][
    "file_size"
] = """
var fso = new ActiveXObject("Scripting.FileSystemObject");
fso.GetFile('input.txt').Size;
fso.GetFile('c:/input.txt').Size;
"""

REFERENCE_CODE["PY"][
    "file_size"
] = """
import os

size = os.path.getsize('input.txt')
size = os.path.getsize('/input.txt')
"""

REFERENCE_CODE["RS"][
    "file_size"
] = """
use std::{env, fs, process};
use std::io::{self, Write};
use std::fmt::Display;

fn main() {
    let file_name = env::args().nth(1).unwrap_or_else(|| exit_err("No file name supplied", 1));
    let metadata = fs::metadata(file_name).unwrap_or_else(|e| exit_err(e, 2));

    println!("Size of file.txt is {} bytes", metadata.len());
}

#[inline]
fn exit_err<T: Display>(msg: T, code: i32) -> ! {
    writeln!(&mut io::stderr(), "Error: {}", msg).expect("Could not write to stdout");
    process::exit(code)
}
"""

REFERENCE_CODE["C"][
    "dir_make"
] = """
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main (int argc, char **argv) {
    char *str, *s;
    struct stat statBuf;

    if (argc != 2) {
        fprintf (stderr, "usage: %s <path>\n", basename (argv[0]));
        exit (1);
    }
    s = argv[1];
    while ((str = strtok (s, "/")) != NULL) {
        if (str != s) {
            str[-1] = '/';
        }
        if (stat (argv[1], &statBuf) == -1) {
            mkdir (argv[1], 0);
        } else {
            if (! S_ISDIR (statBuf.st_mode)) {
                fprintf (stderr, "couldn't create directory %s\n", argv[1]);
                exit (1);
            }
        }
        s = NULL;
    }
    return 0;
}
"""

REFERENCE_CODE["CPP"][
    "dir_make"
] = """
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		std::cout << "usage: mkdir <path>\n";
		return -1;
	}

	fs::path pathToCreate(argv[1]);

	if (fs::exists(pathToCreate))
		return 0;

	if (fs::create_directories(pathToCreate))
		return 0;
	else
	{
		std::cout << "couldn't create directory: " << pathToCreate.string() << std::endl;
		return -1;
	}
}
"""

REFERENCE_CODE["GO"][
    "dir_make"
] = """
os.MkdirAll("/tmp/some/path/to/dir", 0770)
"""

REFERENCE_CODE["JAVA"][
    "dir_make"
] = """
import java.io.File;

public interface Test {

    public static void main(String[] args) {
        try {
            File f = new File("C:/parent/test");
            if (f.mkdirs())
                System.out.println("path successfully created");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
"""

REFERENCE_CODE["JS"][
    "dir_make"
] = """
var path = require('path');
var fs = require('fs');

function mkdirp (p, cb) {
    cb = cb || function () {};
    p = path.resolve(p);

    fs.mkdir(p, function (er) {
        if (!er) {
            return cb(null);
        }
        switch (er.code) {
            case 'ENOENT':
                // The directory doesn't exist. Make its parent and try again.
                mkdirp(path.dirname(p), function (er) {
                    if (er) cb(er);
                    else mkdirp(p, cb);
                });
                break;

                // In the case of any other error, something is borked.
            default:
                cb(er);
                break;
        }
    });
}
"""

REFERENCE_CODE["PY"][
    "dir_make"
] = """
def mkdirp(path):
    os.makedirs(path, exist_ok=True)
"""

REFERENCE_CODE["RS"][
    "dir_make"
] = """
use std::fs;

fn main() {
    fs::create_dir_all("./path/to/dir").expect("An Error Occured!")
}
"""

REFERENCE_CODE["C"][
    "file_rename"
] = """
#include <stdio.h>

int main()
{
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");
  rename("/input.txt", "/output.txt");
  rename("/docs", "/mydocs");
  return 0;
}
"""

REFERENCE_CODE["CPP"][
    "file_rename"
] = """
#include <cstdio>

int main()
{
    std::rename("input.txt", "output.txt");
    std::rename("docs", "mydocs");
    std::rename("/input.txt", "/output.txt");
    std::rename("/docs", "/mydocs");
    return 0;
}
"""

REFERENCE_CODE["GO"][
    "file_rename"
] = """
package main
import "os"

func main() {
  os.Rename("input.txt", "output.txt")
  os.Rename("docs", "mydocs")
  os.Rename("/input.txt", "/output.txt")
  os.Rename("/docs", "/mydocs")
}
"""

REFERENCE_CODE["JAVA"][
    "file_rename"
] = """
import java.io.File;
public class FileRenameTest {
   public static boolean renameFile(String oldname, String newname) {
       // File (or directory) with old name
       File file = new File(oldname);
   
       // File (or directory) with new name
       File file2 = new File(newname);
   
       // Rename file (or directory)
       boolean success = file.renameTo(file2);
       return success;
   }
   public static void test(String type, String oldname, String newname) {
       System.out.println("The following " + type + " called " + oldname +
           ( renameFile(oldname, newname) ? " was renamed as " : " could not be renamed into ")
           + newname + "."
       );
   }
   public static void main(String args[]) {
        test("file", "input.txt", "output.txt");
        test("file", File.separator + "input.txt", File.separator + "output.txt");
        test("directory", "docs", "mydocs");
        test("directory", File.separator + "docs" + File.separator, File.separator + "mydocs" + File.separator);
   }
}
"""

REFERENCE_CODE["JS"][
    "file_rename"
] = """
var fso = new ActiveXObject("Scripting.FileSystemObject")
fso.MoveFile("input.txt", "output.txt")
fso.MoveFile("c:/input.txt", "c:/output.txt")
fso.MoveFolder("docs", "mydocs")
fso.MoveFolder("c:/docs", "c:/mydocs")
"""

REFERENCE_CODE["PY"][
    "file_rename"
] = """
import os

os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

os.rename(os.sep + "input.txt", os.sep + "output.txt")
os.rename(os.sep + "docs", os.sep + "mydocs")
"""

REFERENCE_CODE["RS"][
    "file_rename"
] = """
use std::fs;

fn main() {
    let err = "File move error";
    fs::rename("input.txt", "output.txt").ok().expect(err);
    fs::rename("docs", "mydocs").ok().expect(err);
    fs::rename("/input.txt", "/output.txt").ok().expect(err);
    fs::rename("/docs", "/mydocs").ok().expect(err);
}
"""
