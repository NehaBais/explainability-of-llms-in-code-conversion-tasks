// Importing the necessary namespaces
using System;
using System.IO;

public
class FileRenameTest {
public
  static bool RenameFile(string oldname, string newname) {
    // File (or directory) with old name
    var file = new FileInfo(oldname);

    // File (or directory) with new name
    var file2 = new FileInfo(newname);

    // Rename file (or directory)
    return file.MoveTo(file2.FullName);
  }

public
  static void Test(string type, string oldname, string newname) {
    Console.WriteLine($ "The following {type} called {oldname} " + $
                          "{(RenameFile(oldname, newname) ? " was renamed as " 
                      : " could not be renamed into")
  }  " 
                       + $"{newname}.");
}

public static void
Main() {
  Test("file", "input.txt", "output.txt");
  Test("file", Path.Combine(Directory.GetCurrentDirectory(), "input.txt"),
       Path.Combine(Directory.GetCurrentDirectory(), "output.txt"));
  // test("directory",  "docs",  "mydocs");   // Not implemented in C#
  // test("directory", Directory.GetCurrentDirectory()  +
  //      Path.DirectorySeparatorChar  +  "docs"  + Path.DirectorySeparatorChar,
  //      Directory.GetCurrentDirectory()  + Path.DirectorySeparatorChar  +
  //      "mydocs"
  //      + Path.DirectorySeparatorChar);   // Not implemented in C#
}
}