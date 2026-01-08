class Solution{
public:
int a,b;
int dp[501][501];

int f(int x,int y,vector<int>&u,vector<int>&v){
if(x==a||y==b)return -1e9;
if(dp[x][y]!=-2e9)return dp[x][y];
int z=u[x]*v[y];
int p=z+max(0,f(x+1,y+1,u,v));
int q=f(x+1,y,u,v);
int r=f(x,y+1,u,v);
return dp[x][y]=max({p,q,r});
}

int maxDotProduct(vector<int>&u,vector<int>&v){
a=u.size();b=v.size();
for(int i=0;i<501;i++)
for(int j=0;j<501;j++)
dp[i][j]=-2e9;
return f(0,0,u,v);
}
};
