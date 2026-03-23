#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


// bubble sort
// int main(){
//     int arr[]={2,4,9,4,1};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// selection sort
// int main(){
//     int arr[]={7,1,4,9,5,0,3};
//     int min;
//     for(int i=0;i<7;i++){
//          min=i;
//         for(int j=i+1;j<7;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }swap(arr[i],arr[min]);
//     }
//         for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// insertion sort
// int main(){
//     int arr[]={2,4,1,4,7};
//     for(int i=1;i<5;i++){
//        int element=arr[i];
//         int key=i-1;
//        while(element<arr[key] && key>=0){
//         swap(arr[key+1],arr[key]);key--;
//        }
//     }
//              for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// custom comparator
// bool desc(int &a,int &b){
//     // return a<b;                                         //ascending order
//     return a>b;                                         //descending order
// }
// int main(){
//     vector<int>v={4,1,8,5,3,0};
//     sort(v.begin(),v.end());                                 //ascending order
//     sort(v.begin(),v.end(),desc);                           //descending order


//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


// custom comparator in 2 d vector, by index other than zero
// bool desc(vector<int>&p,vector<int>&o){
//     return p[0]>o[0];
// }
// int main(){
//     vector<vector<int>>v;
//     int size;
//     cout<<"enter the size of outer vector :";
//     cin>>size;
//     for(int i=0;i<size;i++){
//         vector<int>p;
//         int inner_size;
//         cout<<"enter the size of "<<i+1<<" vector :";
//         cin>>inner_size;
//         for(int j=0;j<inner_size;j++){
//             int data;
//             cout<<"enter "<<j+1<<" element :";
//             cin>>data;
//             p.push_back(data);
//         }
//         v.push_back(p);
//     }
//     // sort(v.begin(),v.end());                                      //ascending order
//     sort(v.begin(),v.end(),desc);
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }cout<<endl;
//     }
// }

