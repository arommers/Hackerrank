int migratoryBirds(vector<int> arr)
{
    vector<int> types(5, 0);
    
    for (int value : arr)
        types[value - 1]++;
    
    auto it = max_element(types.begin(), types.end());
    int max = *it;
    int min = 5;
    
    if (it != arr.end())
    {
        
        for(int i = 0; i < types.size(); ++i)
        {
            if (types[i] == max && i < min)
                min = i;
        }
        return min + 1;
    }
    return -1;
}