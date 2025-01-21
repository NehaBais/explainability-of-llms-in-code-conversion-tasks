a = "ball";
b = "BALL";
cout << "a == b (case insensitive): " << (a.compare(b, std::ignore) == 0)
     << endl;