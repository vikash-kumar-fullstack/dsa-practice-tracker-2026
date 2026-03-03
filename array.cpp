#include<iostream>
using namespace std;

//taking input of 10 number in array and printing their double
// int main(){
//     int arr[10];
//     cout<<"enter 10 values :";
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         arr[i]*=2;
//         cout<<arr[i]<<"  ";
//     }  
// }


//take input of 5 elements in array and print their sum
// int main(){
//     int arr[5];
//     cout<<"enter 5 values :";
//     int sum=0;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<"the sum of all 5 elements in array are :"<<sum;
// }


// linear search
// int main(){
//     int arr[10]={1,5,2,7,4,9,10,35,13,15};
//     int target;
//     cout<<"enter the target element :";
//     cin>>target;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         if(target==arr[i]){
//         cout<<"element found successfully at "<<i+1;
//         return 0;}
//     }
//     cout<<"element is not found";
// }



// counting 0's and 1's in array
// void count(int arr[],int size){
//     int zero=0,one=0;
//     for(int i=0;i<size;i++){
//         switch(arr[i]){
//             case 0:
//                 zero++;
//                 break;
//             case 1:
//                 one++;
//                 break;
//             default:
//                 cout<<"wrong input in array";
//                 return;
//         }
//     }
//     cout<<"no of zeros are :"<<zero<<endl<<"no of ones are :"<<one;
// }
// int main(){
//     int arr[]={0,1,0,1,1,0,1,0,0,1,1,0,0,1,0};
//     int size=sizeof(arr)/sizeof(int);
//     count(arr,size);
// }



// minimum value in array
// void min(int *arr,int size){
//     int mini=arr[0];
//     for(int i=1;i<size;i++){
//         if(mini>arr[i]){
//             mini=arr[i];
//         }
//     }
//     cout<<"minimun value in array is :"<<mini;
// }
// int main(){
//     int arr[]={45,23,7,13,87,9,35,89,45,24,56,8,73,55,789,6,5,4,57,34,565,687,654,34,56,78,798,345};
//     int size=(sizeof(arr)/sizeof(int));
//     min(arr,size);
// }


//print reverse of an array
// void reverse(int arr[],int size){
//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={45,23,7,13,87,9,35,89,45,24,56,8,73,55,789,6,5,4,57,34,565,687,654,34,56,78,798,345};
//     int size=(sizeof(arr)/sizeof(int));
//     reverse(arr,size);
// }


// actual swapping of array
// void reverse(int arr[],int size){
//     // for(int i=0;i<size/2;i++){
//         // int save=arr[i];                            //method1
//         // arr[i]=arr[size-1-i];
//         // arr[size-i-1]=save;

//         // swap(arr[i],arr[size-i-1]);                  //   method2
//     // }
//     int i=0,j=size-1;
//     while(i<j){
//         int save=arr[i];
//         arr[i]=arr[j];                                     //method 3
//         arr[j]=save;
//         i++,j--;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={45,23,7,13,87,9,35,89,45,24,56,8,73,55,789,6,5,4,57,34,565,687,654,34,56,78,798,345};
//     int size=(sizeof(arr)/sizeof(int));
//     reverse(arr,size);
// }




// print extreme of an array
// void extreme(int arr[],int size){
//     int left=0,right=size-1;
//     while(left<=right){
//         if(left==right){
//             cout<<arr[left]<<endl;
//             return;
//         }
//         cout<<arr[left]<<"  "<<arr[right]<<endl;
//         left++,right--;
//     }
// }
// int main(){
//     int arr[]={45,23,7,13,87,9,35,89,45,24,56,8,73,55,789,6,5,4,57,34,565,687,654,34,56,78,798,345,5};
//     int size=(sizeof(arr)/sizeof(int));
//     extreme(arr,size);
// }


// find unique element
// void unique(int arr[],int size){
//     for(int i=0;i<size;i++){
//         bool flag=true;
//         int check=arr[i];
//         for(int j=0;j<size;j++){
//             if(i!=j && check==arr[j]){
//                 flag=false;
//             }
//         }
//         if(flag==true){
//             cout<<check<<" is found as unique."<<endl;
//         }
//     }
// }
// int main(){
//     int arr[]={1,4,2,6,9,8,5,1,4,2,6,8,5,3};
//     int size=sizeof(arr)/sizeof(int);
//     unique(arr,size);
// }



