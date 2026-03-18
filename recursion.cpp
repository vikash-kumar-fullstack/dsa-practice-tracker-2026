#include<iostream>
#include<vector>
#include<string.h>
#include<limits.h>
using namespace std;



// printing from n to 1
// void pri(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     pri(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number till which count :";
//     cin>>n;
//     pri(n);
// }


// printing from 1 to n
// void pri(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     pri(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter the number till which count :";
//     cin>>n;
//     pri(n);
// }



// // finding 2 to the power n
// int pow(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*pow(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the power of 2:";
//     cin>>n;
//     int power=pow(n);
//     cout<<power;
// }



// fibonacci series
// int fibo(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the nth number : ";
//     cin>>n;
//     int fiboc=fibo(n);
//     cout<<fiboc;
// }



// count till n
// int sum(int n){
//     if(n==1){
//         return 1;
//     }

//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number till which count :";
//     cin>>n;
//     int count=sum(n);
//     cout<<count;
// }



// print array in reverse order
// void printArray(int *arr,int size,int index){
//     if(index>=5){
//         return;
//     }
//     cout<<arr[size-1-index]<<"  ";
//     printArray(arr,size,index+1);
// }
// int main() {
//     int arr[] = {11,20,31,40,51};
//     int size = 5;
//     int index = 0;
//     printArray(arr, size, index);
// }



// search target in array
// bool searchArray(int arr[], int size, int target, int index ) {
//     //base case
//     if(index >= size) {
//         return false;
//     }
//     if(arr[index] == target) {
//         return true;
//     }
//     //recursive call
//     return searchArray(arr, size, target, index+1);
// }
// int main() {
//     int arr[] = {11,20,31,40,51};
//     int size = 5;
//     int index = 0;
//     int target;
//     cout << "Enter element to search: ";
//     cin >> target;
//     cout << "Found or not: " << searchArray(arr,size,target,index);
// }



// find minimum in array

// void findMin(int *arr,int size, int index,int &mini){
//     if(index>=size){
//         return;
//     }
//     mini=min(mini,arr[index]);
//     findMin(arr,size,index+1,mini);
// }

// int main() {
//     int arr[] = {11,20,5,40,51};
//     int size = 5;
//     int index = 0;
//     int mini = INT_MAX;
//     findMin(arr, size, index, mini);
//     cout << "Minimum number in array: " << mini;
// }



// store even numbers in vector
// void solve(int *arr,int size,int index,vector<int>&ans){
//     if(index>=size){
//         return;
//     }
//     if(arr[index]&1){
//         solve(arr,size,index+1,ans);
//     }else{
//         ans.push_back(arr[index]);
//         solve(arr,size,index+1,ans);
//     }
// }
// int main() {
//     int arr[] = {11,20,31,40,51};
//     int size = 5;
//     int index = 0;
//     vector<int> ans;
//     solve(arr, size, index, ans);
//     for(int num: ans) {
//         cout << num << " ";
//     }
// }



// print digits of a number
// void printDigits(int num, vector<int>& ans) {
//     if(num<=0){
//         return;
//     }
//     printDigits(num/10,ans);
//     ans.push_back(num%10);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     vector<int> ans;
//     printDigits(num, ans);
//     for(int d: ans) {
//         cout << d << " ";
//     }
// }



// checking whether the array is sorted
// int sorted(int *arr,int size,int index){
//     if(index+1>=size){
//         return 1;
//     }
//     if(arr[index]>arr[index+1]){
//         return 0;
//     }
//     sorted(arr,size,index+1);
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=(sizeof(arr)/sizeof(arr[0]));
//     int index=0;
//     int result=sorted(arr,size,index);
//     !result?cout<<"array is not sorted": cout<<"array is sorted";
// }

 
// binary search
// int binary(int arr[],int size,int target,int first,int last){
//     int mid=(first+last)/2;
//     if(last<=first){
//         return -1;
//     }
//     if(arr[mid]==target){
//         return mid;
//     }else if(arr[mid]>target){
//         binary(arr,size,target,first,mid-1);  
//     }else{
//         binary(arr,size,target,mid+1,last);
//     }
// }
// int main(){
//     int arr[]={2,5,8,12,17,26,30};
//     int size=(sizeof(arr)/sizeof(arr[0]));
//     int target;
//     cout<<"enter the target element :";
//     cin>>target;
//     int first=0,last=size;
//     int result=binary(arr,size,target,first,last);
//     result>0?cout<<"element is found at "<<result: cout<<"target is not found";
// }


