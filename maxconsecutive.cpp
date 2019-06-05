// O(n)
int i=0;
    int o;
    int max_len = 0 ; 
    int n = nums.size();
    while(i<n)
    {
        if(nums[i]!=1){
            ++i;
            }
        else {
            int o = i+1;
            int cur_len = 1;
            while(o < n && nums[o] ==1)
            {
                ++o;
                ++cur_len;
            }
            i = o ;
            max_len = max(max_len ,cur_len);
            
            }
    
    }
    return max_len;
    }


//O(nsqaure)

  int max_len =0;

  for(int i= 0 ; i<nums.size();++i)
  {
    if (nums[i]!=0 )
    {
        int curr_length = 1;
        int nex_i = i+1;
        while(nex_i<nums.size()&& nums[nex_i]==1)
        {
            // curr_length= curr_length+1;
            ++curr_length;
            ++nex_i;
        }
    max_len = max(max_len,curr_length);
    }
  }
  return max_len;
  }
  

  
  
