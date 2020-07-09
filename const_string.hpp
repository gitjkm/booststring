#include <iostream>
#include <string>

using namespace std;


class const_string 
{
public:
        // Constructors
    const_string();
    const_string(const string& s) : intern(s) {}
    
    const_string(const char *s) :intern(s) {}
    
    const_string(const char *s, size_t len);

        //Access methods
    const char *data() const {
        return intern.c_str();
        
    }
    
    size_t length() const {
        return intern.length();
        
    }
    
    bool is_empty() const {
        return intern.empty();
        
    }
    
    
    
private:
    string intern{};
};

    
