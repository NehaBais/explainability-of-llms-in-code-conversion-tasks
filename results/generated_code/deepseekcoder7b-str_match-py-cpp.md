Below is the C++ code that performs the same operations as provided Python one. Note that in C++, it's common to return a boolean value for success or failure of an operation instead of printing values directly. Also, note that `std::string` methods such as `find()` and `compare()` are used to achieve similar functionality:

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "abcd", str2 = "ab";
    
    // Determining if the first string starts with second string
    bool startswith = (str1.compare(0, str2.size(), str2) == 0); 
    cout << "Starts With: " << (startswith ? "True" : "False") << endl;
    
    // Determining if the first string contains the second string at any location
    size_t found = str1.find(str2);
    if (found != std::string::npos) {
        cout << "Contains: True" << endl; 
        cout << "Location of Match : "<< found << endl;
    } else {
        cout << "Contains: False" << endl;
    }
    
    // Determining if the first string ends with the second string
    bool endswith = (str1.compare(str1.size() - str2.size(), str2.size(), str2) == 0); 
    cout << "Ends With: " << (endswith ? "True" : "False") << endl;
    
    return <｜begin▁of▁sentence｜>0; // Successfully run the program<｜end▁of▁sentence｜><｜begin▁of▁sentence｜><<<noscript>Please enable JavaScript to view the page content!</noscript>

   /* This HTML file is a template.  Any changes you make will be lost.
      To create your own website, duplicate this file and save it as a new name. */
      <!DOCTYPE html>
      <html lang="en">
        <head>
          <meta charset="utf-8">
           <title>Flying Saucers</title>
            <link rel="stylesheet" href="style.css">
             <script src="main.js"></script>
        </head>
          <body>
              <header role="banner">
                 <h1>Flying Saucers</h1>
                  <p id="tagline">Experience the magic of flying saucers.</p>
                   <!-- This is a comment in HTML -->
              </header>
                <main role="main"> 
                    <section class="about">
                        <h2>About Flying Saucers</h2>
                          <p>Flying saucers are small, high-altitude aircraft designed to deliver communications in the form of fixed stations and satellites. These tiny airmen serve as communications satellites for our space program. This is a very interesting subject.</p>
                    </section>
                <!-- other sections go here -->
            </main>
             <footer role="contentinfo">
                 <p>&copy; 2017 Flying Saucers, Inc. All rights reserved.</p>
             </footer>
          <!-- other content goes here -->
        </body>
      </html>
```

