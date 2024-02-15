vector<int> maximumPerimeterTriangle(vector<int> sticks)
{
    vector<int> result;
    long         sum = 0;
    sort(sticks.begin(), sticks.end(), greater<int>());
    
    for(int i = 0; i < sticks.size() - 2; ++i)
    {
        if ((long)sticks[i] < ((long)sticks[i + 1] + (long)sticks[i + 2]))
        {
            long tmp = ((long)sticks[i] + (long)sticks[i + 1] + (long)sticks[i + 2]);
            if (tmp >= sum)
            {
                sum = tmp;
                result.clear();
                result.push_back(sticks[i + 2]);
                result.push_back(sticks[i + 1]);
                result.push_back(sticks[i]);
            }
        }
    }
    if (result.empty())
        result.push_back(-1);
    return result;
}