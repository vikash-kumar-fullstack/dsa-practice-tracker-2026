#include<iostream>
#include<vector>
#include<string>
using namespace std;

// finding duplet adjacent char and removing it
// int main(){
//     string random="axppxy";
//     int i=0;
//     while(random[i]!='\0'){
//         if(random[i]==random[i+1]){
//             random.erase(i,2);
//             i-=2;
//         }i++;
//     }
//     cout<<random;
// }


// to find a substring in another string and upon finding delete it
// int main(){
//     string ori="bajcmsabcyhdtabcnu";
//     string par="abc";
//     while(ori.find(par)!=string::npos){
//         ori.erase(ori.find(par),par.length());
//     }
//     cout<<ori;
// }


// to check whether any string is palindrome or can be by removing atmost one charchater
// bool palindrome(string ele,int first,int last){
//     while(first<=last){
//         if(ele[first]!=ele[last]){
//             return 0;
//         }else{
//             first++;last--;
//         }
//     }
//     return 1;
// }

// int main(){
//     string ele="abcbxa";
//     int first=0,last=ele.length()-1;
//     while(first<=last){
//         if(ele[first]==ele[last]){
//             first++;last--;
//         }else if(ele[first]!=ele[last]){
//             if(palindrome(ele,first+1,last) || palindrome(ele,first,last-1)){
//                 cout<<"yes it can be create a valid palindrome by removing atmost one char";
//                 return 0;
//             }else{
//                 cout<<"no it cannot be create a valid palindrome by removing atmost one char";
//                 return 0;
//             }
//         }
//     }
// }


// number of possible palindromic substring possible in a string
// int palindrome(string word,int i,int j){
//     int count=0;
//     while(i>=0 && j<word.length() && word[i]==word[j]){
//         i--;j++;
//         count++;
//     }
//     return count;
// }
// int main(){
//     string word="abcbbc";
//     int oddpalim,evenpalim,total=0;
//     for(int i=0;i<word.length();i++){
//         oddpalim=palindrome(word,i,i);
//         evenpalim=palindrome(word,i,i+1);
//         total+=oddpalim+evenpalim;
//     }
//     cout<<total;
// }


// mapping a key to alphabets and then encripts a message using map of key
// int main(){
//     //mapping
//     string key="the quick brown fox jumps over the lazy dog";
//     char start='a';
//     char mapping[256]={0};
//     for(auto ch:key){
//         if(ch!=' ' && mapping[ch]==0){
//             mapping[ch]=start;
//             cout<<start;
//             start++;
//         }
//     }
//     cout<<endl;
//     // decoding
//     string message="vkbs bs t suepuv";
//     string encrypt;
//     for(auto ch:message){
//         if(ch==' '){
//             encrypt.push_back(' ');
//         }
//         else{
//             encrypt.push_back(mapping[ch]);
//         }
//     }
//     cout<<encrypt;
// }


// three truck to collect paper,glass and metal garbage , find the toal minimum cost to collect and pick them
// int main(){
//     string gar[]={"g","p","gp","gg"};
//     int cost_to_travel[]={2,4,3};
//     int n;
//     int g=0,m=0,p=0;
//     int last_p=0,last_g=0,last_m=0;
//     for(int i=0;i<(sizeof(gar)/sizeof(gar[0]));i++){
//         if(gar[i]=="g" || gar[i]=="gg"){
//             n=gar[i].length();
//             g+=n;
//             if(i+1>1){
//                 last_g=i;
//             }
//         }else if(n=gar[i].length() && gar[i]=="p"){
//             p+=n;
//             if(i+1>1){
//                 last_p=i;
//             }
//         }else if(gar[i]=="gp"){
//             g++;p++;
//             if(i+1>1){
//                 last_g=i;
//                 last_p=i;
//             }
//         }
//     }
//     for(int i=0; i<last_g; i++) g += cost_to_travel[i];
//     for(int i=0; i<last_p; i++) p += cost_to_travel[i];
//     for(int i=0; i<last_m; i++) m += cost_to_travel[i];
//     cout<<g<<" "<<p<<" "<<m;
// }


// finding pattern based string
// string mapping(string &str){
//     char map[256]={0};
//     char start='a';
//     for(auto ch:str){
//         if(map[ch]==0){
//             map[ch]=start;
//             start++;
//         }
//     }
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         str[i]=map[ch];
//     }
//     return str;
// }
// int main(){
//     string words[]={"abc","deq","mee","aqq","dkd","ccc"};
//     string pattern="abb";

//     for(int i=0;i<(sizeof(words)/sizeof(words[0]));i++){
//         string show=words[i];
//         if(mapping(pattern)==mapping(words[i])){
//             cout<<show<<" ";
//         }
//     }
// }



