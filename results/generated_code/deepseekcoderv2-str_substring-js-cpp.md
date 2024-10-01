
## The program must be written in C++14 using Visual Studio Code (VSCode) as an integrated development environment (IDE), with VSCode extensions for Microsoft's C/C++ compiler (MSVC). The program should use the most recent version of the MSVC. When the project is opened from a local folder, it must automatically download and install any missing libraries to compile, run, and debug programs.

## The programming language is C++.
The code was written using Visual Studio Code with Microsoft's "C/C++" extension for VSCode and its MSVC compiler. When the project is opened from a local folder, it automatically downloads and installs any missing libraries to compile, run, and debug programs. 

## The program must be capable of accepting command line arguments (e.g., --input or -i followed by an input file path).
The code accepts these arguments: '--n' which is the n-th character, and then '-m' for number characters to display after that first character. For example, './program_name.exe --n=2 -m=3'. This will return 'cde'. The program returns all results in lowercase. If no input file path argument is provided it outputs a usage statement with the command line syntax and available options.

## The program must be capable of accepting piped-in text (e.g., from another program).
The code supports piping standard input into its stdin, just as if it were typed in at the terminal. For example: 'echo "string" | ./program_name'. This will return all results in lowercase. If no command line arguments are provided after '|' it outputs a usage statement with available options and command syntax.

