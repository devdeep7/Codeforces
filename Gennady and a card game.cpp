#include <iostream>
#include <cstring>
using namespace std;
 
 
 
int playorNot(string *OnDeck, string *InHandCards, int l1, int l2){
    int i;
    int j;
    for (i=0; i<l1; i++){
        for (j=0; j<l2; j++){
            if ((*OnDeck)[i]==(*InHandCards)[j]){
                return 1;
                
            }
        }
    }
        
    return 0;
    
}
 
int main(){
    
    int l1;
    int l2;
    int y;
    string OnDeck;
    string InHandCards;
    
    getline(cin, OnDeck);
    getline(cin, InHandCards);
    
    l1 = OnDeck.size();
    l2 = InHandCards.size();
    
    y = playorNot(&OnDeck, &InHandCards, l1, l2);
 
    if(y==1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
}
