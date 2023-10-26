#include<bits/stdc++.h>
using namespace std;
int main(){
	//Round Robin CODE
	int n,tq=2;
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
	queue<pair<int,int>> q;
	q.push({bt[0],0});
	while(!q.empty()){
		//cout<<x<<endl;
	    //sleep(2);
		pair<int,int> front=q.front();
		x=x+min(tq,front.first);
		front.first=front.first-tq;
		q.pop();
		for(k;k<n;k++){
			if(at[k]<=x){
			//	cout<<"added "<<k<<endl;
				q.push({bt[k],k});
			}
			else{
				break;
			}
		}
		if(front.first<=0){
			ct[front.second]=x;
		}
		else{
			q.push({front.first,front.second});
		}
		
	}
	for(int i=0;i<n;i++){
	//	cout<<ct[i]<<" ";
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