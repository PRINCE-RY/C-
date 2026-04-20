#include <iostream>
#include <sstream>
#include <string> // Added for string usage

using namespace std;

class Student {
private:
    int age, standard;
    string first_name, last_name;

public:
    // Setters to modify private variables (the "get" functions in original code were misused)
    void set_age(int a) {
        age = a;
    }
    void set_first_name(string fn) {
        first_name = fn;
    }
    void set_last_name(string ln) {
        last_name = ln;
    }
    void set_standard(int s) {
        standard = s;
    }

    // Getters to retrieve private variables (accessor methods)
    int get_age() const {
        return age;
    }
    string get_first_name() const {
        return first_name;
    }
    string get_last_name() const {
        return last_name;
    }
    int get_standard() const {
        return standard;
    }

    // Function to format the output string
    string to_string_representation() const {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    Student st;

    // We need to set the values first, typically by reading input from the user
    // The original main function was trying to print values that hadn't been set yet.
    
    int age, standard;
    string first_name, last_name;

    // Read input from the standard input stream (console)
    cin >> age >> first_name >> last_name >> standard;

    // Set the values for the student object
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    // Now we can use the accessor methods and the formatting function
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    // Using the function with a distinct name to avoid conflicts with standard library functions
    cout << st.to_string_representation() << "\n"; 

    return 0;
}
