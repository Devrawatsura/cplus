#include<iostream>
using namespace std;
class two;
class one{
    private: 
    int x;
    public:
    int setvalue1(int a){
        x=a;
        return x;
    }
friend void max(one , two);
};
class two{
    private: 
    int y;
    public:
    int setvalue2(int b){
        y=b;
        return y;
    }
friend void max(one, two ) ;
};
void max (one o, two b){
    if(o.x>b.y){
 cout<<"Maximum value is "<< o.x<<endl;
    }
 else{
    cout<<"Maximum value is "<<b.y<<endl;
 }
    
}
int main(){
    one obj1;
    two obj2;
    obj1.setvalue1(2);
     obj2.setvalue2(10);
         max(obj1, obj2);
         return 0;
}
