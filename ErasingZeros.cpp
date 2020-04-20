#include <iostream>
#include <string>
using namespace std;
int erasingzeros (string *p, int size){
    int i;
    int j;
    int count=0;
    int secCount=0;
    for(i=0;i<size;i++){
        if((*p)[i]!=(*p)[i+1]){
            if((*p)[i]=='0'){}
        else
            for(j=i+1;(*p)[j]=='0';j++){
                count = count+1;
            }
        }
    if(j==(size)){
        count=0;
    }
    else if (secCount<=count && secCount==0) {    
            secCount = count;
            count = 0;
        }
    else if (secCount>=count && count!=0) {    
            secCount = count;
            count = 0;
    }
}
return secCount;
}   
int main(){
    int i;
    int s;
    int num;
    string numbers;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>numbers;
        s=numbers.size();
        cout<<erasingzeros(&numbers,s)<<'\n'<<endl;
    }
}