#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> memory = {200,400,600,500,300,500};
    vector<int> p_size = {357,210,468,10,601};
    int i=1;
    cout<<"Process NO.\t"<<"Process Size\t"<<"Block no.\t"<<"Block size"<<endl;
    while(p_size.empty()==false){
        int z=-1;
        for(int j=0;j<memory.size();j++){
            if(z==-1 && memory[j]>0 && memory[j]>=*(p_size.begin())){
                z=j;
            }
            else if(z!=-1 && memory[j]>0 && memory[z]>memory[j] && memory[j]>=*(p_size.begin())) z=j;
        }
        cout<<"P"<<i<<"\t\t"<<*(p_size.begin());
        if(z==-1) cout<<"\t\tNot Allocated"<<"\t__";
        else cout<<"\t\t"<<z+1<<"\t\t"<<memory[z]<<endl;
        memory[z]*=-1;
        p_size.erase(p_size.begin());
        i++;
    } 
}
