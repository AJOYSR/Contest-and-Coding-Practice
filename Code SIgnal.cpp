 int vector <int > v;
        for ( int i=0;i<nums.size();i++)
        {
            int sum=0;
            v.push_back(nums[i]);
            sum+=v[0];
            for ( int j=0;j<nums.size;j++)
            {
                if(i==j) continue;
                sum+=nums[j];
                v.push_back(nums[j]);
                if(sum/v.size==target)
                {
                    return v;
                }
            }
            v.clear();
        }
