//PROBLEM LINK: https://www.interviewbit.com/problems/permutations/


vector<vector<int> > Solution::permute(vector<int> &A) {
    if(A.size()<=1)
        return {A};
    vector<vector <int>> result;
    for(int i=0;i<A.size();i++)
    {
        vector <int> v; v=A;
        v.erase(v.begin()+i);
        auto res=permute(v);
        for(int j=0;j<res.size();j++)
        {
            vector temp=res[j];
            temp.insert(temp.begin(),A[i]);
            result.push_back(temp);
        }
    }
    return result;
}
