#include<bits/stdc++.h>
using namespace std;
int main(){
	//SRTF CODE
	int n;
	int at[10],bt[10],ct[10],tat[10],wt[10];
	double avg_tat=0,avg_wt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>at[i];
	}
	for(int i=0;i<n;i++){
		cin>>bt[i];
	}
	
	
	int x=at[0];
	int k=1;
//	int visited[10]={0};
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> test;
	test.push({bt[0],0});
	while(!test.empty()){
		pair<int,int> top=test.top();
		top.first=top.first-1;
		x++;
		test.pop();
		if(!top.first){
			ct[top.second]=x;
		}
		else{
			test.push({top.first,top.second});
		}
		for(k;k<n;k++){
			if(at[k]<=x){
			//	cout<<"added "<<k<<endl;
				test.push({bt[k],k});
			}
			else{
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		tat[i]=ct[i]-at[i];
		avg_tat+=tat[i];
	}
	avg_tat=avg_tat/n;
	for(int i=0;i<n;i++){
		wt[i]=tat[i]-bt[i];
		avg_wt+=wt[i];
	}
	avg_wt=avg_wt/n;
	cout<<avg_tat<<" "<<avg_wt;
	return 0;
}