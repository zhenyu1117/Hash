#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
bool Hash[1000];
int w[100];
char s[1000];
int main(){
	int m,n,sum;
	while(scanf("%d%d",&n,&m)){
        int q=0;
        int ans=0;
		int sum;
		scanf("%s",s);
        memset(w,-1,sizeof(w));
        memset(Hash, false, sizeof(Hash));
        int l=strlen(s);
        for(int i=0;i<l&&q<m;i++)
            if(w[s[i]]==-1)
                 w[s[i]]=q++;
        for(int i=0;i<l-n+1;i++){
            sum=0;
            for(int j=i;j<i+n;j++)
                 sum+=sum*m+w[s[j]];
            if(!Hash[sum]){
                Hash[sum]=true; 
				ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

