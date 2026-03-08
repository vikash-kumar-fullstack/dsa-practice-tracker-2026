#include<iostream>
using namespace std;


//print sum of three numbers
// void sum(int a ,int b,int c){
//     cout<<a+b+c;
// }
// int main(){
//     int a,b,c;
//     cout<<"print three numbers :";
//     cin>>a>>b>>c;
//     sum(a,b,c);
// }

// to find the max of three numbers

// void max(int a,int b,int c){
//     if(a>b && a>c){
//         cout<<a<<" is largest"<<endl;
//     }else if(b>a &&b>c){
//         cout<<b<<" is largest"<<endl;
//     }else{
//         cout<<c<<" is largest"<<endl;
//     }
// }
// int main(){
//     int a,b,c;
//     cout<<"enter the three numbers :";
//     cin>>a>>b>>c;
//     max(a,b,c);
// }


// to print till 1 to n

// void count(int n){
//    for(int i=1;i<=n;i++){
//     cout<<i<<endl;
//    }
// }
// int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     count(a);
// }


//to find whether the number is prime or not

// void prime(int n){
//     bool check=0;
//     if(n==2 || n==3){
//         cout<<n<<" is a prime number.";return;
//     }
//     if(n<2){
//         cout<<n<<" is not a prime number.";return;
//     }
//    for(int i=n/2;i>1;i--){
//     if(n%i==0){
//         check=1; break;
//     }
//    }
//    if(!check){
//     cout<<check;
//     cout<<n<<" is a prime number.";
//    }else{
//     cout<<n<<" is not a prime number.";
//    }
// }
// int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     prime(a);
// }

// to check whether a number is even or odd
// void check(int a){
//     if(a&1){
//         cout<<a<<" is an odd number.";
//     }else{
//         cout<<a<<" is an even number.";
//     }
// }
// int main(){
//     int n;
//     cout<<" enter a number :";
//     cin>>n;
//     check(n);
// }

// to find the sum till 1 to n

// void countSum(int n){
//     int sum=0;
//    for(int i=1;i<=n;i++){
//     sum=sum+i;
//    }
//    cout<<"the sum is :"<<sum;
// }
// int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     countSum(a);
// }



// to find the sum of even numbers till 1 to n

// void countSum(int n){
//     int sum=0;
//    for(int i=1;i<=n;i++){
//     if(i%2==0)
//     sum=sum+i;
//    }
//    cout<<"the sum is :"<<sum;
// }
// int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     countSum(a);
// }



// to find area of circle

// void areaOfCircle(int n){
//    cout<<"the area of circle is : "<<3.14*n*n;
// }
// int main(){
//     int a;
//     cout<<"enter the radius of circle :";
//     cin>>a;
//     areaOfCircle(a);
// }


// to find factorial a number

// void factorial(int n){
//    int fact=1;
//    for(int i=n;i>1;i--){
//     fact=fact*i;
//    }
//    cout<<"factorial of "<<n<<" is :"<<fact;
// }
// int main(){
//     int a;
//     cout<<"enter the value of a number :";
//     cin>>a;
//     factorial(a);
// }

//to print all the prime number till n

// void prime(int p){
//     for(int n=2;n<=p;n++){
//         bool check=0;
//     if(n==2 || n==3){
//         cout<<n<<" is a prime number."<<endl;continue;
//     }
//    for(int i=n/2;i>1;i--){
//     if(n%i==0){
//         check=1; break;
//     }
//    }
//    if(!check){
//     cout<<n<<" is a prime number."<<endl;
//    }
//     }
// }
// int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     prime(a);
// }


// to print all the digits of a number(from right to left)
// void allDigits(int a){
    
//     while(a>0){
//         int check=a;
//         int p=check%10;
//         cout<<p<<endl;
//         a/=10;
//     }
// }
//     int main(){
//     int a;
//     cout<<"enter the value of a :";
//     cin>>a;
//     allDigits(a);
// }


// to create a number using digits
// void allDigits(int a){
//     cout<<"enter all the digits :";
//     int num=0;
//     while(a>0){
//         int t;
//         cin>>t;
//         num=num*10+t;
//         a--;
//     }
//     cout<<"the number found is :"<<num;
// }
//     int main(){
//     int a;
//     cout<<"enter the total digits of the number :";
//     cin>>a;
//     allDigits(a);
// }


//to print binary representation of a decimal number (from right to left)
// void binary(int a){
//     while(a>0){
//         int p=a%2;
//         cout<<p<<endl;
//         a/=2;
//     }
// }
//     int main(){
//     int a;
//     cout<<"enter the decimal number :";
//     cin>>a;
//     binary(a);
// }

// void binary(int a){
//     if(a<=0){
//         return;
//     }
//     int de=a%2;
//     binary(a/2);
//     cout<<de;
// }
//     int main(){
//     int a;
//     cout<<"enter the decimal number :";
//     cin>>a;
//     binary(a);
// }


//to find the count of all set bits of a number
// void countBinary(int a){
//     int count=0;
//     while(a>0){
//         int p=a%2;
//         count++;
//         a/=2;
//     }
//     cout<<"the count of all the set of bits if this number is: "<<count;
// }
//     int main(){
//     int a;
//     cout<<"enter the decimal number :";
//     cin>>a;
//     countBinary(a);
// }


// to find whether a number is even or odd using bitwise opertor 
// void bit(int a){
//     if((a&1)){
//         cout<<a<<" is odd";
//     }else{
//         cout<<a<<" is even";
//     }
// }
// int main(){
//     int a;
//     cout<<"enter a number :";
//     cin>>a;
//     bit(a);
// }


//function call by value
// int callByVlue(int n){
//     n++;
//     return n;
// }
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     n=callByVlue(n);                                   //only value is passing to the function
//     cout<<n;
// }


//function call by reference
// void callByRefer(int&n){
//     n++;
// }
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     callByRefer(n);                                //reference is passing to the function
//     cout<<n;
// }


 