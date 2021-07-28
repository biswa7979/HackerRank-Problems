//class problem on Hacker rank

#include <iostream>
#include <sstream>

using namespace std;

class Student{
  private:
  int age, standard;
    string first_name, last_name;
    
    public:
    void set_age(int a){
        age=a;
    }
    void set_standard(int b){
        standard=b;
    }
    void set_first_name(string a1){
        first_name=a1;
    }
    void set_last_name(string a2){
        last_name= a2;
    }
    int get_age(){
        return age;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
       string a,s;
       stringstream ss;  
        ss << age;  
        ss >> a; 
        stringstream ss1;
        ss1<<standard;
        ss1>>s;
        return (a+","+first_name+","+last_name+","+s);
         
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
