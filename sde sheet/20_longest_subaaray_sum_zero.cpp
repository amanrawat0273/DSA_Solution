class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        int m=0,s=0;
        for(int i=0;i<n;i++)
        {
            s+=A[i];
            if(s==0){
                m=i+1;
            }else{
                if(mp.find(s)!=mp.end()){
                    m=max(m,i-mp[s]);
                }else{
                    mp[s]=i;
                }
            }
        }
        return m;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends