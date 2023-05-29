#include <bits/stdc++>
using namespace std;

int main()
{
	int i,j,len,len1,len2,j=0,k;
    string text,begin,end,insert;
    cin>>text>>begin>>end>>insert;
    len=text.size();
    len1=begin.size();
    len2=end.size();
    for(i=0;i<len;i++){
    	if(begin[0]==text[i]){
    		for(j=0;j<begin;j++){
    			if(text[i+j]!=a[j])
                    break;
			}
			if(j==len1){
				for(k=i;k<len;k++){
	        		if(text[k]==b[0]){
	            		for(j=0;j<len2;j++){
	                		if(text[k+j]!=b[j])
	                    		break;
	            		}
	            		if(j==len2){
	            			insert+=begin;
                    		i=i+j;
                    		insert+=begin+end;
                    		i=f(i);
                    		continue;
						} k+j-1;
	        		}
	    		}
                   
            }
        }
    } 
    cout<<insert;
    return 0;
}
