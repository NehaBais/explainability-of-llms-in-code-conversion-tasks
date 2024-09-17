# Code checker algorithm

```
FUNCTION main():
    initialize_logging()
    completed_files = read_completed_files_from_log()

    FOR EACH file IN accepted_code_folder:
        IF file NOT IN completed_files:
            check_file(file)

FUNCTION check_file(file_path):
    tmp_path = copy_to_temp(file_path)
    extension = get_file_extension(tmp_path)

    TRY:
        SWITCH extension:
            CASE ".c", ".cpp", ".go", ".java", ".rs":
                compile_cmd = get_compile_command(extension, tmp_path)
                syntax_cmd = get_syntax_check_command(extension, tmp_path)
                
                TRY:
                    run(compile_cmd)
                    log("Compilation successful")
                EXCEPT CompilationError:
                    IF run(syntax_cmd) == SUCCESS:
                        log("Syntax check successful")
                    ELSE:
                        log("Compilation and syntax check failed")
                
            CASE ".js":
                IF check_javascript_syntax(tmp_path):
                    log("Syntax check successful")
                ELSE:
                    log("Syntax check failed")
                
            CASE ".py":
                IF check_python_syntax(tmp_path):
                    log("Syntax check successful")
                ELSE:
                    log("Syntax check failed")
                
            DEFAULT:
                log("Unsupported file type")
    
    FINALLY:
        cleanup(tmp_path)

FUNCTION check_javascript_syntax(file_path):
    RETURN run_node_check(file_path) == SUCCESS

FUNCTION check_python_syntax(file_path):
    TRY:
        parse_python_file(file_path)
        RETURN TRUE
    EXCEPT SyntaxError:
        RETURN FALSE

FUNCTION extract_public_class_name(file_path):
    content = read_file(file_path)
    RETURN find_public_class_name_with_regex(content)

FUNCTION rename_java_file(file_path):
    class_name = extract_public_class_name(file_path)
    IF class_name != NULL:
        new_path = rename_file(file_path, class_name + ".java")
        RETURN new_path
    ELSE:
        RETURN file_path

FUNCTION cleanup(tmp_path):
    delete_file(tmp_path)
    delete_file(tmp_path + ".out")
    IF file_is_java(tmp_path):
        delete_file(get_class_file_path(tmp_path))

FUNCTION initialize_logging():
    setup_log_file("compilation_log.txt")

FUNCTION read_completed_files_from_log():
    log_content = read_file("compilation_log.txt")
    RETURN extract_completed_files(log_content)
```

# Code Checker Algorithm Description

## Algorithm: Automated Code Analysis and Verification System

### Initialization
1. Set up logging to record all operations in a file named "compilation_log.txt".
2. Define a list of previously processed files by reading the log file.

### Main Algorithm
1. For each file in the "accepted_code" folder:
    - If the file has been previously processed (based on the log), skip it.
    - Otherwise, proceed with the following steps:

2. File Preprocessing:
    - Copy the file to a temporary location (/tmp).
    - Determine the file extension.

3. Language-Specific Processing:
    
    Based on the file extension, perform the following steps:
    - For compiled languages (C, C++, Go, Java, Rust):
        - Define compilation command.
        - Define syntax check command.
        - Attempt compilation.
        - If compilation fails, attempt syntax check.
        - Log results.

    - For interpreted languages (JavaScript, Python):
        - Perform syntax check using language-specific methods.
        - Log results.

4. Clean-up:
    
    Remove all temporary files created during the process.

### Subroutines

#### extract_public_class_name(file_path)
1. Read the content of the Java file.
2. Use regex to find the public class name.
3. Return the class name if found, else return None.

#### rename_java_file(file_path)
1. Extract the public class name using extract_public_class_name().
2. Rename the file to match the public class name.
3. Return the new file path.

#### check_python_syntax(file_path)
1. Read the Python file content.
2. Attempt to parse the content using ast.parse().
3. Return True if parsing succeeds, False otherwise.

#### check_javascript_syntax(file_path)
1. Use Node.js to check the JavaScript file syntax.
2. Return True if the check passes, False otherwise.

### Error Handling
- Log all errors encountered during file processing.
- Continue processing subsequent files even if an error occurs with one file.

### Output
- Generate a log file ("compilation_log.txt") containing:
    - Timestamps for each operation
    - Success or failure status for compilation, syntax checks, and execution attempts
    - Error messages for failed operations