// if there is only one unique element
// void unique(int arr[],int size){
//     int ip=0;
//     for(int i=0;i<size;i++){
//         ip^=arr[i];
//     }
//     cout<<"unique element is :"<<ip;
// }
// int main(){
//         int arr[]={1,4,2,6,9,8,5,1,4,2,6,8,5};
//     int size=sizeof(arr)/sizeof(int);
//     unique(arr,size);
// }



// printing all pair(doublet) of numbes
// void pai(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//         }
//     }
// }
// int main(){
//     int arr[]={1,4,2,6,9,8,5,1,4,2,6,8,5};
//     int size=sizeof(arr)/sizeof(int);
//     pai(arr,size);
// }






// printing all pair(triplet) of numbers
// void pai(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             for(int k=0;k<size;k++){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={1,4,2,6,9,8,5,1,4,2,6,8,5};
//     int size=sizeof(arr)/sizeof(int);
//     pai(arr,size);
// }



// sorting 0's and 1's
// void sorting(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int check=arr[i];
//         if(check!=0){
//             for(int j=i+1;j<size;j++){
//                 if(arr[j]==0){
//                     swap(arr[j],arr[i]);
//                 }
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={0,1,0,0,1,1,1,0,1,0};
//     int size=sizeof(arr)/sizeof(int);
//     sorting(arr,size);
// }



// shifting each element to one position right
// void shift(int arr[],int size){
//     int last=arr[size-1];
//     for(int i=size-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=last;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
// }



// shifting each element to two position right
// void shift(int arr[],int size){
//     int last=arr[size-1];
//     int second_last=arr[size-2];
//     for(int i=size-1;i>1;i--){
//         arr[i]=arr[i-2];
//     }
//     arr[0]=second_last;
//     arr[1]=last;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
// }


// shifting negative numbers to left and positive to right
// void shift(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=1;j<size;j++){
//             if(arr[j]<0 && arr[j-1]>0){
//                 swap(arr[j],arr[i]);                                               //complexity 0(n^2)
//             }
//         }
//     }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
// }
// int main(){
//     int arr[]={-2,-5,-7,4,5,-8,-4};
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
// }


// shifting negative numbers to left and positive to right
// void shift(int arr[],int size){
//     int p=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]<0){
//             swap(arr[i],arr[p]);                                       //complexity 0(n)
//             p++;
//         }
//     }
//         for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[]={2,-5,-7,4,5,-8,-4};
//     // int arr[]={0,1,0,1,0,0,1,1,0};                            //for shifting 0's and 1's also
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
// }




// shifting smaller number to the left most
// void shift(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[i]);                                               //complexity 0(n^2)
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={2,0,2,1,2,0};
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
// }




// shifting smallest number to the leftmost
// void shift(int arr[],int size){
//     int l=0;
//     int r=size-1;
//     int i=0;
//     while(r>i){
//         if(arr[i]<arr[l]){
//             swap(arr[i],arr[l]);                                       //complexity 0(n)
//             l++;
            
//         }
//         if(arr[i]>arr[r]){
//             swap(arr[i],arr[r]);                                       
//             r--;
//         }else{
//             i++;
//         }
        
//     }
//         for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return;
// }
// int main(){
//     int arr[]={3,5,7,1,2};
//     int size=sizeof(arr)/sizeof(int);
//     shift(arr,size);
//     return 0;
// }


//to sort the array by 0,1,and then 2
// int arr[]={1,2,0,2,1,0,2,1};

// int main(){
//     int arr[]={1,2,0,2,1,0,2,1};
//     int l=0,r=7,i=0;
//     while(r>=i){
//         if(arr[i]==0){
//             swap(arr[i],arr[l]);
//             l++;
//             i++;
//         }
//         else if(arr[i]==2){
//             swap(arr[i],arr[r]);
//             r--;
//             i++;
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// to print the max number of 1's along with row number
// int main(){
//     int arr[4][4]={
//         {1,0,0,0},
//         {0,1,0,1},
//         {1,0,1,1},
//         {0,0,0,1}
//     };
//     int rows=0,ones=0;
//     for(int i=0;i<4;i++){
//         int count=0;
//         for(int j=0;j<4;j++){
//             if(arr[i][j]==1){
//                 count++;
//             }
//         }
//         if(count>ones){
//             ones=count;rows=i;
//         }
// }
// cout<<rows<<" "<<ones;
// }


// imp: rotate 2d array by 90 deg

// int main(){
//     int arr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     //transpose
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     // reverse each rows
//     for(int i=0;i<3;i++){
//         int start=0,end=2;
//         while(end>start){
//             swap(arr[i][start],arr[i][end]);
//             start++;end--;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }cout<<endl;
//     }
// }