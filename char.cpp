#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//in array, we need for loop for taking inputs and showing outputs but in case of char array, we do not need that
// int main(){
//     char ch[10];
//     // cin>>ch;                        //it terminates taking input when get space,tab and newline
//     cin.getline(ch,10);           //it takes space,tab as an input and terminates only when it gets newline,it store upto 9 charchaters and 
//                                                         //leaves 1 spaces for blank character '\0'
//     cout<<ch;
// }


// printing length of char array
// int main(){
//     char ch[100];
//     cin.getline(ch,90);
//    // cin>>ch;

//     int length=0;
//     // for(int i=0;ch[i]!='\0';i++){
//     //     length++;
//     // }
//     cout<<"length is :"<<length;
//     cout<<"length is :"<<strlen(ch);                //defined function to find the length of string
// }


// reverse of an char array
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int i=0,j=strlen(ch)-1;
//     while(i<=j){
//         swap(ch[i],ch[j]);
//         i++;j--;
//     }
//     cout<<ch;
// }

// reversing by using function
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     reverse(ch,ch+strlen(ch));
//     cout<<ch;
// }


//uppercase
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int i=0;
//     while(i<strlen(ch)){
//         if((int)ch[i]>=97){
//             ch[i]=(int)ch[i]-97+65;
//         }
//         i++;
//     }
//     cout<<ch;
// }

// uppercase by direct function
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     strupr(ch);
//     cout<<ch;
// }


//lowercase
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int i=0;
//     while(i<strlen(ch)){
//         if((int)ch[i]==32){
//             i++;
//             continue;
//         }
//         if((int)ch[i]<97){
//             ch[i]=(int)ch[i]+97-65;
//         }
//         i++;
//     }
//     cout<<ch;
// }

// lowercase by direct function
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     strlwr(ch);
//     cout<<ch;
// }

// checking palindrome
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int i=0,j=strlen(ch)-1;
//     while (j>=i){
//         if(ch[i]!=ch[j]){
//             cout<<"not palindrome";
//             return 0;
//         }
//         i++;j--;
//     }

//     cout<<"yes it is a palindrome.";
    
// }

int main() {

  // string name;

  //   getline(cin, name);
  //   cout << name;
  //empty string
  //string temp = "";

  // cout << "Length of string: "  << name.length() << endl;
  // cout << "String is empty or not: " << temp.empty() << endl;
  //cout <<"Character at position 0 is: " << name.at(0) << endl;

  // cout << "Front character of string is: "<< name.front() << endl;
  // cout << "back character of string is: "<< name.back() << endl;

  // string str1 = "Love";
  // string str2 = "Babbar";

  // cout << "before appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;
  
  // //append
  // str1.append(str2);

  // cout << "After appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;

  // string desc = "This is a car";
  // desc.erase(4, 3);
  // cout << desc << endl;


  // string name = "Love Babbar";
  // string middle = "kumar ";

  // name.insert(5, middle);

  // cout << "Printing name:  " << name << endl;


  // string name = "love" ;

  // cout << name << endl;

  // name.push_back('R');
  // cout << name << endl;

  // name.pop_back();
  // cout << name << endl;


  // string str1 = "yaar tera super star desi kalakar";
  // string str2  = "staryyyy";


  // if(str1.find(str2) == string::npos){
  //  //not found
  //  cout << "Not FOund" << endl;
  // }
  // else {
  //  cout << "Found" << endl;
  // }

  // string str1 = "babbar";
  // string str2 = "Love";

  // if(str1.compare(str2) == 0) {
  //  cout << "Matching" << endl;
  // }
  // else {
  //  cout << "not matching " << endl;
  // }


//   string desc = "this is a car, big daddy of all suvs";

//   cout << desc.substr(19, 5) << endl;
}

