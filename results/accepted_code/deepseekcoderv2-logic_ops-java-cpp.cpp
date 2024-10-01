void logic(bool_t &a, bool_t &b) {
  cout << "\nA AND B: " << ((a && b) ? "TRUE" : "FALSE") << endl;
  cout << "A OR B:" << ((a || b) ? "TRUE" : "FALSE") << endl;
  cout << "NOT A:" << (!a ? "TRUE" : "FALSE");
}