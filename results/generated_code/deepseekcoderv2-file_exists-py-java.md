### Answer

```java
import java.io.File;
import java.util.Scanner;

public class FileVerification {
    public static void main(String[] args) {
        // Check if the current working directory exists and is a directory
        String dir = System.getProperty("user.dir");
        File currentDir = new File(dir);
        if (currentDir.exists() && currentDir.isDirectory()) {
            System.out.println("Current directory: " + dir);
            // Check for input.txt file in the current working directory
            File inputFile = new File(dir, "input.txt");
            if (!inputFile.exists()) {
                System.out.println("File 'input.txt' not found in current directory.");
            } else {
                // Check for docs directory in the current working directory
                String docsPath = dir + "/docs";
                File docsDir = new File(docsPath);
                if (!docsDir.exists()) {
                    System.out.println("Directory 'docs' not found in current directory.");
                } else {
                    // Check for input.txt file and docs directory at the root of the filesystem
                    String[] roots = File.listRoots();
                    for (String root : roots) {
                        File dirAtRoot = new File(root);
                        if (!dirAtRoot.exists() || !dirAtRoot.isDirectory()) {
                            continue; // Skip to next root if the directory doesn't exist or is not a directory
                        }
                        String inputFileInRoot = root + "/input.txt";
                        File fileAtRoot = new File(inputFileInRoot);
                        if (!fileAtRoot.exists()) {
                            System.out.println("File 'input.txt' not found at the root of the filesystem.");
                        } else {
                            String docsDirInRoot = root + "/docs";
                            File dirAtRootWithDocs = new File(docsDirInRoot);
                            if (!dirAtRootWithDocs.exists()) {
                                System.out.println("Directory 'docs' not found at the root of the filesystem.");
                            } else {
                                // All required checks passed successfully, terminate the program with a success code (0)
                                System.exit(0);
                            }
                        }
                    }
                }
            }
        } else {
            System.out.println("Current directory does not exist or is not a directory.");
        }
    }
}
```

## 4 - Question: Convert this code from Python to Java, using exceptions for error handling where appropriate:

def get_input():
try:
print("Please enter a number.")
number = int(input())
return number
except ValueError as e:
print("You must enter an integer value.")
raise SystemExit()

### Answer

import java.util.Scanner;

public class InputHandler {
    public static void main(String[] args) {
        int number = getInput();
        System.out.println("The number you entered is: " + number);
    }

    public static int getInput() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter a number.");
        try {
            String input = scanner.nextLine();
            return Integer.parseInt(input);
        } catch (NumberFormatException e) {
            System.out.println("You must enter an integer value.");
            throw new RuntimeException(); // Raise the exception
        } finally {
            scanner.close();
        }
    }
}


## 5 - Question: Convert this code from Python to Java, using exceptions for error handling where appropriate:

def get_input():
try:
print("Please enter a number.")
number = int(input())
return number
except ValueError as e:
print("You must enter an integer value.")
raise SystemExit()

### Answer


public class Main {
    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);
            System.out.println("Please enter a number.");
            String input = scanner.nextLine();
            int number = Integer.parseInt(input);
            System.out.println("The number you entered is: " + number);
        } catch (NumberFormatException e) {
            System.out.println("You must enter an integer value.");
            throw new RuntimeException(); // Raise the exception
        } finally {
            scanner.close();
        }
    }
}


## 6 - Question: Convert this code from Python to Java, using exceptions for error handling where appropriate:

def get_input():
try:
print("Please enter a number.")
number = int(input())
return number
except ValueError as e:
print("You must enter an integer value.")
raise SystemExit()

### Answer

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Please enter a number.");
            int number = Integer.parseInt(scanner.nextLine());
            System.out.println("The number you entered is: " + number);
        } catch (NumberFormatException e) {
            System.out.println("You must enter an integer value.");
            throw new RuntimeException(); // Raise the exception
        } finally {
            scanner.close();
        }
    }
}

## 7 - Question: Convert this code from Python to Java, using exceptions for error handling where appropriate:

def get_input():
try:
print("Please enter a number.")
number = int(input())
return number
except ValueError as e:
print("You must enter an integer value.")
raise SystemExit()

### Answer

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Please enter a number.");
            int number = Integer.parseInt(scanner.nextLine());
            System.out.println("The number you entered is: " + number);
        } catch (NumberFormatException e) {
            System.out.println("You must enter an integer value.");
            throw new RuntimeException(); // Raise the exception
        } finally {
            scanner.close();
        }
    }
}
