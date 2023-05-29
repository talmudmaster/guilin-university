#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	string start,end,mid;
	cin>>str1>>start>>end>>mid;
	int start1=0,end1=0;
	int start2=start.length();
	int end2=end.length();
	int fir=-10,las=0;
	
	int len=str1.length();
	for(int i=0;i<len;i++){
		if((str1[i]==start[start1])&&fir<0){	
			int ii=i,flag=0;
			for(int j=0;j<start2;j++){
				if(str1[ii+j]!=start[start1+j]){
					flag=1;
					break;
			    }	
			}	
			if(!flag)fir=i;//记录起始位置
		}
		if(str1[i]==end[end1]&&fir>=0){//代表前面有aa
		    int ii=i,flag=0,j;
			for(j=0;j<end2;j++){
				if(str1[ii+j]!=end[end1+j]){
					flag=1;
					break;
				}
			}
		    if(!flag){
		    	las=i+j;
		        str1=str1.substr(0,fir)+start+mid+end+str1.substr(las,len);
				i=fir+start2+end2+mid.length()-1;//记录修改str1之后起始查找位置
				if(i<0)break;//最后一个测试点就错这了。。。
				len=str1.length();//str1长度改变
		        fir=-10;  
		    }
		}
	}
	cout<<str1<<endl;
	//system("pause");
}

