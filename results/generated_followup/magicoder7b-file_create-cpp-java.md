The error message indicates that there is a mismatch between the types of arguments you're passing to the `createDirectory` method, which accepts two parameters - a Path representing the directory location and an array of FileAttribute objects. 

The second argument you've passed, `perms`, is of type `Set<PosixFilePermission>`, but it should be of type `FileAttribute<?>[]`. A varargs parameter in Java (denoted by `...`) can only accept a number of arguments that match the defined types. So you cannot pass a `Set<PosixFilePermission>` to a method expecting an array of `FileAttribute<?>`.

To fix this issue, either convert the `perms` variable into an array of `FileAttribute<?>` by using `.toArray()` method on it or pass `null` instead of `perms`, as null is acceptable for createDirectory method third argument.

you can simply pass `null` as third argument:

```java
Files.createDirectory(Paths.get("/docs"), null);
```
