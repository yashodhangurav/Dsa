// #include<iostream>
// using namespace std;

// void func(){

//     static int count = 0;           //using static keyword our variable stay in the memory stack lifetime it will not destroy automatically when the function is executed
//     count++;

//     cout<<"Count is "<<count<<endl;
// }

// int main(){
//     func();
//     func();
//     func();

//     return 0;
// }

// ---------------------------------------------------static variable in class
// #include<iostream>
// using namespace std;

// class Student{
//     public:
//         static int x;
// };
// // initialization of the data member outside the class
// int Student:: x = 0;

// int main(){
//     Student s1;
//     Student s2;
//     Student s3;

//     cout<<s1.x++<<endl;
//     cout<<s2.x++<<endl;
//     cout<<s3.x++<<endl;
    
//     return 0;
// }

// --------------------------------------------static object of class

#include<iostream>
using namespace std;

class Student{
    public:
      Student(){
        cout<<"constructor...\n";
      }
      ~Student(){
        cout<<"Destructor...\n";
      }
};

int main(){
    int n = 0;
    if(n == 0){
       static Student s1;
    }

    cout<<"code ending...\n";

    return 0;
}