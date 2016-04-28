#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

using std::string;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::exception;
using std::logic_error;

class CustomException : public exception {
    private:
      int category;
      const char* message; 
    public:
       CustomException(const string&, int);
       CustomException(const char*, int);
       CustomException(const string&);
       CustomException(const char*);
       const char* what() const throw();
       int whatCategory() const throw();
};
