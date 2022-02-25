int left_most[26];

class Solution{
public:
    string chooseandswap(string a){
        
        int n = a.size();
        string ans = "";
		for(int i = 0; i<=25; i++)
			left_most[i] = -1;
			
		for(int i = 0; i<=n-1; i++)
		{
			if(left_most[a[i]-97]==-1)
				left_most[a[i]-97] = i;
		}
		
		int j = -1;
		int mark = -1;
		for(int i = 0; i<=n-2; i++)
		{
			//if(a[i]>a[i+1])
			//{
				j = i;
				for(int k = 0; k<=25; k++)
				{
					if(left_most[k] > left_most[a[j]-97] && k < (int)(a[j]-97))
					{
						mark = k;
						break;
					}
				}
			//}
			if(mark!=-1)
			break;
		}
		
// 		cout<<mark<<endl;
		
		if(mark!=-1)
		{	
			for(int i = 0; i<=n-1; i++)
			{
				if(a[i]==(char)(mark+97)){
				// 	printf("%c",a[j]);
					ans += a[j];
				}
				else if(a[i]==a[j]){
				// 	printf("%c",mark+97);
				    ans += ((char)(mark+97));
				}
    			else {
    			    ans += a[i];
    			}
			}
		}
		
		else
		{
			for(int i = 0; i<=n-1; i++)
			{
			    ans += a[i];
			}
		}
		
		return ans;
    }
    
};
