//Hello World
#include "main.h" 

CustomException::CustomException(const string& m, int c) {
 category = c;
 message = m.c_str(); 
}
CustomException::CustomException(const char* m, int c) {
 category = c;
 message = m; 
}
CustomException::CustomException(const string& m) {
 message = m.c_str(); 
}
CustomException::CustomException(const char* m) {
 message = m; 
}
const char* CustomException::what() const throw() {
  return message;
}
int CustomException::whatCategory() const throw() {
  return category;
}

int main(int argc, char** argv)
{
  bool logicError1 = false;
  bool logicError2 = true;
  bool logicError3 = false;

  try {
      if (logicError1) 
         throw logic_error("Bad logic 1.");
      else if (logicError2)
         throw logic_error("Bad logic 2.");
      else if (logicError3)
         throw logic_error("Bad logic 3.");
      else
           cout << "No logic error specified" << endl;
  }
  catch (logic_error &le) {
      cerr << "Logic error: " << le.what() << endl;
  }

  try {
      if (logicError1) 
         throw CustomException("Bad logic 1.", 1);
      else if (logicError2)
         throw CustomException("Bad logic 2.", 2);
      else if (logicError3)
         throw CustomException("Bad logic 3.", 3);
      else
           cout << "No logic error specified" << endl;
  }
  catch (CustomException &ce) {
      cerr << "Logic error: " << ce.what() << endl;
      cerr << "Logic error category: " << ce.whatCategory() << endl;
  }

  cout << "Press any key to continue..\n";
  cin.get();


 return 0;
}
