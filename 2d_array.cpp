#include<iostream>
#include<limits.h>
using namespace std;


//row wise printing
// void print(int arr[2][4]){                 //giving column size is mandatory is 2d array
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// int main(){
//     int arr[][4]={
//         {2,3,4,5},
//         {2,3,5,6}
//     };
//     print(arr);
// }


//column wise printing
// void print(int arr[2][4]){
//     for(int j=0;j<4;j++){                                        //giving column size is mandatory is 2d array
//         for(int i=0;i<2;i++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// int main(){
//     int arr[][4]={
//         {2,3,4,5},
//         {2,3,5,6}
//     };
//     print(arr);
// }



// taking input
// int main(){
//     int arr[2][3];
//     cout<<"enter 6 elements :";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }cout<<endl;
//     }
// }


//searching one element if present or not
// void search(int arr[3][4]){
//     int target;
//     cout<<"enter the target element :";
//     cin>>target;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(target==arr[i][j]){
//                 cout<<"element is found";
//                 return;
//             }
//         }
//     }
//     cout<<"element is not found";
// }
// int main(){
//     int arr[3][4]={
//         {2,4,6,7},
//         {8,3,6,8},
//         {1,0,2,4}
//     };
    
//     search(arr);
// }


//maximum value
// void max(int arr[3][4]){
//     int check=INT16_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(check<arr[i][j]){
//                 check=arr[i][j];
//             }
//         }
//     }
//     cout<<"maximum value is :"<<check;
// }
// int main(){
//     int arr[3][4]={
//         {2,4,6,7},
//         {8,3,6,8},
//         {1,0,2,4}
//     };
    
//     max(arr);
// }


//row wise sum
// void sum(int arr[3][4]){
//     for(int i=0;i<3;i++){
//          int check=0;
//         for(int j=0;j<4;j++){
//             check+=arr[i][j];
//         }cout<<check<<" ";
//     }
    
// }
// int main(){
//     int arr[3][4]={
//         {2,4,6,7},
//         {8,3,6,8},
//         {1,0,2,4}
//     };
    
//     sum(arr);
// }



//column wise sum
// void sum(int arr[3][4]){
    
//     for(int j=0;j<4;j++){
//         int check=0;
//         for(int i=0;i<3;i++){
//             check+=arr[i][j];
//         }cout<<check<<" ";
//     }
    
// }
// int main(){
//     int arr[3][4]={
//         {2,4,6,7},
//         {8,3,6,8},
//         {1,0,2,4}
//     };
    
//     sum(arr);
// }



// transpose
void transpose(int arr[3][4]){
    for(int i=0;i<3;i++){
        for(int j=i;j<4;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
}
int main(){
    int arr[3][4]={
        {2,4,6,7},
        {8,3,6,8},
        {1,0,2,4}
    };
    
    transpose(arr);
}