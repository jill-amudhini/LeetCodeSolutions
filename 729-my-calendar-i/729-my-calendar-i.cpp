class MyCalendar {
public:
    vector< pair <int,int> > bookings;
    MyCalendar() {
        
    }
    
    bool binary_search(int start, int end)
    {
        if(bookings.size()==0)
            return false;
        
        // cout<<start<<' '<<end<<":\n";
        int high=bookings.size()-1,low=0;
        int mid;
        while(high>=low)
        {
            
            mid=low+(high-low)/2;
            // cout<<"mid"<<mid<<":"<<bookings[mid].first<<" "<<bookings[mid].second<<endl;
            if(start<=bookings[mid].first && end>=bookings[mid].second)
            {
                return true;
            }
            if(start>=bookings[mid].first && end<=bookings[mid].second)
            {
                return true;
            }
            if((start>=bookings[mid].first && start<bookings[mid].second) || 
               (end>bookings[mid].first && end<=bookings[mid].second) )
            {
                return true;
            }
            
            if(start>=bookings[mid].second)
            {
                low=mid+1;
                // cout<<"Called L"<<low<<" "<<high<<endl;
                continue;
            }
            if(end<=bookings[mid].first)
            {
                high=mid-1;
                // cout<<"Called H"<<low<<" "<<high<<endl;
                continue;
            }
            
        }
        
        return false;
    }
    
    bool book(int start, int end) 
    {
        // cout<<"INSERT"<<start<<" "<<end<<endl;
        
        if(binary_search(start,end))
        {
            return false;
        }
        else
        {
            bookings.push_back(make_pair(start,end));
            sort(bookings.begin(),bookings.end());
        }
        
        return true;
    }
      
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */