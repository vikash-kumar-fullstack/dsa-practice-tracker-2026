#include<iostream>
using namespace std;
// int x=6;

// int main(){
//     cout<<x<<endl;
//     int x=9;
//     cout<<x<<endl;
//     cout<<::x<<endl;                    //accessing the global variable
//     ::x=1;
//     cout<<::x<<endl;
// }



// static and non static variable

// void non_static(){
//     int x=5;
//     x++;
//     cout<<x;
// }
//     // non-static
// int main(){

//     // Created when a function runs.
//     // Destroyed when the function ends.
//     // Each time you call the function, it gets a fresh new copy.
//     non_static();
//     non_static();                               //each time a new memory is created for x  and destroyed after use
// }


// void _static(){
//     static int x=5;
//     x++;
//     cout<<x;
// }
//     // non-static
// int main(){
//    // once created it destroyed when whole program complete exception share same memory
//     _static();//6
//     _static();//7                        //be in memory until whole program complete
// }


/*
Note: If static and global variables are uninitialized, then the C++ compiler automatically 
        initializes them to zero (for basic data types).
        But for non -static and local variable it gives random value
*/