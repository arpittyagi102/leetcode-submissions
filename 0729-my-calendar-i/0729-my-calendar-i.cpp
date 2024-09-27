class MyCalendar {
    vector<pair<int,int>> bookedTimeSlots;
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(auto slot: bookedTimeSlots){
            if(slot.first < end && start < slot.second){
                return false;
            }
        }

        bookedTimeSlots.push_back(make_pair(start,end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */