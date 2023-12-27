#include <iostream>
using namespace std;

double returns(double yearly_amount,double yearly_interest,int time,double invt){
    if(time==1)
        return yearly_amount*(1+(yearly_interest/100));
    else
        return returns((yearly_amount*(1+(yearly_interest/100)))+invt,yearly_interest,time-1,invt);
}

int main(){
    double amt,intr,t;
    cout<<"Enter yearly amount : ";
    cin>>amt;
    cout<<endl<<"Enter yearly interest : ";
    cin>>intr;
    cout<<endl<<"Enter number of years : ";
    cin>>t;
    cout<<endl<<returns(amt,intr,t,amt);
    return 0;
}