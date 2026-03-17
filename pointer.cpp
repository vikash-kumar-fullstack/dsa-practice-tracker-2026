#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

// Size of a pointer (sizeof(pointer)) → depends on the system architecture (32-bit or 64-bit), not on the type it points to.
// On a 32-bit system, all pointers are 4 bytes.
// On a 64-bit system, all pointers are 8 bytes.
// int main(){
//     int a=5;
//     int *p=&a;
//     cout<<sizeof(p)<<endl;
//     char ch='q';
//     char *r=&ch;
//      cout<<sizeof(r)<<endl;
//     long v=2;
//     long *o=&v;
//      cout<<sizeof(o)<<endl;
// }


// note: a[b] ≡ *(a + b) ≡ *(b + a) ≡ b[a] — array indexing is pointer arithmetic, and addition is commutative.

// int main(){
//     int arr[]={1,2};
//     cout<<*(arr+1);
//     cout<<1[arr];
// }


// pointer different in int loop and char loop
// int main(){
//     int arr[]={1,2,34,5,6};
//     int *pt=arr;
//     cout<<pt<<endl;
//     cout<<pt<<endl<<*pt<<endl<<*(pt+0)<<endl;
//     cout<<*(arr+3)<<endl;
//     cout<<(arr+3)<<endl;

//     char ch[50]="loverkuhsiv";
//     char *chpt=ch;
//    // char *chpt=&ch;  //error
//     // char *chpt=&ch[0];
//     cout<<chpt<<endl<<*chpt<<endl<<*(chpt+0)<<endl;
//     cout<<*(ch+3)<<endl;
//     cout<<(ch+3);
// }


// pointer to an array
// int main(){
//     int arr[]={1,2,3,4,5};
//     int (*p)[5]=&arr;
//     cout<<(*p)[1];
//     cout<<(*p)[2];
//     cout<<(*p)[3];
// }

// array of pointer
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *p[5];
//     for(int i=0;i<5;i++){
//         p[i]=&arr[i];
//     }
// }


// pointer in function
// void poi(int arr[],int size){  //in argument we can also write int *arr
//     cout<<sizeof(arr)<<endl;
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     poi(arr,4);
//     cout<<sizeof(arr);
// }


// passing by value
// void poi(int *p){  
//     p+=1;
//     cout<<p<<endl;
// }
// int main(){
//     int a=5;
//     int *p=&a;
//     poi(p);
//     cout<<p;
// }


// passing by reference
// void poi(int * &p){ 
//     p+=1;
//     cout<<p<<endl;
// }
// int main(){
//     int a=5;
//     int *p=&a;
//     poi(p);
//     cout<<p;
// }