#include<iostream>
#include<vector>
using namespace std;


// binary search

// int main(){
//     vector<int>v={1,2,3,4,5,6,7,8};
//     int first=0,last=v.size()-1,mid;
//     int target;
//     cout<<"enter target element :";
//     cin>>target;

//     while(last>=first){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             cout<<"element is found at "<<mid+1;
//             return 0;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
//     cout<<"element is not found";
// }


// find last occurence of number                         //method1
// int main(){
//     vector<int>v={1,2,3,3,3,3,7,8};
//     int first=0,last=v.size()-1,mid;
//     int target;
//     cout<<"enter target element :";
//     cin>>target;
//     int find;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             find=mid;
//             break;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
//     while(v[find+1]==target){
//         find++;
//     }
//     cout<<"last occurence is at "<<find;
// }


// find first occurence of number                      //method2
// int main(){
//     vector<int>v={1,2,3,3,3,3,7,8};
//     int first=0,last=v.size()-1,mid;
//     int target;
//     cout<<"enter target element :";
//     cin>>target;
//     int find=-1;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             find=mid;
//             last=mid-1;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
    
//     cout<<"first occurence is at "<<find;
// }




// find last occurence of number                      //method2
// int main(){
//     vector<int>v={1,2,3,3,3,3,7,8};
//     int first=0,last=v.size()-1,mid;
//     int target;
//     cout<<"enter target element :";
//     cin>>target;
//     int find=-1;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             find=mid;
//             first=mid+1;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
    
//     cout<<"last occurence is at "<<find;
// }




// find total occurence of number             (last_occurence-first_occurence+1)   
// int firstocccu(vector<int>&v,int target){
//     int first=0,last=v.size()-1,mid;
//      int find_first=-1;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             find_first=mid;
//             last=mid-1;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
//     return find_first;
// }

// int lastocccu(vector<int>&v,int target){
//     int first=0,last=v.size()-1,mid;
//      int find_last=-1;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             find_last=mid;
//             first=mid+1;
//         }else if(v[mid]<target){
//             first=mid+1;
//         }else if(v[mid]>target){
//             last=mid-1;
//         }
//     }
//     return find_last;
// }              
// int main(){
//     vector<int>v={1,2,3,3,3,3,7,8};
    
//     int target;
//     cout<<"enter target element :";
//     cin>>target;
//    int f=firstocccu(v,target);
//    int l=lastocccu(v,target);
//     cout<<"total occurence is "<<(l-f+1);
// }


// find missing element in logn
// void missing(vector<int>&v,int size){
//     int first=0,last=v.size()-1,mid,miss=size+1;
//         while(first<=last){
//             mid=(first+last)/2;
//             if(v[mid]-mid==1){
//                 first=mid+1;
//             }else{
//                 miss=v[mid]-1;
//                 last=mid-1;
//             }
//         }
//         cout<<miss;
// }
// int main(){
//     vector<int>v={1,2,3,5,6,7,8};
//     missing(v,v.size());
// }

// finding peak element 
// method1
// int main(){
//     vector<int>v={2,5,7,9,2,1,0};
//     int first=0,last=v.size()-1,mid,peak;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]>v[mid-1] && v[mid+1]<v[mid]){
//             cout<<"peak element is: "<<v[mid];
//             return 0;
//         }else if(v[mid]<v[mid-1]){
//             last=mid-1;
//         }else{
//             first=mid+1;
//         }
//     }
// }

// method 2 more correct
// int main(){
//     vector<int>v={4,5,1,2,3};
//     int first=0,last=v.size()-1,mid;
//     while(first<last){
//         mid=(first+last)/2;
//         if(v[mid]<v[mid+1]){
//             first=mid+1;
//         }else{
//             last=mid;
//         }
//     }
//     cout<<v[first];
// }


// finding pivot in rotated sorted array
// int findPivot(int arr[], int n) {
//     int low = 0, high = n - 1;

//     // If array is not rotated at all
//     if (arr[low] <= arr[high])
//         return 0;

//     while (low < high) {
//         int mid = low + (high - low) / 2;

//         // If middle element > last element, pivot is in right half
//         if (arr[mid] > arr[high])
//             low = mid + 1;
//         else
//             high = mid;
//     }

//     // When loop ends, low == high → pivot index
//     return low;
// }

// int main() {
//     int arr[] = {3,4, 5, 1, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int pivot = findPivot(arr, n);

//     cout << "Pivot index: " << pivot << endl;
//     cout << "Pivot element: " << arr[pivot] << endl;

//     return 0;
// }



// to find the quotient without using /
// int main(){
//     int d1,d2,divisor,dividend,quotient=1;
//     cout<<"enter the divisor :";
//     cin>>d1;
//     divisor=abs(d1);
//     cout<<"enter the dividend :";
//     cin>>d2;
//     dividend=abs(d2);
//      int first=0,last=dividend,mid;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(first==last ){ 
//             if(d1<0 && d2<0 || d1>0 &&d2>0){
//                 cout<<"quotient is :"<<quotient;
//             }else{
//                 cout<<"quotient is :"<<-quotient;
//             }
//         }
//         if(mid*divisor>dividend){
//             last=mid-1;
//         }
//         if(mid*divisor<=dividend){
//             quotient=mid;
//             first=mid+1;
//         }
//     }
// }


// binary search in nearly sorted array
// int main(){
//     vector<int>v={20,10,30,50,40,70,60};
//     int first=0,last=v.size()-1,mid,target;
//     cout<<"enter target :";
//     cin>>target;
//     while(first<=last){
//         mid=(first+last)/2;
//         if(v[mid]==target){
//             cout<<"target is found at position "<<mid+1;
//         }
//         if(v[mid-1]==target){
//             cout<<"target is found at position "<<mid;
//         }
//         if(v[mid+1]==target){
//             cout<<"target is found at position "<<mid+2;
//         }
//         if(v[mid]<target){
//             first=mid+3;
//         }else{
//             last=mid-3;
//         }
//     }
// }


// int findOddOccuringElement(int *arr,int size){
    
//     int first = 0;
//     int last = size - 1;

//     while(first < last){
//         int mid = first + (last-first)/2;

//         // make mid even
//         if(mid % 2 == 1)
//             mid--;

//         if(arr[mid] == arr[mid+1])
//             first = mid + 2;
//         else
//             last = mid;
//     }

//     return arr[first];
// }
// int main(){
//     int arr[]={10,10,30,30,50};
//     cout<<findOddOccuringElement(arr,5);
// }