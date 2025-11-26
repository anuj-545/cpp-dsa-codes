#include<iostream>
#include<vector>
using namespace std ; 
int main()
{
    
    //we are going to learn deletion process 
    
    vector<int> v(10);
    
    cout<<"enter the elements in the array"<<endl ; 
    for(int i=0 ; i<v.size() ; i++)
    {
        cin>>v[i] ; 
    }
    
    cout<<"the array is"<<endl ; 
    for(int i=0 ;i<v.size() ; i++)
    {
        cout<<v[i]<<" " ;
    }
    
   // cout<<"now we will delete some elements "<<endl ; 
    // v.erase(v.begin()) ; 
    // v.erase(v.begin()+1) ; 
    // v.erase(v.begin()+2) ; 
    //above was the discrete way of deleting 
    
    //now we will delete in the range ..
    
    cout<<endl ; 
    cout<<"Deleting the elements in the range"<<endl ; 
    
    v.erase(v.begin(),v.begin()+3) ; 
    
    
    
    cout<<"Now the new array after the deletion is"<<endl ; 
    
    for(int i=0 ; i<v.size() ;i++)
    {
        cout<<v[i]<<" " ; 
    }
    return 0 ;

}