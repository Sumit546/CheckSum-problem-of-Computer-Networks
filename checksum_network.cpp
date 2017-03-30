#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int v,a[50],i,x=0,n,m[50],c=0,z=0,g=0,h=0,ff,l[50];
	cout<<"How many no.s you want to enter:"<<endl;
	cin>>n;
	cout<<"enter the no.s:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		x=x+a[i];
	}
	cout<<"the sum of the no.s is"<<x<<endl;
	cout<<"Converting the no. into a binary form:"<<endl;
	while(x!=0)
	{
		v=x/2;
	    m[c]=x%2;
	    c++;
	    x=v;
	}
	cout<<"The binary form of the sum is: "<<endl;
	for(i=c-1;i>=0;i--)
	{
	cout<<m[i];
	}
	cout<<endl;
	if(c-1>3)
	{
		if(m[0]==1)
		{
			if(m[c-1]==1)
			{
				m[0]=0;
			}
			else if(m[c-1]==0)
			{
				m[0]=1;
			}
		}
		else if(m[0]==0)
		{
			if(m[c-1]==1)
			{
				m[0]=1;
			}
			else if(m[c-1]==0)
			{
				m[0]=0;
			}
		}
		else
		{
			cout<<m[c];
		}
	}
	cout<<"Now after XOR operation the no. is:"<<endl;
	for(i=3;i>=0;i--)
	{
	cout<<m[i];
	}
	cout<<endl;
	
	cout<<"the decimal no. of the final one is:"<<endl;
	for(i=0;i<4;i++)
	{
		z=z+m[i]*pow(2,i);
	}
	a[n]=z;
	cout<<"The sum of those is: "<<endl;
	for(i=0;i<n+1;i++)
	{
		g=g+a[i];
	}
	cout<<"The sum is:"<<g<<endl;
	cout<<"Converting the no. into a binary form:"<<endl;
	while(g!=0)
	{
		ff=g/2;
	    l[h]=g%2;
	    h++;
	    g=ff;
	}
	cout<<"The binary form of the sum is: "<<endl;
	for(i=h-1;i>=0;i--)
	{
	cout<<l[i];
	}
	cout<<endl;
	if(h-1>3)
	{
		if(l[0]==1)
		{
			if(l[h-1]==1)
			{
				l[0]=0;
			}
			else if(l[h-1]==0)
			{
				l[0]=1;
			}
		}
		else if(l[0]==0)
		{
			if(l[h-1]==1)
			{
				l[0]=1;
			}
			else if(l[h-1]==0)
			{
				l[0]=0;
			}
		}

		else
		{
			cout<<l[h];
		}
	}
	if(h-1>4)
	{
				if(l[0]==1)
		{
			if(l[h-1]==1)
			{
				l[0]=0;
			}
			else if(l[h-1]==0)
			{
				l[0]=1;
			}
		}
		else if(l[0]==0)
		{
			if(l[h-1]==1)
			{
				l[0]=1;
			}
			else if(l[h-1]==0)
			{
				l[0]=0;
			}
		}
			else if(l[1]==1)
		{
			if(l[h-2]==1)
			{
				l[1]=0;
			}
			else if(l[h-2]==0)
			{
				l[0]=1;
			}
		}
		else if(l[1]==0)
		{
			if(l[h-2]==1)
			{
				l[1]=1;
			}
			else if(l[h-2]==0)
			{
				l[1]=0;
			}
		}
		else
		{
			l[0]=0;
		}
	}
	
	for(i=3;i>=0;i--)
	{
	if(l[i]==0)
	{
		l[i]=1;
	}
	else if(m[i]==1)
	{
		l[i]=0;
	}
	else
	{
		l[i]=0;
	}
	}
	
	

	cout<<"The final result of the checksum is :"<<endl;
	for(i=3;i>=0;i--)
	{
	cout<<l[i];
	}
	return 0;
}
