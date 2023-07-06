#include<iostream>
using namespace std;
int main()
{
	static int adj[10][10];
	int p[10][10];
	int n,i,j,src_vrt,dest_vert,edges;
	cout<<"Enter no. of vertices and edges";
	cin>>n>>edges;
	
	cout<<"Input src and dest vertices";
	for(i=1;i<=edges;i++)
	{
		cin>>src_vrt>>dest_vert;
		adj[src_vrt][dest_vert]=1;
	}
	cout<<"Adjacency Matrix \n";
	for(i=1;i<=n;i++){
		cout<<" ";
		for(j=1;j<=n;j++){
			cout<<adj[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return  0;
}

/* */
