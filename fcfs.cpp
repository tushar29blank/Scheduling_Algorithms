#include<bits/stdc++.h>
using namespace std;
int main(){
	//FCFS CODE
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
	for(int i=0;i<n;i++){
		x+=bt[i];
		ct[i]=x;
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