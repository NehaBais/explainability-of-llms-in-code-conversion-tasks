The error occurs because the `IOException` is not explicitly declared in the `try` block. To fix this, add `IOException` to the `try` block as follows:

```java
try {
  File file = new File(fileName);
  long size = file.length();
  System.out.println("Size of " + fileName + " is " + size + " bytes");
} catch (IOException e) {
  System.err.println("Error: " + e.getMessage());
  System.exit(1);
}
```
