//BFS traversal
#include<iostream>
using namespace std;
int main()
{
	int n,edges,sr_vt,dt_vt;
	static int adj[10][10];
	cout<<"Enter no. of vertices and edges";
	cin>>n>>edges;
	
	cout<<"Enter source and destination vertices";
	for(int i=1;i<=edges;i++)
	{
	cin>>sr_vt>>dt_vt;
	adj[sr_vt][dt_vt]=1;
}
cout<<"Adjacency Matrix \n";
	for(int i=1;i<=n;i++){
		cout<<" ";
		for(int j=1;j<=n;j++){
			cout<<adj[i][j]<<"\t";
		}
		cout<<"\n";
	}
	int status[10],que[20],bfs[10],k=0;
	int f=0,r=0,start,w;
	cout<<"Enter start vertex";
	cin>>start;
	for(int i=1;i<=n;i++)
	{
		status[i]=0;
	}
	
	que[f]=start;
	status[start]=1;
	while(f!=-1)
	{
		w=que[f];
		if(f==r){
			f=r=-1;
		}
		else{
			f++;
		}
		status[w]=2;
		bfs[k]=w;
		
		k++;
	
	for(int a=1;a<=n;a++)
	{
		if(adj[w][a]!=0 && status[a]==0)
		{
			que[++r]=a;
			if(r==0)
			{
				f=0;
			}
			status[a]=1;
		}
		
	}
}
	for(int x=0;x<k;x++)
	{
		cout<<que[x]<<" ";
	}
	return 0;
}
