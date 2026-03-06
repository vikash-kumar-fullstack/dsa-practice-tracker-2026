#include<iostream>
#include<vector>
using namespace std;


// void print(vector<int>v){
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // for(auto it:v){                                                    //2nd method for printing
    //     cout<<it<<" ";
    // }
// }

// void input(vector<int>&v){
//     int n;
//     cout<<"enter the number of size :";
//     cin>>n;
//     int data;
//     for(int i=0;i<n;i++){
//         cin>>data;
//         v.push_back(data);
//     }
// }
// initialization different ways
// int main(){
    // vector<int>v;                           // first way
    // vector<int>v(5);                          // initialization of 5 elements, each set to 0
    // vector<int> v(3,10);                      //initialization of 3 element ,each set to 10
    // vector<int>v2=v;                         //copying each element of v into v2
    // vector<int>v2(v.begin(),v.begin()+2);       //only first two elements of v is initialize to v2
    // int arr[]={1,2,3,4};
    // vector<int>v2(arr,arr+2);                   //only first two elements of arr is initialize to v2
    // cout<<v.capacity();
    // input(v);
    // print(v2);
//     print(v);

// }

// int main() {
//     vector<int> v = {10, 20, 30, 40};

//     // Insert 15 at index 1
//     v.insert(v.begin() + 1, 15);  // [10, 15, 20, 30, 40]

//     // Erase element at index 2
//     v.erase(v.begin() + 2);       // [10, 15, 30, 40]

//     // Add 50 to the end
//     v.push_back(50);              // [10, 15, 30, 40, 50]

//     // Remove last element
//     v.pop_back();                 // [10, 15, 30, 40]

//     for (int x : v) {
//         cout << x << " ";
//     }
//     return 0;
// }



// 2d vector
// void print(vector<vector<int>>&v){
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// int main(){
//     vector<vector<int>>v;                 //declaration
//     v.push_back({1,2});
//     v.push_back({5,3,7,8});
//     v.push_back({0,3,4});
//     print(v);




// vector<pair<int, string>> data;           //to store two type togetherr
// data.push_back({1, "Hello"});
// data.push_back({2, "World"});

// }

// for multiple datatype in same vector
// #include<variant>                           //but variant is introduced in c++ 17 version
// int main() {
//     vector<variant<int, string, double>> vec;

//     vec.push_back(10);
//     vec.push_back("Hello");
//     vec.push_back(3.14);

//     for (int i=0;i<vec.size();i++) {

//     }
//     return 0;
// }