// subsequence of a string
// void sequence(string word,string output,int size,int index){
//     if(index>=size){
//         cout<<"->"<<output<<endl;
//         return;
//     }
//     // exclude
    
//     sequence(word,output,size,index+1);,
//     // include
//     output.push_back(word[index]);
//     sequence(word,output,size,index+1);
    
// }
// int main(){
//     string word="abc";
//     int size=word.size();
//     int index=0;
//     string output="";
//     sequence(word,output,size,index);
// }


// Maximum Sum of Non-Adjacent Elements (House Robber)
// int solve(vector<int>& nums, int size, int index) {
//     // base case
//     if(index >= size ) {
//         return 0;
//     }

//     // option 1: chori karo -> ith index pr
//     int option1 = nums[index] + solve(nums, size, index+2);

//     // option 2: chori mat karo -> ith index pr
//     int option2 = 0 + solve(nums, size, index+1);

//     int finalAns = max(option1, option2);
//     return finalAns;
// }

// int rob(vector<int>& nums) {
//     int size = nums.size();
//     int index = 0;
//     int ans = solve(nums, size, index);
//     return ans;
// }

// int main(){
//     vector<int> nums = {2,7,9,3,1};
//     int result = rob(nums);
//     cout<<"Maximum sum of non-adjacent elements: "<<result<<endl;
// }



// Coin Change Problem
// int coinChange(vector<int>& coins, int amount) {
//     vector<int> dp(amount + 1, INT_MAX);
//     dp[0] = 0;
    
//     for (int i = 1; i <= amount; i++) {
//         for (int coin : coins) {
//             if (i - coin >= 0 && dp[i - coin] != INT_MAX)
//                 dp[i] = min(dp[i], 1 + dp[i - coin]);
//         }
//     }
//     return (dp[amount] == INT_MAX) ? -1 : dp[amount];
// }

// int main() {
//     vector<int> coins = {1, 2, 5};
//     int amount;
//     cout << "Enter the amount: ";
//     cin >> amount;

//     int result = coinChange(coins, amount);
//     if (result == -1)
//         cout << "It is not possible to make the amount." << endl;
//     else
//         cout << "Minimum coins required: " << result << endl;
// }


// merge sort
// void merge(vector<int>& arr, int start, int end) {
//     int mid = (start + end) / 2;

//     int leftlen = mid - start + 1;
//     int rightlen = end - mid;

//     int *leftarr = new int[leftlen];
//     int *rightarr = new int[rightlen];

//     // copy left
//     for (int i = 0; i < leftlen; i++) {
//         leftarr[i] = arr[start + i];
//     }

//     // copy right
//     for (int i = 0; i < rightlen; i++) {
//         rightarr[i] = arr[mid + 1 + i];
//     }

//     int leftindex = 0, rightindex = 0;
//     int oriindex = start;

//     // merge
//     while (leftindex < leftlen && rightindex < rightlen) {
//         if (leftarr[leftindex] < rightarr[rightindex]) {
//             arr[oriindex++] = leftarr[leftindex++];
//         } else {
//             arr[oriindex++] = rightarr[rightindex++];
//         }
//     }

//     // remaining left
//     while (leftindex < leftlen) {
//         arr[oriindex++] = leftarr[leftindex++];
//     }

//     // remaining right
//     while (rightindex < rightlen) {
//         arr[oriindex++] = rightarr[rightindex++];
//     }

//     delete[] leftarr;
//     delete[] rightarr;
// }

// void mergesort(vector<int>& arr, int start, int end) {
//     if (start >= end) return;

//     int mid = (start + end) / 2;
//     mergesort(arr, start, mid);
//     mergesort(arr, mid + 1, end);

//     merge(arr, start, end);
// }

// int main() {
//     vector<int> arr = {1, 5, 3, 9, 6, 9, 2};
//     int start = 0, last = arr.size() - 1;

//     mergesort(arr, start, last);

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
// }


