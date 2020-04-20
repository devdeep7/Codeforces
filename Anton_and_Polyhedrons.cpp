include <iostream>
#include <string.h>
using namespace std;
 
 
int faces(string *s, int num){
    int i;
    int x=0;
    int y=0;
    
    for (i=0; i<num;i++){
        if (s[i]=="Tetrahedron"){
            x = 4;
        }
        else if (s[i]=="Cube"){
            x=6;
        }
        else if (s[i]=="Octahedron"){
            x=8;
        }
        else if (s[i]=="Dodecahedron"){
            x=12;
        }
        else if (s[i]=="Icosahedron"){
            x=20;
        }
    y = y + x;  
    }  
        
    return y;
}
 
 
int main(){
    int i;
    int num={0};
    int NumOfaces=0;
    
    cin>>num;
    
    string shapes[num];
    
    for (i=0; i<num;i++){
        cin>>shapes[i];
    }
    
    NumOfaces = faces(shapes, num);
    cout<<NumOfaces<<endl;
    
}
