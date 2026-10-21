#include<iostream>
using namespace std;
char tolower(char ch){
if(ch>='a' && ch<='z'){
    return ch;
}
else{
        char temp;
        temp=ch-'A'+'a';
        return temp;
    }
}
int getlength(char names[]){
    int count=0;
    for(int i=0;names[i]!='\0';i++){
        count++;
    }
    return count;
}    
void reverse(char names[],int length){
    int start=0;
    int end=length-1;
    while(start<end){
        swap(names[start],names[end]);
        start++;
        end--;
    }
} 
int main(){
    char names[100];
    cin>>names;
    cout<<names<<endl;
    int len=getlength(names);
    cout<<getlength(names)<<endl;
    reverse(names,len);
    cout<<names<<endl;
    cout<<tolower('G');
}