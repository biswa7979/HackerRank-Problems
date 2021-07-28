//hacker-rank String stream
vector<int> parseInts(string str) {
    
	stringstream ss(str);
    int a;
    char ch;
    vector<int> v;
        while (ss >> a)
        {
                v.push_back(a);
                if (ss.peek() == ',')
                ss.ignore();
            
        }
       
    return v;
}